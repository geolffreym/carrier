/* 
 * File:   main.cpp
 * Author: gmena
 *
 * Created on 20 de agosto de 2014, 11:35 AM
 */

#include "main.h"

using namespace std;

int main () {

    int r;
    ini_fd_t fd;

    char buffer[100], *p = buffer;
    const char *keys[] = {"base_dir", "config_dir", "package_dir", "config_file_name"};
    const char *config = "~/.carrier/config/config.ini";

    //string dir = reQuery (service);

    fd = ini_open (config, "w", ";");
    auto size = (end (keys) - begin (keys)) - 1;
    vector <string> result = {};

    int i = -1;

    //Reading Directories
    if ( fd != NULL ) {
        r = ini_locateHeading (fd, "DIRECTORIES");
        if ( r > -1 ) {
            while ( (i++) < size ) {
                r = ini_locateKey (fd, keys[ i ]);
                if ( r > -1 ) {
                    ini_readString (fd, p, 100);
                    result.push_back (buffer);
                }
            }

        }

    } else {
        cout << "Error opening " << config;
    }

    ini_close (fd);

    //Service Init
    Service service;
    const string main = result.at (0);
    service.setDirPack (main + result.at (2) + "/");
    service.setConfFile (main + result.at (1) + "/" + result.at (3));

    Processor process (service);
    PackGestor pack (process);

    //Pack Gestor of Process
    pack.build ();

    return 0;

}

