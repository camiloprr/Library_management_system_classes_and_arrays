#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Book {
public:
    int bookID;
    string title;
    string author;
    Book(int id, string t, string a) {
        bookID = id;
        title = t;
        author = a;
    }
    void displayInfo() {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};
class Library {
public:
    vector <Book> books;
    void addBook(int id, string t, string a) {
       Book newBook(id, t, a);
        books.push_back(newBook);

    }
    void displayInfo() {
        for (int i = 0; i < books.size(); i++) {
            books[i].displayInfo();
        }
    }


};
int main() {
    Library library;
    int choice;
    int id;
    string title;
    string author;
    do {
        cout << "library System Management" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display all books" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter book ID: ";
                cin >> id;
                cin.ignore();
                cout << "Enter title: ";
                getline(cin, title);
                cout << "Enter author: ";
                getline(cin, author);
                library.addBook(id, title, author);
            break;

            case 2:
                library.displayInfo();
            break;

            case 3:
                cout << "Exiting. Thank you for using this program." << endl;
            break;

            default:
                cout << "Invalid Input." << endl;
        }
    }while (choice != 3);

    return 0;
}
