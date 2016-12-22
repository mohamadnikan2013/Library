//
// Created by nikang on 12/22/16.
//

#ifndef AP_BOOK_H
#define AP_BOOK_H

#include <iostream>

#include "Writer.h"
#include "Date.h"

class Writer;

class Date;

using namespace std;

class Book {
    long book_id;
    string name;
    long price;
    Writer *writer;
    bool is_issued;
    Date *date_of_purchase;
};


#endif //AP_BOOK_H
