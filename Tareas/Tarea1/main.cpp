#include <iostream>
#include <string>
#include "Ahorcado.hpp"
#include "Funciones.hpp"

#define MAX_WORDS 30

int main() {
    // Declaracion de variables y estructuras
    // y estructuras
    Game juego1;
    string dictionary[MAX_WORDS];
    int total_words;
    string newword;
    int opcion;

    // Inicializacion de variables
    bool detener = false;
    string txt_menu = "\nQue desea realizar:\n"
                      "1. Elegir la dificultad\n"
                      "2. Iniciar el juego\n"
                      "3. Agregar palabras al diccionario\n"
                      "4. Ver diccionario de palabras\n"
                      "5. Salir del programa\n"
                      "\nIngrese su respuesta: ";

    
    // Inicio del programa
    cout << "BIENVENIDO AL JUEGO DE AHORCADO\n";

    // Recomendar al usuario que ingrese palabras primero
    cout << "\nPor el momento no hay palabras en el diccionario, ";
    cout << "por tanto se recomienda escoger la Opcion 3." << endl;


    // Loop para mantener la ejecucion del juego
    while (detener == false) {
        // Inicializar el juego

        // Imprimir menu y pedir opcion al usuario
        cout << txt_menu;
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Opción 1 seleccionada\n" << endl;
                break;
            case 2:
                cout << "Opción 2 seleccionada\n" << endl;
                break;
            case 3:
                cout << "Escriba la palabra que desea agregar: ";
                cin >> newword;
                addWords(dictionary, newword);

                break;
            case 4:
                cout << "El diccionario contiene las palabras: ";
                printDictionary(dictionary);
                cout << "\n";
                
                break;
            case 5:
                cout << "Opción 5 seleccionada\n" << endl;
                detener = true;
                break;
            default:
                cout << "Opción no válida" << endl;
        }
    }
    return 0;
}