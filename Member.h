//
// Created by nikang on 12/22/16.
//

#ifndef AP_MEMBER_H
#define AP_MEMBER_H

#include <iostream>

#include "Bill.h"
#include "Date.h"

class Bill;

class Date;

using namespace std;

class Member {
    long member_id;
    int number_of_book_issued;
    int max_book_limit;
    string name;
    string phone_number;
    string address;
    Date *date_of_membership;
    Bill *bill;
};


#endif //AP_MEMBER_H
