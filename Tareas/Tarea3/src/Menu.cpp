#include <iostream>
#include <string>
#include "Menu.hpp"
#include "Funciones.hpp"
using namespace std;

// ENUM para organizar el switch-case implementado en el menu
enum opciones {
    ADD_CONTACT = 1,
    DELETE_CONTACT,
    SHOW_CLOUD,
    SHOW_CONTACTS,
    SALIR,
    OPCIONES_MAX // para saber cuantas opciones tenemos
};

void menu() {
    // Declaracion de variables
    int opcion;
    string input;



    // Inicializacion de variables
    bool detener = false;
    string txt_menu = "\nMENU:\n"
                      "1. Agregar contacto\n"
                      "2. ELiminar contacto\n"
                      "3. Imprimir informacion en el cloud\n"
                      "4. Mostrar todos los contactos\n"
                      "5. Salir del programa\n"
                      "\nQue desea realizar: ";



    // Loop para mantener la ejecucion del juego
    while (detener == false) {

        // Imprimir menu y pedir opcion al usuario
        cout << txt_menu;
        cin >> input;

        opcion = verifyMenuOption(input, OPCIONES_MAX);

        // Determinacion de funcion a ejecutar
        switch (opcion) {
            case ADD_CONTACT:
                cout << "AGREAGANDO CONTACTO..." << endl;
                break;

            case DELETE_CONTACT:
                cout << "ELIMINANDO CONTACTO... " << endl;
                break;

            case SHOW_CLOUD:
                cout << "ALMACENAMIENTO Y CLOUD... " << endl;
                break;

            case SHOW_CONTACTS:
                cout << "LISTA DE CONTACTOS... " << endl;
                break;

            case SALIR:
                cout << "Gracias por utilizar el programa." << endl;
                detener = true;
                break;

            default:
                cout << "Opcion ingresada no valida." << endl;
                break;
        }
        
    }
}