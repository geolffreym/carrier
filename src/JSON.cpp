/* 
 * File:   JSON.cpp
 * Author: gmena
 * 
 * Created on 23 de agosto de 2014, 10:23 AM
 */

#include "JSON.h"


using namespace std;

void JSON::recursiveData (json_object *jobj) {

    enum json_type type;

    json_object_object_foreach(jobj, key, val) {
        type = json_object_get_type (val);

        if (type == json_type_string) {
            if (this->parent.size () > 0) {
                this->content.append (this->parent, key, json_object_get_string (val));
            }


        } else {
            if (type == json_type_object) {
                string newVal = json_object_get_string (val);
                if (newVal.size () > 3) {
                    this->parent = key;
                    const char *newCharVal = newVal.c_str ();

                    if (!this->content.inArray (key)) {
                        this->content.addItem (key);
                        this->recursiveData (json_tokener_parse (newCharVal));
                        this->data.push_back (this->content.getItem (this->parent));

                    }

                }

            }
        }

    }
}

string JSON::getJSONFile (string jsonFile) {
    File file;
    const char *directory = (jsonFile.c_str ());
    return file.readAt (directory);

}

<<<<<<< HEAD
vector<Data> JSON::parseJSONFile (string jsonFile) {
=======
vector<Data> JSON::parseJSONFile (const string jsonFile) {
>>>>>>> 2256fe83497b182bc20ecb9b5602af0f9e1ef8a0

    string jsonString = this->getJSONFile (jsonFile);
    const char *jsonChar = jsonString.c_str ();
    json_object *jobj = json_tokener_parse (jsonChar);
    this->recursiveData (jobj);

    return this->data;
}