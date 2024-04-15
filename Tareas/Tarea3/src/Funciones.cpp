#include <sstream>
#include "Funciones.hpp"

// Funcion que verifica la opcion ingresada en el menu
int verifyMenuOption(string input, int out_range) {
    int verified_input;
    int size_input;

    // Primero se pregunta por el tamanio del string
    size_input = size(input);


    // Las opciones solo tienen un caracter, por tanto se pregunta
    // si esto sucede
    if (size_input == 1) {

        // Luego se crea el objeto de la clase istringstream
        istringstream objetoEntrada(input);

        // Verifica si el caracter es un numero
        if (objetoEntrada >> verified_input) { // Intenta extraer un entero de la cadena
            return verified_input;   // Si tiene éxito, devuelve el valor entero
        } else {
            return out_range;
        }

    } else {
        return out_range;
    }
}