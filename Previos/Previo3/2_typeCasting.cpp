#include <iostream>
using namespace std;

int main() {
    // Initializing variables
    int num1_int = 9;
    double num2_double = 3.56;

    // Declaring Double Variable
    double num1_double;

    // CONVERTING INT TO DOUBLE
    // Implicit conversion
    num1_double = num1_int;

    cout << "num1_int = " << num1_int << endl;
    cout << "num1_double = " << num1_double << endl;


    // CONVERTING DOUBLE TO INT
    // before conversion
    cout << "num2_double = " << num2_double << endl;

    // Initializing new value and conversion
    int num2_int1 = (int)num2_double;
    cout << "num2_int1 = " << num2_int1 << endl;

    int num2_int2 = (int)num2_double;
    cout << "num2_int2 = " << num2_int2 << endl;


    return 0;
}