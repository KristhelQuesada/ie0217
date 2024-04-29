#include <iostream>
using namespace std;

/*
    DESCRIPCION

*/

template <typename T>
T add(T num1, T num2) {
    return (num1 + num2);
}

int main() {
    // Declare variables
    int result1;
    double result2;

    // Calling with int parameters
    result1 = add<int>(2, 3);
    cout << result1 << endl;

    // Calling with int parameters
    result2 = add<double>(2.2, 3.2);
    cout << result2 << endl;


    return 0;
}
