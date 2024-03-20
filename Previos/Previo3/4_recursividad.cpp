#include <iostream>
using namespace std;

int factorial(int);

int main() {
    // Declaring variables
    int n, result;

    // First user interaction
    cout << "Enter a non negative number: ";
    cin >> n;

    // Calculate the factorial
    result = factorial(n);
    cout << "Fcatorial of " << n << " = " << result << endl;

    return 0;
}

int factorial(int n ) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}