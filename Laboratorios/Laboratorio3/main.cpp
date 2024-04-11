// Ya no se necesitan pues se importan en Libro.hpp
//#include <iostream>
//#include <string>
#include "Libro.hpp"
#include "Funciones.hpp"

// Usualmente esto no se usa oprar especificar de
// mejor forma de que libreria se extraen las cosas
//using namespace std;

/*
Get line funciona para obtener la informacion de toda la
linea y no cortada o segmentada por espacio, por ejemplo,
si ingresamos "Hola mundo", toda esa oracion se guardaria
pero com cin entonces solo se guardaria "Hola".
*/

// Creacion de un enum para hacer del codigo main algo mas modular
enum opciones {
    AGREGAR_LIBRO = 1,
    MOSTRAR_LIBRO,
    SALIR,
    OPCIONES_MAX // para saber cuantas opciones tenemos
};


int main() {
    // Crea una variable de tipo libro puntero que se llama
    // listalibros y que apunta nullptr
    Libro* listaLibros = nullptr;
    int opcion;

    // Menu
    do {
        cout << "Seleccione su opcion:" << endl;
        cout << "1. Agregar un libro" << endl;
        cout << "2. Mostrar todos los libros" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;

        switch (opcion) {
            case AGREGAR_LIBRO:
                agregarLibro(listaLibros);
                break;
            case MOSTRAR_LIBRO:
                mostrarLibros(listaLibros);
                break;
            case SALIR:
                cout << "Saliendo del programa... " << endl;
                break;
            default:
                cout << "Opcion no permitida." << endl;
                break;
        }
    } while (opcion != 3);

    // Liberar la memoria fuera del while cuando termina el programa
    liberarMemoria(listaLibros);

    return 0;
}
