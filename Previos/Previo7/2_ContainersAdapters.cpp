#include <iostream>
#include <stack>
using namespace std;

/*
DESCRIPCION
Este codigo pretene ampliar el concepto de containers mediante el estudio de
container adapters con base en la diapositiva 8 de la presentacion. Los adap-
tadores de contenedor toman un contenedor existente (cualquiera de los tres
tipos) pero le agregamos un wrapper o una interfaz restringida para que se
comporten de manera distinta.

En este caso, se evalua el ejemplo de una pila o stack, el cual es un con-
tainer adapter que utiliza la estructura deque del tipo contenedor secuencial,
tal que provee una interfaz restringida para admitir únicamente operaciones
de push() y de pop().
*/

int main() {
    // create a stack of ints
    stack<int> numbers;

    // push into stack, es decir, le agregamos valores
    // al stack mediante la directiva push()
    numbers.push(1);
    numbers.push(100);
    numbers.push(10); // de tal forma que como es un stack
                      // pues el elemento mas reciente siempre
                      // encabeza la primera posicion de la lista
    
    // Display info
    cout << "Numbers are: ";

    // we can access the element by getting the top popping
    // until the stack is empty

    // siempre que la pila no este vacioa
    while (!numbers.empty()) {

        // entonces
        // print top element
        cout << numbers.top() << ", "; //prints 10 , 100, 1

        // pop top element from stack
        // es decir, eliminamos el primer elemento del stack
        numbers.pop();
    }
    cout << endl;

    return 0;
}