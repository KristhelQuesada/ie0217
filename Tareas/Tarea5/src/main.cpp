// MIT License
// 
// Copyright (c) 2024 Kristhel Quesada
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

/**
 * @file main.cpp
 * @brief Main file en donde se puede poner a prueba la implementacion de la
 * clase ValidadorEmail.
 * @date 16-05-2024
 *
 * En este archivo se encuentra un menu que permite ingresar una direccion de
 * email o salir. ESta retorna un mensaje de exito o de error dependiento de
 * la entrada digitada por el usuario.
 */

#include <iostream>
#include <string>
#include "ValidadorEmail.hpp"
#include "Funciones.hpp"
using namespace std;

/*
    TAREA 05
    Algoritmo para validar un email mediante expresiones regulares, de tal forma
    que se especifican reglas especificas para el nombre, dominio y extension de
    la direccion de correo elecronico.
*/

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
        cout << "Que desea realizar: ";
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