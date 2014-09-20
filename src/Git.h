/* 
 * File:   git.h
 * Author: gmena
 *
 * Created on 05 de septiembre de 2014, 10:38 AM
 */

#include "Array.h"
#include "File.h"
#include "Console.h"
#include <git2.h>
#include <iostream>

using namespace std;

#ifndef GIT_H
#define    GIT_H

class Git {
public:
    void clone (string destiny, const vector<Box> &url);

    void error ();

private:

};

#endif	/* GIT_H */

