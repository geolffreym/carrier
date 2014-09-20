/* 
 * File:   PackGestor.h
 * Author: gmena
 *
 * Created on 28 de agosto de 2014, 09:38 AM
 */
#include <map>
#include "Array.h"
#include "File.h"
#include "Git.h"
#include "SVN.h"
#include "Processor.h"
#include "Console.h"
#include "String.h"


#ifndef PACKGESTOR_H
#define	PACKGESTOR_H

using namespace std;

class PackGestor {
public:

    map<string, int> types = {
        {"composer", 0},
        {"git", 1},
        {"svn", 2}
    };

<<<<<<< HEAD
    PackGestor (Processor &process) : process(process) {
        this->process = process;
    }

    void build();


private:
    Processor process;
    void gitManage(string destiny, const vector<Box> &url);
    //void composerManage(string compose);
=======
    ~PackGestor (){delete this;}

    void build(Processor &processor);


private:
    void gitManage(string destiny, const vector<Box> &url);
    void composerManage(string compose);
>>>>>>> 2256fe83497b182bc20ecb9b5602af0f9e1ef8a0
    void svnManage(string destiny, const vector<Box> &url);
};

#endif	/* PACKGESTOR_H */

