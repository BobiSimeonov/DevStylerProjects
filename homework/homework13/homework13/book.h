#ifndef CPPCLASSES_BOOK_H
#define CPPCLASSES_BOOK_H
#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    Book();
    Book(string, string, int, float);
    void set_author(string);
    string get_author();
    void set_publishing_year(int);
    int get_publishing_year();
    void set_title(string);
    string get_title();
    void set_price(float);
    float get_price();
    void display_book();

private:
    string author;
    string title;
    int publishing_year;
    float price;
};

#endif //CPPCLASSES_BOOK_H

