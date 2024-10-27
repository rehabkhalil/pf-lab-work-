#include <iostream>
using namespace std;
int main() {
int choice = 0;
 while (choice != 3) {  
        cout << "\nMenu:\n";
        cout << "1. Print Hello\n";
        cout << "2. Print World\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            cout << "Hello\n";
        } else if (choice == 2) {
            cout << "World\n";
        } else if (choice == 3) {
            cout << "Exiting program...\n";
        } else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
