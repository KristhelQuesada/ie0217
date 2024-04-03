#include <iostream>
#include <string>
#include "Ahorcado.hpp"
#include "Funciones.hpp"

#define MAX_WORDS 30

enum Difficulty {
    FACIL = 1,
    INTERMEDIO,
    DIFICIL,
    PERSONALIZADO
};

int main() {
    // Declaracion de variables y estructuras
    // y estructuras
    Game juego1;
    string dictionary[MAX_WORDS];
    string unfilled_word;
    int total_words;
    string newword;
    int dificultad;
    int opcion;

    // Inicializacion de variables
    juego1.max_tries = 3;
    bool detener = false;
    string txt_menu = "\nQue desea realizar:\n"
                      "1. Elegir la dificultad\n"
                      "2. Iniciar el juego\n"
                      "3. Agregar palabras al diccionario\n"
                      "4. Ver diccionario de palabras\n"
                      "5. Salir del programa\n"
                      "\nIngrese su respuesta: ";
    string txt_dificultad = "Dificultades:\n"
                            "1. Facil\n"
                            "2. Intermedio\n"
                            "3. Dificil\n"
                            "4. Personalizado\n"
                            "Seleccione la dificultad deseada: ";

    
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

        // Determinacion de funcion a ejecutar
        switch (opcion) {
            case 1:
                // Interaccion con usuario
                cout << txt_dificultad;
                cin >> dificultad;
                
                // Determinacion de intentos maximos
                switch (dificultad) {
                    case FACIL:
                        juego1.max_tries = 3;
                        break;
                    case INTERMEDIO:
                        juego1.max_tries = 5;
                        break;
                    case DIFICIL:
                        juego1.max_tries = 7;
                        break;
                    case PERSONALIZADO:
                        cout << "Ingrese la cantidad maxima de intentos: ";
                        cin >> juego1.max_tries;
                        break;
                    default:
                        cout << "Opción no válida" << endl;
                    }
                break;


            case 2:
                cout << "Inicia el juego";
                cout << "\nMAX TRIES: " << juego1.max_tries << endl;
                unfilled_word = gameStart(dictionary, &juego1);
                guessWord(&juego1, unfilled_word);



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