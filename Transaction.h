//
// Created by nikang on 12/22/16.
//

#ifndef AP_TRANSACTION_H
#define AP_TRANSACTION_H

#include "Date.h"

class Date;

class Transaction {
    long trans_id;
    long book_id;
    long member_id;
    Date *issue_date;
    Date *due_date;
};


#endif //AP_TRANSACTION_H
