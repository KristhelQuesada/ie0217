#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
using namespace std;

/*
DESCRIPCION
Este programa introduce el algoritmo de ordenamiento Bubble Sort con
base en la diapositiva 4 de la presentacion.
*/



// Driver function
int main() {
    // Vector Example
    cout << "VECTOR EXAMPLE" << endl;

    // initialize a vector of int type
    vector<int> numbers = {1, 100, 10, 70, 100};

    // print the vector
    cout << "Numbers are: ";
    for (auto &num: numbers) {
        cout << num << ", "; // Prints 1, 100, 10, 70, 100,
    }



    // Set Example
    cout << "\n\nSET EXAMPLE" << endl;

    // initialize a set of int type
    set<int> numbers2 = {1, 100, 10, 70, 100};

    // print the set
    cout << "Numbers are: ";
    for (auto &num2: numbers2) {
        cout << num2 << ", "; // Prints 1, 10, 70, 100,
    }



    // Unordered set Example
    cout << "\n\nUNORDERED SET EXAMPLE" << endl;

    // initialize an unordered_set of int type
    unordered_set<int> numbers3 = {1, 100, 10, 70, 100};

    // print the set
    cout << "Numbers are: ";
    for (auto &num3: numbers3) {
        cout << num3 << ", "; // Prints 70, 10, 100, 1
    }
    


    // MAP EXAMPLE
    cout << "\n\nMAP SET EXAMPLE" << endl;
    
    // Declare a map of type int and string
    map<int, string> student;

    // use [] operator to add elements
    student[1] = "Jacqueline";
    student[2] = "Blake";

    // use insert() method to add element
    student.insert(make_pair(3, "Denise"));
    student.insert(make_pair(4, "Blake"));

    // add elements with duplicate keys
    student[5] = "Timothy";
    student[5] = "Aaron";

    // Display info
    for (int i=1; i <= student.size(); ++i) {
        cout << "Student[" << i << "]: " << student[i] << endl;
    }


    return 0;
}