/* 
 * File:   File.cpp
 * Author: gmena
 * 
 * Created on 23 de agosto de 2014, 02:51 PM
 */

#include "File.h"

using namespace std;

string File::readAt(const char* dir)
{
<<<<<<< HEAD
    ifstream file(dir);
    string line;
    string output;
    
    while(getline(file, line))
    {
        output += (line + "\n");
=======
    std::ifstream file(dir);
    std::string line;
    std::string output;
    
    while(std::getline(file, line))
    {
        output += (std::string(line) + '\n');
>>>>>>> 2256fe83497b182bc20ecb9b5602af0f9e1ef8a0
    }
    
    return output;
}

bool File::isFile(string path)
{
    struct stat buf;
    stat(path.c_str(), &buf);
    return S_ISREG(buf.st_mode);
}

bool File::isDir(string path)
{
    
    struct stat buf;
    stat(path.c_str(), &buf);
    return S_ISDIR(buf.st_mode);
}

void File::make(string dir)
{
    if(!this->isDir(dir))
    {
        mkdir(dir.c_str(), 0777);
    }
}

