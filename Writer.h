//
// Created by nikang on 12/22/16.
//

#ifndef AP_WRITER_H
#define AP_WRITER_H

#include <iostream>
#include <set>
#include "Book.h"

class Book;

using namespace std;

class Writer {
    long write_id;
    string name;
    set<Book *> books;
};


#endif //AP_WRITER_H
