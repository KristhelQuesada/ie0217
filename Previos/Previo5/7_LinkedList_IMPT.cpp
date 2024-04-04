#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
PROGRAM FOR LINKED LIST IMPLEMENTATION IN C++
Basado en la diapositiva 17 de la presentacion. 

*/

// Creating a node
class Node {
    public:
        int value;
        Node* next;
};


// Driver code
int main() {
    // Declaring a pointer that points to the 1st node (head) of the linked list.
    // Therefore head is a variable that will contain the memory direction of an
    // class Node object.
    Node* head;

    // Initializing next nodes as pointer of a class Node object
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    // Assign values to value atribute for each object
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    // Print the linked list value
    head = one;

    while (head != NULL) {
        cout << head->value;
        head = head->next;
    }

    return 0;
}