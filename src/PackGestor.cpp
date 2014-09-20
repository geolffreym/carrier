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
    Console::header ("Cloning Git repositories");
    git.clone (destiny, url);

}


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

}


