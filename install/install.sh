#!/bin/sh

MAIN=/src/carrier-dependencies/
INSTALL=/usr/local
CARRIER=${PWD##*/}

echo "\nWelcome to Carrier Package Manager. Let's get fun."
echo "Installing Dependencies. Please Wait ..."

echo "\nUpdating Local Repos.."

if VERB="$( which apt-get )" 2> /dev/null; then
    apt-get -qq -y -m  update > /dev/null

    echo "\nInstalling Git"
    apt-get -qq -y install libcurl4-gnutls-dev libexpat1-dev gettext libz-dev libssl-dev
    apt-get -qq -y install git

    echo "\nInstalling Subversion"
    apt-get  -qq -y install apache2-dev
    apt-get  -qq -y install subversion
    apt-get  -qq -y install libapache2-svn

    echo "\nInstalling Cmake and Libs dependencies"
    apt-get -qq -y install cmake
    apt-get -qq -y install tcl8.4-dev
    apt-get -qq -y install libjson0 libjson0-dev
    apt-get -qq -y install libbsd-dev libgoogle-glog-dev pkg-config autotools-dev python-dev automake autoconf libtool make g++


elif VERB="$( which yum )" 2> /dev/null; then
    yum update

    echo "\nInstalling Git"
    yum install curl-devel expat-devel gettext-devel openssl-devel zlib-devel
    yum install git

    echo "\nInstalling Subversion"
    yum install subversion
    yum install mod_dav_svn

    echo "\nInstalling Cmake"
    yum install cmake

elif VERB="$( which portage )" 2> /dev/null; then
   echo "Gentoo-based"
elif VERB="$( which pacman )" 2> /dev/null; then
   echo "Arch-based"
fi



if ! [ -d "/src" ] ; then
    mkdir /src
fi

if ! [ -d "/.carrier" ] ; then
    mkdir ~/.carrier && cd ~/.carrier && mkdir config

fi

echo "Copying config.ini at ~/.carrier/config"
cp -fr ./config.ini ~/.carrier/config

echo "\nCloning Dependencies"

cd /src
git clone https://github.com/geolffreym/carrier-dependencies.git

echo "Going inside dependencies\n"
cd $MAIN

echo "\nProcessing Dependencies"
echo "\n\nProcessing JSON-C Lib"

tar -xvf json-c.tar.gz
cd json-c && ./autogen.sh && ./configure --prefix=$INSTALL && make && make install && cd $MAIN

#tar -xvf json-c-0.12.tar.gz
#cd json-c-0.12
#sed -i s/-Werror// Makefile.in
#./configure --prefix=/usr --disable-static
#make -j1
#make install

echo "\n\nProcessing Git Lib"
tar -xvf libgit2-0.21.1.tar.gz
cd libgit2-0.21.1 && mkdir build && cd build
cmake .. && cmake --build . && cmake .. -DCMAKE_INSTALL_PREFIX=/usr/local && cmake --build . --target install && cd $MAIN

echo "\n\nProcessing Apr Lib"
tar -xvf apr-1.5.1.tar.gz
cd apr-1.5.1 && ./buildconf && ./configure --prefix=$INSTALL  --disable-static  --with-installbuilddir=/usr/local/share/apr-1/build && make && make install && cd $MAIN

echo "\n\nProcessing Apr Util Lib"
tar -xvf apr-util-1.5.3.tar.gz

cd apr-util-1.5.3 && ./configure --prefix=$INSTALL  --with-apr=/usr/local  --with-gdbm=/usr  --with-openssl=/usr --with-crypto && make && make install && cd $MAIN

echo "\n\nProcessing Serf Lib"
tar -xvf serf-1.2.1.tar.bz2
cd serf-1.2.1 && ./configure --prefix=$INSTALL && make && make install && cd $MAIN

echo "\n\nProcessing SVN Lib"
tar -xvf subversion-1.8.10.tar.bz2
cd subversion-1.8.10
./configure --with-serf=/usr/local/serf/

#--with-apr=/usr/local/apr/ --with-apr-util=/usr/local/apr/
make && make install && cd $MAIN

echo "\n\nProcessing LibIni"
tar -xvf libini-1.1.10.tar.gz
cd libini-1.1.10 && ./configure --prefix=$INSTALL && make && make install && cd $MAIN


cd /src && rm -rf carrier-dependencies
echo "\nProcess Complete. Please watch the README"


