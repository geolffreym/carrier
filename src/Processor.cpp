/* 
 * File:   Proccesor.cpp
 * Author: gmena
 * 
 * Created on 23 de agosto de 2014, 02:37 PM
 */

#include "Processor.h"


using namespace std;

<<<<<<< HEAD
vector<Data> Processor::dataMake (string &destinyDir) {
    JSON json;
    File file;
    string confFile = this->service.getConfFile ();
    destinyDir = this->service.getDirPack ();

    if (file.isFile (confFile)) {
        return json.parseJSONFile (confFile);
    } else {
        Console::error ("|> File carrier.json not found in " + confFile);
=======
vector<Data> Processor::dataMake () {
    JSON json;
    File file;
    this->destinyDir = this->service.getDirPack ();
    this->confFile = this->service.getConfFile ();

    if (file.isFile (this->confFile)) {
        return json.parseJSONFile (this->confFile);
    } else {
        Console::error ("|> File carrier.json not found in " + this->confFile);
>>>>>>> 2256fe83497b182bc20ecb9b5602af0f9e1ef8a0
        exit (1);
    }
}

<<<<<<< HEAD
=======
string Processor::getDestinyDir () {
    return this->destinyDir;
}

>>>>>>> 2256fe83497b182bc20ecb9b5602af0f9e1ef8a0



