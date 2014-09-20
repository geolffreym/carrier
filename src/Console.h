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
    static void header(string log);
    static void date();
    
private:

};

#endif	/* CONSOLE_H */

