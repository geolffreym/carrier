/* 
 * File:   String.cpp
 * Author: gmena
 * 
 * Created on 23 de agosto de 2014, 11:06 AM
 */

#include "String.h"

using namespace std;

Str::Str(void){}

int Str::findPosition(string target,string filter, int limit)
{
    int count = 0;
    int find = 0;
    string replace("");
    
    while((find = target.find_first_of(filter))!= string::npos)
    {
        this->replaceStr(filter, replace , target);
        
        if(++count == limit)
        {
            break;
        }          
    }
    return find + 3;
}

string Str::replaceStr(string &search, string &replace, string &target)
{
    if(target.find(search) != string::npos){
         return target.replace(target.find(search), search.size(), replace);
    }
       
}

string Str::replaceAll(string &search, string &replace, string &target)
{
    
    while (target.find(search) != string::npos)
    {
        this->replaceStr(search, replace, target);
    }
}

string Str::subStr(string &target, int to, int from)
{
    return target.substr(to, from);
    
}

