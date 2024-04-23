#include <iostream>
#include <forward_list> // used in first example
#include <list> // used in second example
#include <vector> // used in third example
using namespace std;


/*
DESCRIPCION
Este programa pretende introducir los conceptos y sintaxis de los diferentes
tipos de iteadores, entre ellos: forward iterators, bidirectional iterators
e iteradores de acceso aleatorio, todo con base en las diapositivas 14, 15 y
16 de la presentacion.

-> Forward Iterator
Puede hacer lecturas y escrituras y se mueve solo hacia adelante. Para ello,
se inicializa con un forward_list.

-> Bidirectional Iterator
Realiza lecturas, escrituras y puede moverse tanto hacia adelante como hacia
atrás. Los iteradores bidireccionales son compatibles con los contenedores:
  - List, set, multiset y map
… es decir, con los contenedores asociativos.

-> Random Access Iterator
Realiza lecturas, escrituras y puede moverse tanto hacia adelante como hacia
atrás con el adicional de tener acceso aleatorio. En este caso, son compati-
bles con contenedores secuenciales como:
  - Vectores, deques, arrays e iteradores string
*/


int main() {
    /* ---------------------------------------------
        FIRST EXAMPLE: Forward iterators
    */
    cout << "FIRST EXAMPLE\n";

    // Initialize forward list
    // Primero se declara el forward list
    forward_list<int> nums{1, 2, 3, 4};

    // Initialize an iterator to point
    // to beginning of a forward list
    // Segundo se inicializa el tipo de iterador para el tipo contenedor
    // que alberga valores enteros y lo inicializamos en nums.begin()
    forward_list<int>::iterator itr = nums.begin();

    // Luego se recorre el contenedor hasta que llegue al final
    while (itr != nums.end()) {

        // access iterator value using indirection operator
        // leemos el contenido con el *
        int original_value = *itr;

        // assign new value using indirection operator
        // escribimos sobre el con el =
        *itr = original_value * 2;

        // forward the iterator to next position
        // nos movilizamos hacia delante
        itr++;
    }

    // display the contents of nums
    for (int num: nums) {
        cout << num << ", "; // displays 2, 4, 6, 8
    }
    cout << endl;


    /* ---------------------------------------------
        SECOND EXAMPLE: Bidirectional iterators
    */
    cout << "\nSECOND EXAMPLE\n";

    // initialize list
    // Se inicialliza un contenedor asociativo
    list<int> nums2 {1, 2, 3, 4, 5};

    // initialize iterator to point to beginning of nums2
    // Se inicializa su iterador al inicio del contenedor asociativo
    list<int>::iterator itr2 = nums2.begin();

    // Display the elements in forward order
    cout << "Moving forward: " << endl;

    // Igualmente, se itera hasta que se acabe el contenedor
    while (itr2 != nums2.end()) {
        // leemos
        cout << *itr2 << ", ";

        // Move iterator by 1 position forward
        // y avanzamos hacia adelante
        itr2++;
    } // Displays 1, 2, 3, 4, 5

    cout << endl << "Moving backward: " << endl;

    // Display the elements in backward order
    while (itr2 != nums2.begin()) {
        // Siempre que no sea el elemento de mas alla
        if (itr2 != nums2.end()) {
            // leemos
            cout << *itr2 << ". ";
        }

        // move iterator by 1 position backward
        // nos movemos hacia atras
        itr2--;
    } // Displays 5, 4, 3, 2, 1

    cout << *itr2 << endl;


    /* ---------------------------------------------
        THIRD EXAMPLE: Random Access Iterators
    */
    cout << "\nTHIRD EXAMPLE\n";

    // create a vector
    // creamos el contenedor secuencial en este caso un vector
    vector<int> vec{1, 2, 3, 4};

    // create iterators to point to the first and the last elements
    // creamos dos iteradores para el contenedor, uno que apunta al
    // inicio del vector y otro que apunta al ultimo elemento
    vector<int>::iterator itr_first = vec.begin();
    vector<int>::iterator itr_last = vec.end() - 1; // -1 to not count the beyond

    // display the vector elements
    // Leemos accediendo de la manera que queramos, por eso son de acceso aleatorio
    cout << "First element: " << *itr_first << endl; // 1
    cout << "Second element: " << itr_first[1] << endl; // 2

    cout << "Second last element: " << *(itr_last - 1) << endl; // 3
    cout << "Last element: " << *(itr_last) << endl; // 4


    return 0;
}