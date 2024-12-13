#include <iostream>
#include <vector>
using namespace std;

struct Book
{
    string title;
    string author;
    int year;
};

void printBooksAfterYear(Book *b, int n, int targetYear)
{
    for (int i = 0; i < n; ++i)
    {
        if (b[i].year >= targetYear)
        {
            cout << b[i].title << endl;
            cout << b[i].author << endl;
            cout << b[i].year << endl;
        }
    }
}

int main()
{
    int n = 3;
    Book *books = new Book[n];


    books[0] = {"Voina i mir", "Lev Toltoy", 1869};
    books[1] = {"1984", "Djorj Oruell", 1949};
    books[2] = {"Master i Margaritta", "Mihail Bulgakov", 1967};

    int targetYear = 1950;
    printBooksAfterYear(books, n, targetYear); //2

    delete[] books;

    return 0;
}
