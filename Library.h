//
// Created by nikang on 12/22/16.
//

#ifndef AP_LIBRARY_H
#define AP_LIBRARY_H

#include <iostream>
#include <set>

#include "Librarian.h"
#include "Book.h"
#include "Date.h"

class Date;

class Book;

class Librarian;

using namespace std;

class Library {
    set<Librarian *> librarians;
    set<Book *> books;
    Date *date;
};


#endif //AP_LIBRARY_H
