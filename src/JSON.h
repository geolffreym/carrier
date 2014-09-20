/* 
 * File:   JSON.h
 * Author: gmena
 *
 * Created on 23 de agosto de 2014, 10:23 AM
 */


#include "File.h"
#include "Array.h"
#include <algorithm>
#include <vector>
#include <json-c/json.h>


#ifndef JSON_H
#define    JSON_H

using namespace std;

class JSON {
private:
    string parent;

    string getJSONFile (string jsonFile);

    void recursiveData (json_object *jobj);

    vector<Data> data;
    Array<string> content;


public:

    vector<Data> parseJSONFile (const string file);
<<<<<<< HEAD
=======

    ~JSON () {
        delete this;
    }
>>>>>>> 2256fe83497b182bc20ecb9b5602af0f9e1ef8a0
};

#endif	/* JSON_H */