/* 
 * File:   PackGestor.cpp
 * Author: gmena
 * 
 * Created on 28 de agosto de 2014, 09:38 AM
 */

#include "PackGestor.h"
#include "Array.h"


using namespace std;


void PackGestor::gitManage (string destiny, const vector<Box> &url) {
    Git git;
<<<<<<< HEAD
    Console::header ("Cloning Git repositories");
=======
    Console::warning ("\n|>-----------------********Cloning Git repositories***********-----------------<|\n");
    Console::warning ("|>-----------------***************Please Wait*****************-----------------<|\n");

>>>>>>> 2256fe83497b182bc20ecb9b5602af0f9e1ef8a0
    git.clone (destiny, url);

}


<<<<<<< HEAD
//void PackGestor::composerManage (string compose) {
//
//}

void PackGestor::svnManage (string destiny, const vector<Box> &url) {
    SVN svn;
    Console::header ("Checkout SVN repositories");
    svn.checkout (destiny, url);
}

void PackGestor::build () {

    int i = 0;
    string destiny;
    vector<Data> data = this->process.dataMake (destiny);

=======
void PackGestor::composerManage (string compose) {

}

void PackGestor::svnManage (string destiny, const vector<Box> &url) {
    SVN svn;
    Console::warning ("\n|>-----------------********Checkout SVN repositories***********-----------------<|\n");
    Console::warning ("|>-----------------****************Please Wait*****************-----------------<|\n");

    svn.checkout (destiny, url);

}

void PackGestor::build (Processor &processor) {

    int i = 0;
    vector<Data> data = processor.dataMake ();
    string destiny = processor.getDestinyDir ();
>>>>>>> 2256fe83497b182bc20ecb9b5602af0f9e1ef8a0
    enum myTypes {
        composer,
        git,
        svn
    };

    for (; i < data.size (); i++) {
        auto it = this->types.find (data[i].index.c_str ())->second;
        const vector<Box> get = data[i].data;

        switch (it) {
            case composer:

                break;
            case git:
                this->gitManage (destiny, get);
                break;
            case svn:
                this->svnManage (destiny, get);
                break;
        }
    }
<<<<<<< HEAD

=======
>>>>>>> 2256fe83497b182bc20ecb9b5602af0f9e1ef8a0
}


