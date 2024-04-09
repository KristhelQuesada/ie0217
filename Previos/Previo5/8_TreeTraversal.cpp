#include <iostream>
using namespace std;

/*
PROGRAM FOR TREE TRAVERSAL IN C++
Basado en la diapositiva 21 de la presentacion. En este caso se define el
concepto de arboles, una estructura de datos jerarquica y no lineal que se
caracteriza por tener nodos conectados por aristas, es decir, caminos
multiples que se derivan de un solo punto.

Se define entonces a una arista como el vinculo entre dos nodos cualesquiera,
mientras que nodo es un elemento que contiene un valor y las direcciones de
sus nodos subsecuentes.

Entre los nodos se tienen nodos internos y externos. Los nodos internos son
aquellos que tienen como minimo un nodo secundario o siguiente; mientras que
los nodos externos son aquellos que no contienen otros nodos despues de el.

Cuando 'atravesamos' un arbol decimos que anduvimos por todos los nodos del
arbol. Asi, para recorrer un arbol se plantea la forma de visualizarlo como
dos nodos o subarboles (izquierda y derecha). Asi podremos recorres el arbol
de tres maneras:

- Primero todos los nodos del subarbol izquierdo, luego raiz y luego todos
los nodos del derecho. (Inorder)
- Primero raiz, luego todos los nodos del subarbol derecho y luego todos los
nodos del izquierdo. (Preorder)
- Primero todos los nodos del subarbol derecho, luego todos los nodos del
izquierdo y luego la raiz. (Postorder)

*/

// Creating a node
struct Node {
    // Atributes defined as private by default
    int data; // valor que contiene el nodo
    struct Node *left, *right; // subarboles o direcciones de los nodos L y R

    // Pseudo clase que guarda el valor pasado por parametro en data
    // luego inicializa left y right en null como para indicar que por
    // el momento no se tienen hijos.
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

// Pre-order traversal
void preorderTraversal(struct Node* node) {
    if (node == NULL)
        return;

    cout << node->data << " -> ";
    preorderTraversal(node->left);
    preorderTraversal(node->right); // se utiliza recursividad
    // para manejar cuando ya terminamos un nodo.
}

// Post-order traversal
void postorderTraversal(struct Node* node) {
    if (node == NULL)
        return;

    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout << node->data << " -> ";
}

// In-order traversal
void inorderTraversal(struct Node* node) {
    if (node == NULL)
        return;

    inorderTraversal(node->left);
    cout << node->data << " -> ";
    inorderTraversal(node->right);
}


// Driver code
int main() {
    // Creamos un nodo raiz
    struct Node* root = new Node(1);

    // Creamos new nodes que se almacenan en el heap
    root->left = new Node(12);
    root->right = new Node(9);
    root->left->left = new Node(5);
    root->left->right = new Node(6);

    // Impresion de distintas formas de atravesar el arbol
    cout << "Inorder traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Preorder traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorderTraversal(root);
    cout << endl;

    delete root;

    return 0;
}