//
// Created by Jarvis on 12/30/2018.
//

#include "someThingNecessary.h"
#include <iostream>
#include <conio.h>
#include <vector>
#include <ctime>
using namespace std;

void clrscr(){
    system("@cls||clear");
}

myDate nowTime(){
    time_t now = time(0);
    tm *ltm = localtime(&now);
    myDate md;
    md.year=ltm->tm_year;
    md.month=ltm->tm_mon;
    md.day=ltm->tm_mday;
    md.hour=ltm->tm_hour;
    md.min=ltm->tm_min;
    md.sec=ltm->tm_sec;
    return md;
}