/* 
 * File:   Util.h
 * Author: gmena
 *
 * Created on 06 de septiembre de 2014, 09:15 AM
 */
#include <ctime>
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

#ifndef UTIL_H
#define    UTIL_H

typedef struct {
    int seconds;
    /* Seconds.	[0-60] (1 leap second) */
    int minutes;
    /* Minutes.	[0-59] */
    int hours;
    /* Hours.	[0-23] */
    int day;
    /* Day.		[1-31] */
    int wday;
    string sday;
    int month;
    /* Month.	[0-11] */
    string smonth;
    int year;
    /* Year	- 1900.  */
    int dweek;            /* Day of week.	[0-6] */

} Date;

class Util {
public:

    static Date getTime ();

private:

};

#endif	/* UTIL_H */

