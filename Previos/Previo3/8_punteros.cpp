#include <iostream>
using namespace std;

/*
ERRORES COMUNES

Error #1: varPoint is an address not a variable like var.
>> varPoint = var;  // wrong
>> varPoint = &var; // correct

Error #2: &var is an address while *varPoint is the value
stored in &var.
>> *varPOimt = &var;  // wrong
>> *varPoint = var;   // correct
*/


int main() {
    // Initializing variables
    int var = 5;

    // Declaring a pointer variable
    int* pointVar;

    // First Example
    cout << ">>> FIRST EXAMPLE" << endl;
    pointVar = &var; // store address of var
    
    cout << "var = " << var <<endl; // print var
    cout << "Address of var (&var): " << &var << endl; // print address
    cout << "Address of var (pointVar): " << pointVar << endl; // print address
    cout << "Content of the address pointed by pointVar (*pointVar): " << *pointVar << endl;


    // Second Example
    cout << "\n>>> SECOND EXAMPLE" << endl;
    cout << "Changing value of var to 7:" << endl;
    var = 7;
    cout << "var = " << var << endl;
    cout << "Content (using *pointVar): " << *pointVar << endl;
    cout << "Address of var (&var): " << &var << endl; // print address

    cout << "\nChanging value of var to 16:" << endl;
    *pointVar = 16;
    cout << "var = " << var << endl;
    cout << "Content (using *pointVar): " << *pointVar << endl;
    cout << "Address of var (&var): " << &var << endl; // print address

    return 0;
}