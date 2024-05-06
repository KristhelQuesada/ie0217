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


/*
    Tarea 4
    Estudiante: Kristhel Quesada, C06153

    Algoritmo: Gestion y manipulacion de matrices utilizando el uso de templates,
    manejo de excepciones y la biblioteca STL; ademas, se permite la creacion de
    matrices de diferentes tipos de datos y diferentes operaciones basicas entre
    ellas suma, resta y multiplicacion.

*/

// Includes de los archivos y librerias necesarias
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include "Matriz.hpp"
#include "Funciones.hpp"
using namespace std;


// ENUM para organizar el switch-case implementado en el menu
enum menuOpts {
    ADD_MATRIX = 1,
    SHOW_MATRIX,
    OPERATIONS,
    EXIT,
    MENU_MAX_OPT
};


// MAIN FUNCTION
int main() {
    // Declaracion e inicializacion de variables
    bool detener = false; // bandera de detenimiento
    string input;
    int opcion;

    vector<int> v1 = {1, 2, 3, 4, 5, 6};

    // Matriz resultado
    Matriz<int> m1(2, 3, true, false, v1);

    // Matriz random
    Matriz<int> m2(2, 3, false, true);

    // Matriz to fill
    Matriz<int> m3(2, 3, false, false);




    // Loop para mantener la ejecucion del juego
    cout << "INICIO DEL PROGRAMA" << endl;
    while (detener == false) {

        // Menu para el ususario
        cout << "\n______________________________________\n";
        cout << "MENU:\n";
        cout << "1. Agregar matriz\n";
        cout << "2. MOstar matrices\n";
        cout << "3. Realizar operacion con matrices\n";
        cout << "4. Salir\n";
        cout << "\nQue desea realizar: ";
        cin >> input;
        opcion = verifyMenuOption(input, MENU_MAX_OPT); // Maneja errores
        cin.ignore();


        // Determinacion de funcion a ejecutar
        switch (opcion) {
            case ADD_MATRIX:
                cout << "\nAGREGANDO MATRIZ..." << endl;
                break;

            case SHOW_MATRIX:
                cout << "\nMOSTRANDO MATRICES... " << endl;
                break;

            case OPERATIONS:
                cout << "\nREALIZANDO OPERACIONES... " << endl;
                break;

            case EXIT:
                cout << "Gracias por utilizar el programa." << endl;
                detener = true;
                break;

            default:
                cout << "Opcion ingresada no valida." << endl;
                break;



        } // Fin del switch

    } // Fin del while
    return 0;

} // Fin del main