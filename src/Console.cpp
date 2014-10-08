/* 
 * File:   Console.cpp
 * Author: gmena
 * 
 * Created on 06 de septiembre de 2014, 09:00 AM
 */

#include "Console.h"

using namespace std;

void Console::success (string log) {
    Console::date ();
    cout << "\033[0;32m" + log + "\033[0m";
}

void Console::error (string log) {
    Console::date ();
    cout << "\033[0;31m" + log + "\033[0m";
}

void Console::warning (string log) {
    cout << "\033[0;34m" + log + "\033[0m";
}

void Console::header (string log) {
    Console::warning ("\n|>-- " + log + " --<|\n");
}

void Console::date () {

    Date date = Util::getTime ();


    cout << "\033[0;34m";
    cout << "\n-------------------------------\n|> ";

    cout << date.sday + ", "
            << date.smonth + " ";

    if (date.day < 10)
        cout << "0" << date.day << " - ";
    else
        cout << date.day << " - ";


    if (date.hours < 10)
        cout << "0" << date.hours << ":";
    else
        cout << date.hours << ":";

    if (date.minutes < 10)
        cout << "0" << date.minutes;
    else
        cout << date.minutes;


    cout << "\n-------------------------------\n";


}
