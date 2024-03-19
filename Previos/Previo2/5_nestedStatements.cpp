#include <iostream>
using namespace std;

/*
Este programa explica los nested DM statements o bien las anida-
ciones de sentencias de tomas de decisiones de la diapositiva 15.

Es decir, una anidacion es tener por ejemplo un if dentro de un if.
*/

int main() {
    // Declaring a local variable
    int num;


    // I&0
    cout << "Enter an integer: ";
    cin >> num;

    // NESTED STATEMENT

    // outer if condition
    if (num != 0) {
        // inner if condition
        if (num > 0){
            cout << "The number is positive" << endl;
        }

        // inner else condition
        else {
            cout << "The number is negative" << endl;
        }
    }

    // outer else condition
    else {
        cout << "The number is 0 therefore is neither positive nor negative" << endl;
    }

    // outside the if
    cout << "This line is always printed" << endl;

    return 0;
}