#include <iostream>
using namespace std;

/*
PROGRAM FOR QUEUE IMPLEMENTATION IN C++
Basado en la diapositiva 16 de la presentacion donde se explica el
funcionamiento de la estructura queue o cola. Funciona de tal manera
que el primer elemento en entrar es el primer elemento en salir. En
esta estructura se tendran dos punteros donde ambos iniciaran en la
misma posicion cuando no haya nada o un unico elemento, y conforme
se vaya llenando la cola el puntero rear (trasero) comenzara a moverse
y conforme se eliminen elementos, el puntero front (frontal) tambien
comenzara a moverse hacia el rear. Una vez se hayan eliminado todos
los elementos entonces ambos punteros regresan a la posicion inicial.
*/

// Defines and global variables
#define SIZE 5

// Defining class Queue
class Queue {
    private:
        int items[SIZE], front, rear;

    public:
        // Constructor que nos inicializa las variables en -1
        Queue() {
            front = -1;
            rear = -1;
        }


        // Function to check if the queue is full
        bool isFull() {
            // Chequea si el puntero frontal esta en la primera posicion
            // (no se han eliminado elementos) y si el trasero esta al final
            // donde el -1 era porque las posiciones empiezan en cero.
            if (front == 0 && rear == SIZE-1) {
                return true;
            } else {
                return false;
            }
        }

        // Function to check if the queue is empty
        bool isEmpty() {
            if (front == -1) {
                return true;
            } else {
                return false;
            }
        }

        // Function to insert element into the queue
        void enQueue(int element) {
            // pregunta si esta lleno
            if (isFull()) {
                cout << "\nQueue is full";

                // si no esta lleno entonces permite el ingreso de elementos
            } else {
                if (front == -1) front = 0;

                rear++;
                items[rear] = element;

                cout << endl
                    << "Inserted " << element;
            }
        }

        // Function to delete element from the queue
        int deQueue() {
            int element;

            if (isEmpty()) {
                cout << "\nQueue is empty" << endl;
                return -1;
            } else {
                element = items[front];

                if (front >= rear) {
                    front = -1;
                    rear = -1;
                } // Q has only one element, so we reset the queue after deleting it
                else {
                    front++;
                }

                cout << "\nDeleted -> " << element << endl;

                return element;
            }
        }

        // Function to display the info of the queue
        void display() {
            // Function to display elements of queue
            int i;

            if (isEmpty()) {
                cout << "\nEmpty queue" << endl;
            } else {
                cout << "\nFront index -> " << front;
                cout << "\nItems -> ";

                for (i=0; i <= rear; i++) {
                    cout << items[i];
                }

                cout << "\nRear index -> " << rear << endl;
            }
        }

};  


// Driver code
int main() {
    // Declaring a class Queue variable
    Queue q;

    // deQueue is not possible in empty queue
    q.deQueue();

    // enQueue 5 elements
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    // 6th element can't be added because the queue is full
    q.enQueue(6);

    // Display info by far
    cout << endl;
    q.display();

    // deQueue removes element entered first (1 in our case)
    q.deQueue();

    // Now we have just 4 elements
    q.display();


    return 0;
}