#include <iostream>
using namespace std;

/*
Description:

*/


int main() {
    // Declaring
    //int *ptr;
    //int arr[5];
    float arr[3];
    float *ptr;    //Declaring the pointer variable

    // Initializing
    //ptr = arr;

    // EXAMPLE #1
    //ptr + 1 is equivalent to &arr[1];
    //ptr + 2 is equivalent to &arr[2];
    //ptr + 3 is equivalent to &arr[3];
    //ptr + 4 is equivalent to &arr[4];

    // Use dereference operator
    //*ptr == arr[0];
    //*(ptr + 1) is equivalent to arr[1];
    //*(ptr + 2) is equivalent to arr[2];
    //*(ptr + 3) is equivalent to arr[3];
    //*(ptr + 4) is equivalent to arr[4];


    // EXAMPLE #2
    cout << "Displaying address using arrays:" << endl;

    // for loop which purpose is to print the addresses of all the
    // elements in the array
    for (int i=0; i < 3; ++i) {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // Point of the first value of the array
    // is equal to ptr = &arr[0]
    ptr = arr;

    cout << "\nDisplaying address using pointers:" << endl;
    // for loop which purpose is to print the addresses of all the
    // elements in the array BUT using pointer notation    
    for (int i=0; i < 3; ++i) {
        cout << "ptr + " << i << " = " << (ptr + i) << endl;
    }

    return 0;
}