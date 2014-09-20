/* 
 * File:   Console.h
 * Author: gmena
 *
 * Created on 06 de septiembre de 2014, 09:00 AM
 */
#include <string>
#include <iostream>
#include "Util.h"

using namespace std;

#ifndef CONSOLE_H
#define	CONSOLE_H


class Console {
public:
    static void success(string log);
    static void error(string log);
    static void warning(string log);
<<<<<<< HEAD
    static void header(string log);
=======
>>>>>>> 2256fe83497b182bc20ecb9b5602af0f9e1ef8a0
    static void date();
    
private:

};

#endif	/* CONSOLE_H */

