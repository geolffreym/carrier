Carrier
=======

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
    BASE_DIR = '/home/mydir/app/'
    CONFIG_DIR = 'config'
    PACKAGE_DIR = 'packages'
    
    
    [CONFIG]
    CONFIG_FILE_NAME = 'file.json'
    
Run `./install.sh` to get dependencies and configure carrier

Compile
-------


    $ cd ${mypath}/carrier/
    $ mkdir build 
    $ cd build && cmake .. && cmake --build . && cmake --build . --target install


Usage
------

Just type carrier to begin the process of automatic management. If you want to change the information in your config.ini, you must edit the file ~ / .carrier / config / config.ini

    $ carrier -start
     
Recharging gets an updated version of the packages
    
    $ carrier -reload -[pack_name optional]

Clean the packages

    $ carrier -clean -[pack_name optional]
    






