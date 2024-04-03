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
void gameStart(string array[], Game* game) {
    // Declaracion de variables
    string ans_word;
    int rand_index;
    int size_word;

    // Inicializacion de variables
    int words_qty = findSizeDictionary(array);
    int max_index = words_qty - 1;
    
    // Manejo y redireccion de error
    // si hay palabras entonces:
    if (words_qty > 0) {
        cout << "-------------------------------------------------\n";
        cout << "INICIA EL JUEGO\n";
        cout << "-------------------------------------------------\n";

        // Seleccionar la palabra aleatoria
        // if para manejo de error
        if (words_qty == 1) {
            game->goal_word = *(array);
        } else {
            rand_index = rand() % max_index; // genera un valor entre 0 y el indice maximo
            game->goal_word = *(array+rand_index); // actualiza la palabra a adivinar por puntero
        }
        // cout << "La palabra es: " << game->goal_word << endl; // for debug

        // Inicializar en blanco la palabra
        size_word = size(game->goal_word);
        // cout << "Su tamanio es de: " << size_word << " caracteres" << endl; // for debug

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
        // cout << "AnsWord is: " << ans_word << endl; // for debug
        game->actual_tries = 1;

        // Llama la funcion que buscara la palabra
        guessWord(game, ans_word);

    // si no hay palabras entonces
    } else {
        cout << "Primero debe ingresar algunas palabras." << endl;
    }
}


void guessWord(Game* game, string unfilled_word) {
    // Declarar variable letra
    bool stop; // starts in false by default
    bool match;
    char letra;

    // Verificar que la letra esta dentro de la palabra
    int size_word = size(game->goal_word);
    while (stop == false) {
        cout << "\n\nIntento: " << game->actual_tries << endl;
        cout << "Maxima cantidad de intentos: " << game->max_tries << endl;
        cout << "Ingrese la letra: ";
        cin >> letra;
        for (int i = 0; i < size_word; ++i) {
            // actualizar estado de la palabra
            if (letra == game->goal_word[i]) {
                unfilled_word[i] = letra;
                match = true;
            }
            cout << unfilled_word[i] << " ";
        }

        // Falta determinar por que no se ejecuta
        if (game->actual_tries == game->max_tries) {
            cout << "\n\nUltimo intento! Ingrese la palabra que considera correcta: ";
            cin >> unfilled_word;
        }

        stop = checkWord(game, unfilled_word, match);
        match = false; // reset the variable
    }

}


bool checkWord(Game* game, string unfilled_word, bool match) {
    // Declaracion de variable booleans
    bool fin_programa;

    // Cuenta los intentos
    if (match == false) {
        game->actual_tries++;
    }

    // Verificar que la palabra es igual
    if (unfilled_word == game->goal_word) {
            cout << "\n\n-------------------------------------------------\n";
            cout << "Felicidades, has ganado!" << endl;
            cout << "-------------------------------------------------\n";

            fin_programa = true;
    }

    // si nos pasamos de intentos
    if (game->actual_tries > game->max_tries) {

        // y la palabra es incorrecta
        if (unfilled_word != game->goal_word) {
            cout << "\n\n-------------------------------------------------\n";
            cout << "Has perdido, game over :(" << endl;
            cout << "-------------------------------------------------\n";

            fin_programa = true;
        }
    }

    return fin_programa;
}