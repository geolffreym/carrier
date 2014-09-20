/*
 * File:   Processor.cpp
 * Author: gmena
 *
 * Created on 23 de agosto de 2014, 09:17 AM
 */
#include "Service.h"
#include "String.h"

using namespace std;

string Service::getDir(string dir)
{

    char* buffer;

    if((buffer = get_dir(0, 0)))
    {
        Str s;
        string change (buffer);
        return s.subStr(change, 0, s.findPosition(change, "/", 3)) +  dir;
    }

}

void Service::setConfFile(string config)
{
    this->conf = config;
}

string Service::getConfFile()
{
    return this->conf.c_str();
}


void Service::setDirPack(string config)
{
    this->pack = config;

}

string Service::getDirPack()
{
    return this->pack.c_str();
}