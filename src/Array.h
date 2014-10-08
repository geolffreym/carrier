/* 
 * File:   ArrayAssoc.h
 * Author: gmena
 *
 * Created on 26 de agosto de 2014, 08:57 AM
 */
#include <vector>
#include <map>
#include <iostream>


#ifndef ARRAY_H
#define    ARRAY_H

using namespace std;

typedef struct {
    string index;
    string value;
} Box;

typedef struct {
    string index;
    vector <Box> data;
} Data;

template <class T>

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
        for ( ; i < this->getSize (); i++ ) {
            if ( this->container[ i ].index == index ) {
                return this->container[ i ];
            }
        }
    }


    long inArray (T index) {

        int i = 0, max = this->getSize ();
        for ( ; i < max; i++ ) {
            if ( this->container[ i ].index == index ) {
                return i;
            }
        }

        return -1;

    }


    void append (T parent, T index, T value) {
        int i = 0;
        if ( (i = this->inArray (parent)) > -1 ) {
            Box d;
            d.index = index;
            d.value = value;
            this->container[ i ].data.push_back (d);
        }

    }


private:
    vector <Data> container;
};

#endif	/* ARRAYASSOC_H */

