#include <iostream>
using namespace std;

/*
PROGRAM FOR TREE TRAVERSAL IN C++
Basado en la diapositiva 17 de la presentacion. 

*/

// Creating a node
struct Node {
    // Atributes defined as private by default
    int data;
    struct Node *left. *right;

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
    preorderTraversal(node->right);
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
    struct Node* root = new Node(1);
    root->left = new Node(12);
    root->right = new Node(9);
    root->left->left = new Node(5);
    root->left->right = new Node(6);

    cout << "Inorder traversal: ";
    inorderTraversal(root);

    cout << "Preorder traversal: ";
    preorderTraversal(root);

    cout << "Postorder traversal: ";
    postorderTraversal(root);

    return 0;
}