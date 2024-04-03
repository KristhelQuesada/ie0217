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
string gameStart(string array[], Game* game) {
    cout << "\nThis is the gameStart function" << endl;
    string ans_word;
    int rand_index;
    int size_word;
    int words_qty = findSizeDictionary(array);
    int max_index = words_qty - 1;
    
    if (words_qty > 0) {
        // Seleccionar la palabra aleatoria
        rand_index = rand() % max_index; // genera un valor entre 0 y el indice maximo
        game->goal_word = *(array+rand_index); // actualiza la palabra a adivinar por puntero
        cout << "La palabra es: " << game->goal_word << endl;

        // Inicializar en blanco la palabra
        size_word = size(game->goal_word);
        cout << "Su tamanio es de: " << size_word << " caracteres" << endl;

        // crear los blancos con base en el tamanio de la palabra
        for (int i = 0; i < size_word; ++i) {
            // palabra en "blanco"
            ans_word.push_back('_');

            // impresion
            if (i == size_word-1) {
                cout << "_\n";
            } else {
                cout << "_ ";
            }
        }

        // Establecer max_tries and left_tries
        cout << "AnsWord is: " << ans_word << endl;
        game->actual_tries = 0;

        return ans_word;

    } else {
        cout << "Primero debe ingresar algunas palabras." << endl;
        return "";
    }
}


void guessWord(Game* game, string unfilled_word) {
    cout << "This is the guessWord function" << endl;
    // Declarar variable letra
    char letra;

    // Construir palabra

    // Mantener el loop si aun no se gastan los intentos
    if (game->actual_tries <= game->max_tries) {

        // Verificar que la letra esta dentro de la palabra
        int size_word = size(game->goal_word);

        while (game->actual_tries <= game->max_tries) {

            cout << "\n\nIngrese la letra: ";
            cin >> letra;

            for (int i = 0; i < size_word; ++i) {
                // actualizar estado de la palabra
                if (letra == game->goal_word[i]) {
                    unfilled_word[i] = letra;
                }

                cout << unfilled_word[i] << " ";
            }
        }

    // si agota los intentos entonces
    } else if (game->actual_tries <= game->max_tries) {
        cout << "Ultimo intento! Ingrese la palabra que considera correcta: ";

    }

}


void checkWord(Game* game) {
    cout << "This is the checkWord function" << endl;

    // Cuenta los intentos


    // Verificar que la palabra es igual


}