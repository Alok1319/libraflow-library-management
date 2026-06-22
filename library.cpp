#include "library.h"

Book::Book(int i, string t) {
    id = i;
    title = t;
    issued = false;
}

void Book::display() {
    cout << id << " | " << title
         << " | "
         << (issued ? "Issued" : "Available")
         << endl;
}

void Library::addBook() {
    int id;
    string title;

    cout << "Enter Book ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Title: ";
    getline(cin, title);

    books.push_back(Book(id, title));

    cout << "Book Added\n";
}

void Library::showBooks() {

    if (books.empty()) {
        cout << "No Books Found\n";
        return;
    }

    for (auto &b : books)
        b.display();
}

void Library::issueBook() {

    int id;

    cout << "Enter ID: ";
    cin >> id;

    for (auto &b : books) {

        if (b.id == id) {

            if (!b.issued) {

                b.issued = true;
                cout << "Book Issued\n";

            } else {

                cout << "Already Issued\n";
            }

            return;
        }
    }

    cout << "Book Not Found\n";
}

void Library::returnBook() {

    int id;

    cout << "Enter ID: ";
    cin >> id;

    for (auto &b : books) {

        if (b.id == id) {

            b.issued = false;

            cout << "Book Returned\n";

            return;
        }
    }

    cout << "Book Not Found\n";
}