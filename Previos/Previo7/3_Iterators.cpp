#include <iostream>
#include <vector>
using namespace std;

/*
DESCRIPCION
Este programa pretende introducir el concepto de iteradores todo con base
en la presentacion 9 de la diapositiva. Un iterador es un objeto similar
a un puntero ya que representa la posición de un elemento dentro de un 
contenedor, y su función consiste en poder iterar sobre dichos elementos,
todo mediante aritmética de punteros internamente.

Por ejemplo, en un vector llamado nums de tamaño 4
	- begin()
	- end(): solo que este apunta al elemento más allá del elemento final,
    por lo que si realmente queremos obtener el final real debería ser
       >>> .end()-1 
    esto porque tenemos que tener algún punto para identificar cuál es el fin.

… esta son funciones miembro que devuelven iteradores que apuntan al inicio
y al final del vector respectivamente.

En esta caso, se va a evaluar el iterador para un vector, mas tambien existen
iteradores para mapas incluso. Para ello primero debe crearse un contenedor al
cual vamos a asociar el el iterador, ambos deben tener el mismo tipo de dato
ya que de lo contrario se genera un error.

Se puede hacer de dos formas la especificacion de un iterador:
1. vector<string>::iterator itr = languages.begin()
2. auto itr = languages.begin()
usualmente se prefuere la primera cuando se requiere especificar y mantener un
control sobre las variables que estamos utilizando.
*/.

int main() {
    // create a vector of strings
    // Primero se define el contenedor al cual le vamos a querer asociar un iterador
    // con todo y su tipo de dato
    vector <string> languages = {"Python", "C++", "Java"};

    // create an iterator to a string vector
    // Luego creamos el iterador del tipo contenedor que creamos especificando el
    // mismo tipo de dato ya que de otra forma se va a generar un error
    vector<string>::iterator itr;

    /* Iterate over all elements
    Por ultimo, utilizamos el iterador y sus funciones miembro segun se requiera
    - El for comienza con el primer elemento del vector -> languages.begin()
    - No se detiene hasta que se llega a la posicion mas alla del ultimo elemento
    del vector -> languages.end()
    */
    for (itr = languages.begin(); itr != languages.end(); itr++) {
        cout << *itr << ", "; // se usa el * porque como es un tipo de puntero
                              // el * recordemos que nos pemitia acceder al valor
                              // que contenia ese puntero ahora llamado iterador
    }

    cout << endl;
    

    return 0;
}