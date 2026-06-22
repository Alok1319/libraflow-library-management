#include "library.h"

int main() {

    Library lib;

    int choice;

    while (true) {

        cout << "\n===== LIBRAFLOW =====\n";

        cout << "1 Add Book\n";
        cout << "2 Show Books\n";
        cout << "3 Issue Book\n";
        cout << "4 Return Book\n";
        cout << "5 Exit\n";

        cin >> choice;

        switch (choice) {

            case 1:
                lib.addBook();
                break;

            case 2:
                lib.showBooks();
                break;

            case 3:
                lib.issueBook();
                break;

            case 4:
                lib.returnBook();
                break;

            case 5:
                return 0;

            default:
                cout << "Invalid Choice\n";
        }
    }
}