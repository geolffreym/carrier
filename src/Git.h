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

<<<<<<< HEAD
=======
    ~Git () {
        delete this;
    }

>>>>>>> 2256fe83497b182bc20ecb9b5602af0f9e1ef8a0
private:

};

#endif	/* GIT_H */

