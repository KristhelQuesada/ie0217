#include <iostream>
#include "6_persona.hpp"

/*
DESCRIPCION

Este es el archivo main para ejemplificar la separacion de archivos
de la diapositiva 10 de la presentacion, cuyo proposito es ver como
se fragmentarian los archivos para definir las clases y las funciones
mediante archivos de encabezado.

Este es el archivo main donde se desarrolla la implementacion
*/

using namespace std;

int main() {
    // Instanciamos el objetos
    Persona p("Juan", 25);

    // Hacemos uso de sus funciones
    cout << "Nombre: " << p.getNombre() << endl;
    cout << "Edad: " << p.getEdad() << endl;

    p.setEdad(26);

    // Imprimimos nuevamente la edad luego del cambio
    cout << "Nueva edad: " << p.getEdad() << endl;


    return 0;
}