#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
using namespace std;

/*
DESCRIPCION
Este programa introduce el concepto de containers tal que se busca estudiar
contenedores del tipo secuencial como lo es el vector, asociativo como es
el set y el map, y asociativo desordenado como es el unordered set; todo
con base en la diapositiva 4, 5 y 7 de la presentacion.

En resumen pasa lo siguiente:
--> Vector
Simplemente define un tipo de lista secuencial donde sus elementos se orde-
nan segun la manera en que fueron ingresados.

--> Set
Ordena los elementos en orden ascendente y elimina los elementos repetidos.

--> Unordered Set
Almacena los elementos en desorden de manera aleatoria e iguak elimina los
elementos repetidos.

--> Map
Almacena los elementos de la forma key-value, tal que el keh no puede repe-
tirse ya que reescribe sobre el ultimo elemento que contenia ese key, pero
si puede repetirse el value con otro key.
*/



// Driver function
int main() {
    // Vector Example
    cout << "VECTOR EXAMPLE" << endl;

    // initialize a vector of int type
    // Se crea un vector que contiene enteros, se llama numbers
    // y esta dado por lo que viene luego del igual
    vector<int> numbers = {1, 100, 10, 70, 100};

    // print the vector
    cout << "Numbers are: ";

    // funcion para imprimir el vector donde se usa versiones
    // modernas de C++ con el uso de auto para que identifique
    // automaticamente el tipo de variable que contiene numbers
    // notese que no se especifica desde donde partimos y donde
    // finalizamos
    for (auto &num: numbers) {
        cout << num << ", "; // Prints 1, 100, 10, 70, 100,
    }



    // Set Example
    cout << "\n\nSET EXAMPLE" << endl;

    // initialize a set of int type
    // contenedor asociativo tipo set que contiene enteros como
    // tipo de variable y se llama num
    // se agrega un 40 al final para ver si lo ordena en la posicion que debia
    set<int> numbers2 = {1, 100, 10, 70, 100, 40};

    // print the set
    cout << "Numbers are: ";

    // volvemos a imprimir como antes, es decir con la misma sintaxis
    for (auto &num2: numbers2) {
        cout << num2 << ", "; // Prints 1, 10, 70, 100,
    }
    // pero solo imprimio un 100 porque el set no permite tener
    // elementos repetidos dentro de el



    // Unordered set Example
    cout << "\n\nUNORDERED SET EXAMPLE" << endl;

    // initialize an unordered_set of int type
    // Cotenedor asociativo desordenao
    unordered_set<int> numbers3 = {1, 100, 10, 70, 100};

    // print the set
    cout << "Numbers are: ";
    for (auto &num3: numbers3) {
        cout << num3 << ", "; // Prints 70, 10, 100, 1
    }
    // en este caso como es un set el 100 sigue sin repetirse
    // y pone lo que le ingresamos de manera random porque si,
    // en caso que si queramos que nos lo almacene acorde a
    // como lo fuimos asignando entonces debemos usar una es-
    // tructura que nos permita esta funcion
    


    // MAP EXAMPLE
    cout << "\n\nMAP SET EXAMPLE" << endl;
    
    // Declare a map of type int and string
    /*
    Estructura del Map
    Es una estructura que va a almacenar elementos de la forma
    key-value y su sintaxis esta dada por:

    map<tipo de dato del key, tipo de dato del value> map_name = {{k1, v1}, {k2, v2}, ...}

    donde k1, k2, ... kn son keys y v1, v2, ... vn son values

    Ejemplo:
        std::map<int, string> student = {{1, "Jack"}, {2, "Blake"}, {3, "Denisse"}}
    */
    map<int, string> student;

    // use [] operator to add elements
    // de tal forma que dentro de los brackets se especifica el key
    // y despues del igual se especifica el value
    student[1] = "Jacqueline";
    student[2] = "Blake";

    // use insert() method to add element
    // se usa insert porque se recibe en forma key-value
    student.insert(make_pair(3, "Denise"));
    student.insert(make_pair(4, "Blake"));

    // values pueden utilizarse repetirse, keys no porque...
    // add elements with duplicate keys
    student[5] = "Timothy";
    student[5] = "Aaron"; // ...sobreescribe el ultimo agregado

    // Display info
    // .size() para hallar el numero de elementos del mapa
    for (int i=1; i <= student.size(); ++i) {
        cout << "Student[" << i << "]: " << student[i] << endl;
    }


    return 0;
}