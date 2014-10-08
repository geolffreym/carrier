Carrier
=======
Review the state of the art package managers in other languages, python pip - PyPI , NPM node , java maven

(Pending)

Config
------

You must create a file with file.json dependency information you want to get

Example:


    {

        "git": {
            "php-login": "https://github.com/panique/php-login.git"
        },
        "svn": {
            "wiki": "http://svn.wikimedia.org/svnroot/mediawiki/trunk/phase3"
        }

    }


Modifies the /install/config.ini file. Sets the directories and configuration file to suit your preference

Example:

    [DIRECTORIES]
    base_dir = /home/mydir/
    config_dir = config
    package_dir = package
    config_file_name = carrier.json
    
Run `./install.sh` to get dependencies and configure carrier

Compile
-------


    $ cd ${mypath}/carrier/
    $ mkdir build 
    $ cd build && cmake .. && cmake --build . && cmake --build . --target install


Usage
------

Just type carrier to begin the process of automatic management. If you want to change the information in your config.ini, you must edit the file /usr/local/share/carrier/config/config.ini

    $ carrier -s
     
Recharging gets an updated version of the packages
    
    $ carrier -r -p [pack_name optional] 

Clean the packages

    $ carrier -c -p [pack_name optional] 
    






