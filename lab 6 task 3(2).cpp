#include <iostream>
using namespace std;
int main() {
    int secretnumber, guess;
    cout << "Guess the secret number between 1 and 100: ";
     cin>>secretnumber;
    do {
    	cout<<"enter the number you guess:"<<endl;
        cin >> guess;

        if (guess == secretnumber) {
            cout << "You guessed correctly!" << endl;
        } else if (guess < secretnumber) {
            cout << "Too low, try again: ";
        } else {
            cout << "Too high, try again: ";
        }

    } while (guess != secretnumber);

    return 0;
}
