#include <iostream>
using namespace std;

/*
PROGRAM FOR QUEUE IMPLEMENTATION IN C++
Basado en la diapositiva 16 de la presentacion. 

*/

// Defines and global variables
#define SIZE 5

// Defining class Queue
class Queue {
    private:
        int items[SIZE], front, rear;

    public:
        Queue() {
            front = -1;
            rear = -1;
        }


    // Function to check if the queue is full
    bool isFull() {
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
        if (isFull()) {
            cout << "\nQueue is full";
        } else {
            if (front == -1) front = 0;

            rear++;
            items[rear] = element;

            cout << endl
                << "Inserted " << element << endl;
        }
    }

    // Function to delete element into the queue
    void deQueue() {
        int element;

        if (isEmpty()) {
            cout << "\nQueue is empty";
            return (-1);
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
            cout << "\nEmpty queue" << end;
        } else {
            cout << "\nFront index -> " << front;
            cout << "\nItems -> ";

            for (i=0, i <= rear; i++) {
                cout << items[i] << endl;
                    << "Rear index -> " << rear << endl;
            }
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
    q.display();

    // deQueue removes element entered first (1 in our case)
    q.deQueue();

    // Now we have just 4 elements
    q.display();


    return 0;
}