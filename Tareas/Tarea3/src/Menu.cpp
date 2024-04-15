#include <iostream>
#include <string>
#include "Menu.hpp"
#include "Funciones.hpp"
#include "Contacto.hpp"
#include "LinkedListFuncs.hpp"
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
    Contacto* listaContactos = nullptr;
    Contacto nuevoContacto;
    int opcion;
    int phone_input;
    string input;
    string name_input;



    // Inicializacion de variables
    bool detener = false;
    string txt_menu = "\n______________________________________\n"
                      "MENU:\n"
                      "1. Agregar contacto\n"
                      "2. Eliminar contacto\n"
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
                cout << "\nAGREAGANDO CONTACTO..." << endl;

                // Crear un nuevo objeto Contacto
                cout << "Ingrese el nombre: ";
                cin.ignore();
                getline(cin, nuevoContacto.name);

                cout << "Ingrese el numero telefonico: ";
                cin >> nuevoContacto.phone;
                //nuevoContacto.name = "Juan";
                //nuevoContacto.phone = 88004554;
                nuevoContacto.siguiente = NULL; // Inicializamos siguiente a NULL

                agregarContacto(nuevoContacto, listaContactos);

                //delete nuevoContacto;

                break;

            case DELETE_CONTACT:
                cout << "\nELIMINANDO CONTACTO... " << endl;
                
                break;

            case SHOW_CLOUD:
                cout << "\nALMACENAMIENTO Y CLOUD... " << endl;
                break;

            case SHOW_CONTACTS:
                cout << "\nLISTA DE CONTACTOS... " << endl;
                mostrarContactos(listaContactos);
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

    // Liberar la memoria fuera del while cuando termina el programa
    liberarMemoria(listaContactos);
}