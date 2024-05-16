#include <iostream>
#include <string>
#include "ValidadorEmail.hpp"
#include "Funciones.hpp"
using namespace std;

// ENUM para organizar el switch-case implementado en el menu
enum menuOpts {
    VERIFY_EMAIL = 1,
    EXIT,
    MENU_MAX_OPT
};

int main() {
    // Declaracion e inicializacion de variables
    int opcion;
    string optInput, emailInput;
    bool detener = false;

    // Logica para el menu
    while (detener == false) {
        // Menu para el ususario
        cout << "\n------------------------------------\n";
        cout << "               MENU\n";;
        cout << "1. Verificar correo electronico\n";
        cout << "2. Salir\n";
        cout << "\nQue desea realizar: ";
        cin >> optInput;
        opcion = verifyMenuOption(optInput, MENU_MAX_OPT); // Maneja errores
        cin.ignore();


        // Determinacion de funcion a ejecutar
        switch (opcion) {

            // Case cuando se escoja verificar
            case VERIFY_EMAIL:
                cout << "\n -> Ingrese el email a verificar: ";
                cin >> emailInput;

                try {
                    bool isValid = ValidadorEmail::verifyEmail(emailInput); // verifique
                    cout << "El email ingresado es valido!" << endl; // if valid, execute

                } catch(const invalid_argument& e) {
                    cerr << "Excepcion Found: " << e.what() << endl; // else, print error
                }
                break;

            // case cuando se escoja salir
            case EXIT:
                cout << "Gracias por utilizar el programa." << endl;
                detener = true;
                break;

            // Case default
            default:
                cout << "Opcion ingresada no valida." << endl;
                break;
        }
        
    }

    return 0;
}