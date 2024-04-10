#include <iostream>
#include <string>
#include <cstdlib> // Para utilizar rand()
#include <ctime>   // Para utilizar time()
#include "PaisesPrimerMundo.hpp"
#include "PaisesEnDesarrollo.hpp"
#include "Funciones.hpp"

/*
Tarea 2
Estudiante: Kristhel Quesada, C06153
Algoritmo: Uso de clases y objetos para la definicion de un planeta con
continentes, paises y tipos de paises cada uno representado por medio de
clases.
*/

int main() {
    // Declaracion de variables
    int opcion;
    //string input;

    // Inicializacion de variables
    bool detener = false;
    string txt_menu = "\n\nMENU:\n"
                      "1. Imprimir info de todos los paises.\n"
                      "2. Comparar dos paises\n"
                      "3. Agregar nuevo pais\n"
                      "4. Eliminar pais existente\n"
                      "5. Salir del programa\n"
                      "\nQue desea realizar: ";

    // Inicializacion de los objetos necesarios
    Planeta tierra("Tierra"); // Inicializa el planeta

    Continente asia("Asia"); // Inicializan los continentes
    Continente africa("Africa");
    Continente europa("Europa");
    Continente america("America");
    Continente oceania("Oceania");

    tierra.agregarContinente(&asia); // Agregar continentes al planeta
    tierra.agregarContinente(&africa);
    tierra.agregarContinente(&europa);
    tierra.agregarContinente(&america);
    tierra.agregarContinente(&oceania);

    PaisEnDesarrollo panama("Panama", 24, 100000, false, true, false); // Inicializar paises
    Pais colombia("Colombia", 13, 200000, true, false, true);
    Pais australia("Australia", 17, 5000000, true, true, true);

    america.agregarPais(&panama); // Agregar paises a continentes
    america.agregarPais(&colombia);
    oceania.agregarPais(&australia);

    
    // Inicio del programa
    cout << "Inicia el programa";

    // Loop para mantener la ejecucion del juego
    while (detener == false) {

        // Imprimir menu y pedir opcion al usuario
        cout << txt_menu;
        cin >> opcion;

        // Determinacion de funcion a ejecutar
        switch (opcion) {
            case 1:
                // Interaccion con usuario
                cout << "\nImpresion de los paises" << endl;

                // Crear un objeto Planeta y pasar un puntero a la función
                tierra.mostrarDetalles();
                break;


            case 2:
                cout << "\nComparacion de 2 paises";
                break;


            case 3:
                cout << "\nAgregar pais" << endl;
                tierra.mostrarCyP();
                break;


            case 4:
                cout << "\nEliminar pais" << endl;
                break;


            case 5:
                cout << "Fin del programa :)" << endl;
                detener = true;
                break;


            default:
                cout << "Opción no válida" << endl;
        }
    }

    return 0;
}