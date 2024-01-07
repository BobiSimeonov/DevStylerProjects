# include <iostream>
# include <vector>
# include "book.h"
# include "BookServices.h"

using namespace std;

// koito da izvejdat nai-evtina/nai-skapa kniga
int main()
{
	vector<Book> books;
	int number_of_books = 0;
	cout << "Enter the amount of books you want to add: ";
	cin >> number_of_books;
	BookService bs;

	for (int i = 0; i < number_of_books; i++) {
		books.push_back(bs.create_book());
	}
	for (int i = 0; i < number_of_books; i++) {
		cout << "Book number " << i + 1 << " is:" << endl;
		books[i].display_book();
		cout << endl;
	}

	bs.find_by_author(books);
	bs.get_most_expensive(books);
	return 0;
}