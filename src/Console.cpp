/* 
 * File:   Console.cpp
 * Author: gmena
 * 
 * Created on 06 de septiembre de 2014, 09:00 AM
 */

#include "Console.h"

using namespace std;

<<<<<<< HEAD
void Console::success (string log) {
    Console::date ();
    cout << "\033[0;32m" + log + "\033[0m";
}

void Console::error (string log) {
    Console::date ();
    cout << "\033[0;31m" + log + "\033[0m";
}

void Console::warning (string log) {
    cout << "\033[0;36m" + log + "\033[0m";
}

void Console::header (string log) {
    Console::warning ("\n|>-----------------********" + log + "***********-----------------<|\n");
}

void Console::date () {

    Date date = Util::getTime ();


    cout << "\033[0;35m";
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


=======
void Console::success(string log)
{
     Console::date();
     cout << "\033[0;32m"   + log + "\033[0m";
}

void Console::error(string log)
{
    Console::date();
    cout << "\033[0;31m" + log + "\033[0m";   
}

void Console::warning(string log)
{
      cout << "\033[0;36m"  +  log + "\033[0m";
}

void Console::date()
{
    
    Date date = Util::getTime();
    
    
    cout << "\033[0;35m";
    cout << "\n-------------------------------\n|> ";         
    
    cout << date.sday + ", "
         << date.smonth + " ";
         
    if(date.day < 10)   
      cout << "0" << date.day << " - ";
    else
      cout << date.day << " - ";
    
              
    if (date.hours < 10)
      cout << "0" << date.hours << ":";
    else
      cout << date.hours << ":";

    if (date.minutes < 10)
      cout  << "0" << date.minutes;
    else 
      cout << date.minutes;

    
    cout << "\n-------------------------------\n" ;    
         
            
>>>>>>> 2256fe83497b182bc20ecb9b5602af0f9e1ef8a0
}
