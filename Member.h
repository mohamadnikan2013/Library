//
// Created by nikang on 12/22/16.
//

#ifndef AP_MEMBER_H
#define AP_MEMBER_H

#include <iostream>
#include <set>

#include "Bill.h"
#include "Date.h"
#include "Transaction.h"

class Bill;

class Date;

class Transaction;

using namespace std;

class Member {
    long member_id;
    int number_of_book_issued;
    int max_book_limit;
    string name;
    Date *date_of_membership;
    Bill *bill;
    set<Transaction *> transactions;
};


#endif //AP_MEMBER_H
