#include <sstream>
#include "Funciones.hpp"
using namespace std;

// https://www.geeksforgeeks.org/processing-strings-using-stdistringstream/
// Funcion que verifica la opcion ingresada en el menu
int verifyMenuOption(string input, int out_range) {
    int size_input = size(input); // determina el tamanio del string
    int verified_input;

    // Las opciones que queremos verificar solo tienen un caracter,
    // por tanto se pregunta si esto sucede
    if (size_input == 1) {

        // Luego se crea el objeto de la clase istringstream
        istringstream objetoEntrada(input);

        // Verifica si el caracter es un numero
        /* Para ello intenta extraer un entero de la cadena con
            objetoEntrada >> verified_input
           que devuelve true si la extraccion fue exitosa
        */
        if (objetoEntrada >> verified_input) {
            return verified_input;
        } else {
            return out_range;
        }

    } else {
        return out_range;
    }
}