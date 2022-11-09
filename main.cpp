#include <iostream>

using namespace std;

class Book {
    public :
        string title;
        string author;
        int pages;
};

int main () 
{

    Book book1;
    book1.title = "Lord of The Rings";
    book1.author = "Tolkien";
    book1.pages = 500;

    Book book2;
    book2.title = "Lord of The Flies";
    book2.author = "William Golding";
    book2.pages = 400;

    cout << book1.title << endl;
    cout << book2.title;

    return 0;
}