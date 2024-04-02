#include <iostream>
#include <cstring>
#include "ahorcado.hpp"


int main() {
    // Declaracion e inicializacion de variables
    // y estructuras
    Game juego1;
    char letter = 'a';

    // Prueba de las funciones
    cout << ">>> PROBANDO FUNCIONES\n";
    gameStart();
    guessWord(letter);
    checkWord();


    // Prueba del struct
    cout << "\n>>> PROBANDO EL STRUCT\n";
    
    // ingresando informacion
    cout << "Enter a word: ";
    cin.get(juego1.goal_word, 100);
    cout << "Enter the maximun tries possible: ";
    cin >> juego1.max_tries;

    juego1.guessed_ltrs = 5;
    juego1.left_ltrs = 2;    
    juego1.actual_tries = 0;

    // imprimiendo informacion
    cout << "Palabra: " << juego1.goal_word << endl;
    cout << "Letras adivinas: " << juego1.guessed_ltrs << endl;
    cout << "Letras restantes: " << juego1.left_ltrs << endl;
    cout << "Maxima cantidad de intentos: " << juego1.max_tries << endl;
    cout << "Intentos realizados: " << juego1.actual_tries << endl;



    return 0;
}