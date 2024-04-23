#include <iostream> // for std::cout
#include <algorithm> // for std::sort
#include <vector> // for std::vector


/*
DESCRIPCION
En este programa se introduce el concepto de algoritmos STL con base en
las diapositivas 18-21 de la presentacion. La STL se puede decir que tienen
seis burbujas o tipos de ordenamiento las cuales contienen dentro de ellos
una basta cantidad de algortimos, estos 6 tipos o categorias de algortimos
son:
	1. Algoritmos de Búsqueda
	2. Algoritmos de Ordenamiento
	3. Algoritmos de Manipulación de Rango
	4. Algoritmos de Eliminación y Modificación
	5. Algoritmos Numéricos
    6. Algoritmos de Conjuntos

En este caso, se realiza un ejemplo utilizando un algoritmo de ordenamiento
denominado sort() el cual ordena por default los elementos de un arreglo de
manera ascendente.
*/

// Funcion que retorna una comparacion logica
bool myfunction (int i, int j) {return (i<j);}

// Estructura que define un operador u permite
// realizar una operacion logica nuevamente
struct myclass {
    bool operator() (int i, int j) {return (i<j);}
} myobject;


// MAIN FUNCTION
int main() {
    // Se crea un arreglo
    int myints[] = {32, 71, 12, 45, 26, 80, 53, 33};

    // Se crea un contenedor vector de enteros
    // que va desde myints (puntero) hasta el
    // ultimo elemento de myints (posicion 8 del
    // array)
    std::vector<int> myvector (myints, myints+8);               // 32, 71, 12, 45, 26, 80, 53, 33

    // using default comparison (operator <)
    // Ordene desde el inicio del vector hasta la cuarta posicion
    // ordena por default de menor a mayor
    std::sort (myvector.begin(), myvector.begin()+4);           // (12, 32, 45, 71) 26, 80, 53, 33

    // using function as comp
    // Ordende desde la cuarta posicion hasta el final del vector
    // tal que se le especifica que utlice la funcion auxiliar
    std::sort (myvector.begin()+4, myvector.end(), myfunction); // 12, 32, 45, 71 (26, 33, 53, 80)

    // using function as comp
    // Ordene todo el vector pero utilizando el operador auxiliar
    // miembro de la estructura definida
    std::sort (myvector.begin(), myvector.end(), myobject);     // (12, 26, 32, 33 45, 53, 71, 80)

    // print out content
    std::cout << "myvector contains: ";

    // imprime iniciando desde el comeinzo del vector hasta que llegue al final
    for (std::vector<int>::iterator it=myvector.begin(); it != myvector.end(); ++it) {
        std::cout << " " << *it;
    }

    std::cout << "\n";


    return 0;
}

