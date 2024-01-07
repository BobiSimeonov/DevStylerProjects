# ifndef CPPCLASSES_BOOKSERVICES_H
# define CPPCLASSES_BOOKSERVICES_H
# include "book.h"
# include <vector>

class BookService {
public:
    Book create_book();
    void find_by_author(vector<Book>&);
    void get_most_expensive(vector<Book>& books);
};
# endif //CPPCLASSES_BOOKSERVICES_H