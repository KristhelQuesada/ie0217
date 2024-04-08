#include <iostream>

/*
DESCRIPCION
Este programa pretende ejemplificar los conceptos y elementos mas importantes
sobre el manejo de memoria con base en la diapositiva 3 de la presentacion.
Busca ejemplificar mediante el uso de comentarios donde se almacenan cada
variable o linea de codigo definida en el programa.
*/

// Se almacena en el data segment
// ya que es una variable global
int globalVariable = 42;

int main() {
    // Se almacena en el Stack
    // porque es una variable local
    int stackVariable = 10;

    /* Se almacena en el heap
    porque lo que tenemos es un entero puntero
    con el operando new que devuelve un espacio
    para que almacena un entero en el heap
    esto no estaba definido hasta que se ejecuto
    a diferencia de la variable local que por ahi
    previo a la ejecucion ya estaba almacenado en
    el stack */
    int* heapVariable = new int(20);

    // Se imprimen los valores
    // que va a estar ubicado en el code segment
    std::cout << "Valor de globalVariable: " << globalVariable << std::endl;
    std::cout << "Valor de stackVariable: " << stackVariable << std::endl;
    std::cout << "Valor de heapVariable: " << *heapVariable << std::endl;

    // Liberar la memoria asignada en el heap
    // para que ese espacio fisico quede libre
    delete heapVariable;

    // como es una instruccion queda en el code segment
    return 0;
}