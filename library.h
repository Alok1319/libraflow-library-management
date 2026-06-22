#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <vector>
using namespace std;

class Book {
public:
    int id;
    string title;
    bool issued;

    Book(int i, string t);

    void display();
};

class Library {
private:
    vector<Book> books;

public:
    void addBook();
    void showBooks();
    void issueBook();
    void returnBook();
};

#endif