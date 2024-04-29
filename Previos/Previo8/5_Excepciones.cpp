#include <iostream>
#include <stdexcept>
using namespace std;

/*
    DESCRIPCION

*/

int main() {
    // declare variables
    double numerator, denominator, divide;

    // Input the information
    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    divide = numerator / denominator;
    cout << numerator << "/" << denominator << " = " << divide << endl;

    return 0;
}
