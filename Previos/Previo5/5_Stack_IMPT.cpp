#include <iostream>
#include <stdlib.h>
using namespace std;

/*
PROGRAM FOR STACK IMPLEMENTATION IN C++


*/

// Defines and global variables
#define MAX 10
int size = 0;

// Creating a stack
struct stack {
    int items[MAX];
    int top;
};
typedef struct stack st;

// Function to create empty stacks
void createEmptyStack(st *s) {
    s->top = -1;
}

// Function to check if the stack is full
int isFull(st *s) {
    if (s->top == MAX-1) {
        return 1;
    } else {
        return 0;
    }
}

// Function to check if the stack is empty
int isEmpty(st *s) {
    if (s->top == -1) {
        return 1;
    } else {
        return 0;
    }
}

// Function to add elements into stack
void push(st *s, int newitem) {
    if (isFull(s)) {
        cout << "\nSTACK FULL\n";
    } else {
        s->top++;
        s->items[s->top] = newitem;
    }

    size++ // updating global varible
}

// Function to add elements into stack
void push(st *s, int newitem) {
    if (isEmpty(s)) {
        cout << "\nSTACK EMPTY\n";
    } else {
        cout << "Item popped: " << s->items[s->top];
        cout << endl;
        s->top--;
    }

    size-- // updating global varible
}

// Function to print elements of stack
void printStack(st *s) {
    printf("Stack: ");

    for (int i=0; i < size; i++) {
        cout << s->items[i] << " ";
    }

    cout << endl;
}


// Driver code
int main() {
    int ch;

    // Allocate memory from stack size to stack pointer size
    st s* = (st *) malloc(sizeof(st));

    // Create empty stack
    createEmptyStack(st);

    // Adding values to stack
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    // Displaying stack
    printStack(s);

    // Delete last element of stack
    pop(s);

    // Displaying stack
    cout << "\nAfter popping out\n";
    printStack(s);

    // s memory realesed
    delete s;

    return 0;
}