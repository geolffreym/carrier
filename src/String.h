/* 
 * File:   String.h
 * Author: gmena
 *
 * Created on 23 de agosto de 2014, 11:06 AM
 */

#include <algorithm>
#include <string>
#include <iostream>
#include <cstring>

#ifndef STRING_H
#define	STRING_H

using namespace std;

class Str
{
    public:
        Str(void);
        int findPosition(string target, string filter, int limit);
        string replaceStr(string &search, string &replace,  string &target);
        string replaceAll(string &search, string &replace, string &target);
        string subStr(string &target, int to, int from);
        string posStr(string find, string &target);

};

#endif	/* STRING_H */

