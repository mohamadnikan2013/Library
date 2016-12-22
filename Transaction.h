//
// Created by nikang on 12/22/16.
//

#ifndef AP_TRANSACTION_H
#define AP_TRANSACTION_H

#include "Date.h"
#include "Book.h"
#include "Member.h"

class Date;

class Book;

class Member;

class Transaction {
    long trans_id;
    Book *book;
    Member *member;
    Date *issue_date;
    Date *due_date;
    bool is_finished;
};


#endif //AP_TRANSACTION_H
