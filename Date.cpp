//
// Created by nikang on 12/22/16.
//

#include "Date.h"

Date::Date(int month, int day, int year) : month(month), day(day), year(year) {}

void Date::set_date(int month, int day, int year) {
    this->day = day, this->month = month, this->year = year;
}

void Date::display() {
    cout << '\n' << name[month] << ' ' << day << "," << year << '\n';
}
//return date from year begging

int Date::days_so_far() {
    int total = 0;
    for (int i=1; i < month; i++) total += length[i];
    total += day;
    return (total);
}

int Date::sub(Date *date) {
    return abs(this->days_so_far()- date->days_so_far());
}
