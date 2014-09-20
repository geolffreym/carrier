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

    Processor (const Service &service) {
        this->service = service;
    };

    vector<Data> dataMake (string &destinyDir);

private:
    Service service;

};

#endif	/* PROCCESOR_H */

