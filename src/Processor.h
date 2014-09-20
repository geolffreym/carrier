/* 
 * File:   Proccesor.h
 * Author: gmena
 *
 * Created on 23 de agosto de 2014, 02:37 PM
 */

#ifndef PROCCESOR_H
#define    PROCCESOR_H

#include "Service.h"
#include "JSON.h"
#include "File.h"
#include "Console.h"
#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Processor {
public:
<<<<<<< HEAD

=======
>>>>>>> 2256fe83497b182bc20ecb9b5602af0f9e1ef8a0
    Processor (const Service &service) {
        this->service = service;
    };

<<<<<<< HEAD
    vector<Data> dataMake (string &destinyDir);

private:
=======
    ~Processor () {
        delete this;
    };


    string getDestinyDir ();

    vector<Data> dataMake ();

private:
    string destinyDir;
    string confFile;
>>>>>>> 2256fe83497b182bc20ecb9b5602af0f9e1ef8a0
    Service service;

};

#endif	/* PROCCESOR_H */

