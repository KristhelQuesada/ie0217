#include <iostream>
#include <string>
#include "Ahorcado.hpp"
#include "Funciones.hpp"

#define MAX_WORDS 30


// Definicion de las funciones propias
int findSizeDictionary(string array[]) {
    // Inicializa la cantidad de palabras del arreglo en cero
    int total_words = 0;

    // Obtener el total de las palabras mediante un contador
    for (int i = 0; i < MAX_WORDS; ++i) {

        // Si el elemento no es un string vacio
        if (array[i] != "") {
            // Entonces aumente el contador
            total_words++;
        }
    }

    // Retorna la cantidad de palabras del diccionario
    return total_words;
}


void printDictionary(string array[]) {
    // Para cada elemento del arreglo
    for (int i = 0; i < MAX_WORDS; ++i) {

        // Si el elemento no es un string vacio
        if (array[i] != "") {
            // Entonces imprima el contenido
            cout << array[i] << ", ";
        }
    }
}


void addWords(string array[], string word) {
    // Inicializar contador de elementos del arreglo
    int elementos = findSizeDictionary(array);

    // Actualizar diccionario
    if (elementos < MAX_WORDS-1) {
        array[elementos] = word;
    } else {
        cout << "Ya no puede agregar mas palabras." << endl;
    }
}




// Definicion de las funciones Base
void gameStart(string array[]) {
    cout << "\nThis is the gameStart function" << endl;

    // Seleccionar la palabra aleatoria
    

}


void guessWord(char letra) {
    cout << "This is the guessWord function" << endl;
}


void checkWord() {
    cout << "This is the checkWord function" << endl;
}