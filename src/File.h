/* 
 * File:   File.h
 * Author: gmena
 *
 * Created on 23 de agosto de 2014, 02:51 PM
 */

#include <string>
#include <sstream>
#include <iostream>
#include <cstring>
#include <fstream>
#include <unistd.h>
#include <sys/stat.h>

#ifndef FILE_H
#define    FILE_H

using namespace std;

class File {
public:
    string readAt (const char *dir);

    void make (string dir);

    void rm (string dir);

    bool isFile (string path);

    bool isDir (string path);

private:

};

#endif	/* FILE_H */

