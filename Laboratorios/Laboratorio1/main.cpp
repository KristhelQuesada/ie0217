#include <iostream>
#include "Contacto.hpp"
#include "Funciones.hpp"

#define MAX_CONTACTOS 100 // codigo modular o escalable

/*
Un enum contiene varios defines, se puede ver asi.
En este caso vamos a hacer un enum del menu de opciones.
*/
enum Opciones {
    AGREGAR = 1,
    MOSTRAR,
    BUSCAR,
    SALIR
};

int main() {
    // instanciacion de la estructura
    //si accedemos a esta variable vamos a deter info basura
    Contacto listaContactos[MAX_CONTACTOS];

    int numContactos = 0;
    int opcion;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Agregar Contacto\n";
        std::cout << "2. Mostrar Contactos:\n";
        std::cout << "3. Buscar Contacto:\n";
        std::cout << "4. Salir:\n";

        std::cout << "Ingrese su opcion: ";
        std::cin >> opcion;

        /*
        Se envia listaContactos, numContactos por parametro porque
        ya en Funciones.hpp se define como hacerlo.

        Hay tres tipos de parametros:
        - por copia: variable directamente
        - por puntero: pasa directamente la direccion en memoria
        pero para ello es necesario haber declarado la variable
        en donde vamos a albergar dicha direccion para asi pasarla.
        - por referencia: se pasa &variable

        Referencia es lo que sea que le hagamos a una variable y que
        modifica la variable original, es como un casteo sin necesidad
        de crear una nueva variable
        */

        switch (opcion) {
            case AGREGAR:
                agregarContacto(listaContactos, numContactos);
                break;
            case MOSTRAR:
                mostrarContactos(listaContactos, numContactos);
                break;
            case BUSCAR:
                buscarContacto(listaContactos, numContactos);
                break;
            case SALIR:
                std::cout << "Saliendo del programa... \n";
                break;
            default:
                std::cout << "Opcion no valida. Intente de nuevo... \n";
                // el manejo del error cuando el usuario ingresa una opcion
                // diferente se maneja asumiendo el happy path
                break;
        }
    } while (opcion != SALIR);



    return 0;
}