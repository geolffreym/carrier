/* 
 * File:   Util.cpp
 * Author: gmena
 * 
 * Created on 06 de septiembre de 2014, 09:15 AM
 */

#include "Util.h"

using namespace std;

Date Util::getTime () {
    Date date;

    string days[7] = {
            "Monday",
            "Tuesday",
            "Wednesnay",
            "Thursday",
            "Friday",
            "Saturday",
            "Sunday"
    };

    string months[12] = {
            "January",
            "February",
            "March",
            "April",
            "May",
            "June",
            "July",
            "August",
            "September",
            "Octobet",
            "November",
            "December"
    };

    auto t = time (nullptr);
    struct tm *now = localtime (&t);

    date.seconds = now->tm_sec;
    date.minutes = now->tm_min;
    date.hours = now->tm_hour;
    date.day = now->tm_mday;
    date.wday = now->tm_wday;
    date.sday = days[ now->tm_wday ];
    date.month = (now->tm_mon + 1);
    date.smonth = months[ now->tm_mon ];
    date.year = (now->tm_year + 1900);

    return date;

}
