#include "DocumentEditor.h"

int main() {
    DocumentEditor editor(100);
    int choice;

    do {

        cout << "1. Type a character" << endl;
        cout << "2. Undo last character" << endl;
        cout << "3. Display document" << endl;
        cout << "0. Exit" << endl;
        cout << "choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            char c;
            cout << "Enter character: ";
            cin >> c;
            editor.type(c);
            break;

        case 2:
            editor.undo();
            break;

        case 3:
            editor.display();
            break;

        case 0:
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice! Try again." << endl;
            break;
        }

    } while (choice != 0);

    return 0;
}