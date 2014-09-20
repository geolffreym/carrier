/* 
 * File:   Proccesor.cpp
 * Author: gmena
 * 
 * Created on 23 de agosto de 2014, 02:37 PM
 */

#include "Processor.h"


using namespace std;

vector<Data> Processor::dataMake (string &destinyDir) {
    JSON json;
    File file;
    string confFile = this->service.getConfFile ();
    destinyDir = this->service.getDirPack ();

    if (file.isFile (confFile)) {
        return json.parseJSONFile (confFile);
    } else {
        Console::error ("|> File carrier.json not found in " + confFile);
        exit (1);
    }
}




