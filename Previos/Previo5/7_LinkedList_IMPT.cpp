#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
PROGRAM FOR LINKED LIST IMPLEMENTATION IN C++
Basado en la diapositiva 17 de la presentacion. Se busca ampliar el concepto
de listas enlazadas como estructura de datos lineal, la cual consta de una
serie de nodos enlazados, donde cada nodo almacena los datos y la direccion
del siguiente nodo. Tambien se mencionan otro tipos de listas como las doble-
mente enlazadas y las listas circulares.
*/

// Creating a node
class Node {
    public:
        int value; // dato almacenado (valor)
        Node* next; // nodo puntero, es decir, aca se guardara la direccion
                    //del siguiente nodo
};


// Driver code
int main() {
    // Declaring a pointer that points to the 1st node (head) of the linked list.
    // Therefore head is a variable that will contain the memory direction of a
    // class Node object.
    Node* head;

    // Initializing next nodes as pointer of a class Node object
    // all of them initialized in null
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    // Allocate each node on heap because of 'new'
    one = new Node();
    two = new Node();
    three = new Node();

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

    cout << endl;

    delete head;
    delete one;
    delete two;
    delete three;

    return 0;
}