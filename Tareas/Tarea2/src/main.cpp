#include <iostream>
#include <string>
#include "Funciones.hpp"

int main() {
    int opcion;
    //string input;

    // Inicializacion de variables
    bool detener = false;
    string txt_menu = "\nMENU:\n"
                      "1. Imprimir info de todos los paises.\n"
                      "2. Comparar dos paises\n"
                      "3. Agregar nuevo pais\n"
                      "4. Eliminar pais existente\n"
                      "5. Salir del programa\n"
                      "\nQue desea realizar: ";

    
    // Inicio del programa
    cout << "Inicia el programa\n";
    Planeta tierra("Tierra", 3);

    // Loop para mantener la ejecucion del juego
    while (detener == false) {

        // Imprimir menu y pedir opcion al usuario
        cout << txt_menu;
        cin >> opcion;

        // Determinacion de funcion a ejecutar
        switch (opcion) {
            case 1:
                // Interaccion con usuario
                cout << "Impresion de los paises" << endl;

                // Crear un objeto Planeta y pasar un puntero a la función
                funcionPrueba(&tierra);

                break;


            case 2:
                cout << "Comparacion de 2 paises";

                break;


            case 3:
                cout << "Agregar pais" << endl;
                break;


            case 4:
                cout << "Eliminar pais" << endl;
                break;


            case 5:
                cout << "Gracias por jugar" << endl;
                detener = true;
                break;


            default:
                cout << "Opción no válida" << endl;
        }
    }
    return 0;
}