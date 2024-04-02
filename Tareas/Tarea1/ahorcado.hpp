#ifndef AHORCADO_H
#define AHORCADO_H

using namespace std;

//Prototipo del struct
struct Game {
    char goal_word[100]; // palabra a adivinar
    int guessed_ltrs; // letras adivinadas
    int left_ltrs; // letras restantes
    int max_tries; // cantidad maxima de intentos posibles
    int actual_tries; // intentos realizados
};

// Prototipo de las funciones
void gameStart();
void guessWord(char letra);
void checkWord();

#endif // AHORCADO_H