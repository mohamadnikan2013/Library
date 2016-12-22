//
// Created by nikang on 12/22/16.
//

#ifndef AP_LIBRARY_H
#define AP_LIBRARY_H

#include <iostream>
#include <map>

#include "Librarian.h"
#include "Book.h"
#include "Date.h"
#include "Transaction.h"
#include "Member.h"

class Date;

class Book;

class Librarian;

class Transaction;

class Member;

using namespace std;

class Library {
    string name;
    map<long, Librarian *> librarians;
    map<long, Member *> members;
    map<long, Book *> books;
    Date *date;
    map<long, Transaction *> transactions;
    map<long, Writer *> writers;
};


#endif //AP_LIBRARY_H
