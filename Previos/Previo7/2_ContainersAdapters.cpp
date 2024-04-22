#include <iostream>
#include <stack>
using namespace std;

/*
DESCRIPCION

*/

int main() {
    // create a stack of ints
    stack<int> numbers;
    numbers.push(1);
    numbers.push(100);
    numbers.push(10);
    
    // Display info
    cout << "Numbers are: ";

    // we can access the element by getting the top popping
    // until the stack is empty
    while (!numbers.empty()) {
        // print top element
        cout << numbers.top() << ", "; //prints 10 , 100, 1

        // pop top element from stack
        numbers.pop();
    }
    cout << endl;

    return 0;
}