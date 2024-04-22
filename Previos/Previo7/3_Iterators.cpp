#include <iostream>
#include <vector>
using namespace std;

/*
DESCRIPCION

*/

int main() {
    // create a vector of strings
    vector <string> languages = {"Python", "C++", "Java"};

    // create an iterator to a string vector
    vector<string>::iterator itr;

    // iterate over all elements
    for (itr = languages.begin(); itr != languages.end(); itr++) {
        cout << *itr << ", ";
    }

    cout << endl;
    

    return 0;
}