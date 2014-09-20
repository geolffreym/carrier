/* 
 * File:   ArrayAssoc.h
 * Author: gmena
 *
 * Created on 26 de agosto de 2014, 08:57 AM
 */
#include <vector>
#include <map>


#ifndef ARRAY_H
#define    ARRAY_H

using namespace std;

typedef struct {
    string index;
    string value;
} Box;

typedef struct {
    string index;
    vector<Box> data;
} Data;

template<class T>

class Array {
public:

    void addItem (string name) {
        Data d;
        d.index = name;
        this->container.push_back (d);
    }

    int getSize () {
        return this->container.size ();
    }

    Data getItem (T index) {
        int i = 0;
        for (; i < this->getSize (); i++) {
            if (this->container[i].index == index) {
                return this->container[i];
            }
        }
    }


    int inArray (T index) {

        int i = 0;
        for (; i < this->getSize (); i++) {
            if (this->container[i].index == index) {
                return i;
            }
        }

        return 0;

    }


    void append (T parent, T index, T value) {
        int i;
        if ((i = this->inArray (parent))) {
            Box d;
            d.index = index;
            d.value = value;
            this->container[i].data.push_back (d);
        }

    }


private:
    vector<Data> container;
};

#endif	/* ARRAYASSOC_H */

