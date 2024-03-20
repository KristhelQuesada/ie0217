#include <iostream>
using namespace std;

/*
Description:

*/

//FUNCTIONS
// function that takes value as parameter
void func1(int numVal) {
    cout << "Funcion 1 parametro: " << numVal << endl;
}

// function that takes reference as parameter
// notice the & before the parameter.
void func2(int &numRef) {
    cout << "Funcion 2 parametro: " << &numRef << endl;
}

// function to swap values
void swap(int &n1, int &n2) {
    int temp;

    temp = n1;
    n1 = n2;
    n2 = temp;
}

// function swap but sligthly different
void swap2(int* n1, int* n2) {
    int temp;

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

// FUNCTION MAIN
int main() {
    // Initializing variables
    int num = 5;
    int a=1, b=2;

    // Using functions
    func1(num);
    func2(num);

    // Using swap function
    cout << "\n>> Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(a, b); // calling the function to swap

    cout << "\n>> After swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;


    // Using swap2 function
    cout << "\n>> Before swapping using swap2()" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // To see what we are passing as argument
    cout << "\n>> Passing as argument:" << endl;
    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;
    swap2(&a, &b); // calling the function to swap

    cout << "\n>> After swapping using swap2()" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    

    return 0;
}