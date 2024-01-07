#include "book.h"


Book::Book(string author, string title, int publishing_year, float price) {
    set_author(author);
    set_title(title);
    set_publishing_year(publishing_year);
    set_price(price);
}

void Book::set_author(string author) {
    this->author = author;
};
string Book::get_author() {
    return author;
};

void Book::set_publishing_year(int publishing_year) {
    this->publishing_year = publishing_year;
};
int Book::get_publishing_year() {
    return publishing_year;
};

void Book::set_title(string title) {
    this->title = title;
};
string Book::get_title() {
    return title;
};

void Book::set_price(float price) {
    this->price = price;
};
float Book::get_price() {
    if (price > 0) {
        return price;
    }
    else {
        cout << "Invalid price. Must be a possitive number." << endl;
    }
};

void Book::display_book() {
    cout << "Author: " << author << endl;
    cout << "Title: " << title << endl;
    cout << "Published in: " << publishing_year << endl;
    cout << "Price is: " << price << endl;
};