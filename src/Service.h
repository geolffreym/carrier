/* 
 * File:   Processor.h
 * Author: gmena
 *
 * Created on 23 de agosto de 2014, 09:17 AM
 */

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

#ifndef SERVICE_H
#define SERVICE_H

#ifdef WINDOWS
        #include <direct.h>
        #define get_dir _getcwd    
    #else

#include <unistd.h>

#define get_dir getcwd
#endif

using namespace std;

class Service {
private:
    string conf;
    string pack;

public:

    Service (void) {
    }

    void setConfFile (string config);

    void setDirPack (string config);

    string getConfFile ();

    string getDir (string dir);

    string getDirPack ();
};


#endif	/* PROCESSOR_H */

