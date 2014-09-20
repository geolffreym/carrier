/*
 * File:   SVN.h
 * Author: gmena
 *
 * Created on 09 de septiembre de 2014, 11:09 AM
 */
#include <subversion-1/svn_pools.h>
#include <subversion-1/svn_client.h>


#include "Array.h"
#include "Console.h"
#include "File.h"
#include <iostream>

#ifndef SVN_H
#define    SVN_H

using namespace std;

class SVN {
public:
<<<<<<< HEAD
=======
    ~SVN () {
        delete this;
    }

>>>>>>> 2256fe83497b182bc20ecb9b5602af0f9e1ef8a0
    void checkout (string destiny, const vector<Box> &url);

private:

};

#endif	/* SVN_H */

