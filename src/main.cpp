/* 
 * File:   main.cpp
 * Author: gmena
 *
 * Created on 20 de agosto de 2014, 11:35 AM
 */

#include "main.h"

using namespace std;

<<<<<<< HEAD
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

=======
/*
 * 
 */
int main() {

    Service service;
    Processor process(service);
    PackGestor pack;
    
    string dir = reQuery(service);
    
    //Service Init
    service.setDirPack(dir + "app/package/");
    service.setConfFile(dir + "app/config/carrier.json");

    
    //Pack Gestor of Process
    pack.build(process);
    
    return 0;
    
>>>>>>> 2256fe83497b182bc20ecb9b5602af0f9e1ef8a0
}

