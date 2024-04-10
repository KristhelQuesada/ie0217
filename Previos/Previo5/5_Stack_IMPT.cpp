#include <iostream>
#include <stdlib.h>
using namespace std;

/*
PROGRAM FOR STACK IMPLEMENTATION IN C++
Este programa permite abordar el estudio de la estructuta de datos
llamada stack, con base en la diapositiva 14 de la presentaci[on. Asi
como algunas funciones asociadas a esta como isfull, isempty, push y
pop. 
Un stack es una estructura de datos que funciona de tal manera como
una pila de objetos, tal que siempre es mas sencillo extraer el elemento
que esta arriba de la pila, es por eso que funcionamiento se describe
de tal forma que el ultimo elemento en ingresar, sera el primer elemento
en salir cuando se desee realizar una extraccion del mismo.
*/

// Defines and global variables
#define MAX 10
int size_Stack = 0;

// Creating a stack
// como es una estructura entonces se define como una.
struct stack {
    int items[MAX]; // un arreglo de enteros de tamanio 10
    int top; // un entero que se llama top para saber cual es
};
typedef struct stack st; // st ahora es un tipo, al igual que
// int, que esta dado por un struct stack

// Function to create empty stacks
// Recibe un puntero de tipo struct stack e internamente
// lo que hace es que en esa direccion de memoria que recibio
// y en el elemento que se llama top y coloca un -1 para
// indicar que esta vacia, ya que cero significa que hay algo
// en la posicion cero.
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
    // primero chequea que esta llena
    if (isFull(s)) {
        cout << "\nSTACK FULL\n";
        
        // si no lo esta entonces para la estructura definida s
        // aumentaremos el contador en +1 luego de la ejecucion
        // y en s->items[s->top] guardaremos el newItem donde se
        // lee como:
    } else {
        s->top++;

        // en el stack 's', en el array 'items' que contiene los
        // elementos, en la ultima posicion registrada por top 's->top'
        // entonces guardaremos el nuevo elemento 'newitem'
        s->items[s->top] = newitem;
    }


    size_Stack++; // updating global varible
}

// Function to add elements into stack
void pop(st *s) {
    if (isEmpty(s)) {
        cout << "\nSTACK EMPTY\n";
    } else {
        cout << "Item popped: " << s->items[s->top];
        cout << endl;
        s->top--;
    }

    size_Stack--; // updating global varible
}

// Function to print elements of stack
void printStack(st *s) {
    printf("Stack: ");

    for (int i=0; i < size_Stack; i++) {
        cout << s->items[i] << " ";
    }

    cout << endl;
}


// Driver code
int main() {
    int ch;

    // Allocate memory from stack size to stack pointer size
    // DIreccion de memoria que se asignara en el heap
    // del tamanio de la estructura struct stack que definimos
    st *s = (st *) malloc(sizeof(st));

    // Create empty stack
    // le pasamos dicha direccion en memoria
    createEmptyStack(s);

    // Adding values to stack
    // Entonces pasamos la direccion donde se encuentra el struct definido
    // y la funcion se va a encargar de acceder a dicha direccion y poner
    // el valor ingresado dentro del stack
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    // Displaying stack
    // Imprime el contenido de dicha direccion de memoria
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