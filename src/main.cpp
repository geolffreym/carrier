/* 
 * File:   main.cpp
 * Author: gmena
 *
 * Created on 20 de agosto de 2014, 11:35 AM
 */

#include "main.h"

using namespace std;

int main () {

    Service service;
    string dir = reQuery (service);

    //Service Init
    service.setDirPack (dir + "app/package/");
    service.setConfFile (dir + "app/config/carrier.json");


    Processor process (service);
    PackGestor pack (process);

    //Pack Gestor of Process
    pack.build ();

    return 0;

}

