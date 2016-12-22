//
// Created by nikang on 12/22/16.
//

#ifndef AP_DATE_H
#define AP_DATE_H

#include <iostream>
#include <math.h>
using namespace std;

class Date {
    int month, day, year;
    const static string name[14];
    const static int length[14];
public:
    Date(int month = 0, int day = 0, int year = 0);

    void set_date(int month = 0, int day = 0, int year = 0);

    void display();

    int days_so_far();

    int sub(Date *date);
};


#endif //AP_DATE_H
