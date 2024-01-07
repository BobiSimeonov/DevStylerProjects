#include "BookServices.h"
#include "book.h"

Book BookService::create_book()
{
    string author = "";
    cout << "Enter the name of the author: ";
    cin >> author;

    string title = "";
    cout << "Enter the title of the book: ";
    cin >> title;

    int publishing_year = 0;
    cout << "When was the book published: ";
    cin >> publishing_year;

    float price = 0;
    cout << "What is the price of the book: ";
    cin >> price;

    return Book(author, title, publishing_year, price);
}

void BookService::find_by_author(vector<Book>& books)
{   
    string author = "";
    cout << "Which author are you looking for: ";
    cin >> author;
    for (int i = 0; i < books.size(); i++) {
        if (books[i].get_author() == author) {
            books[i].display_book();
        }
    }
}

void BookService::get_most_expensive(vector<Book>& books) {
    int max_price = 0;
    int index = 0;
    for (int i = 0; i < books.size(); i++) {
        if (books[i].get_price() >= max_price) {
            index = i;
            max_price = books[i].get_price();
        }
    }
    cout << "The most expensive book in the collection is:" << endl;
    books[index].display_book();

}
