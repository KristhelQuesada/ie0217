#ifndef AHORCADO_H
#define AHORCADO_H

using namespace std;

//Prototipo del struct
struct Game {
    string goal_word; // palabra a adivinar
    int guessed_ltrs; // letras adivinadas
    int left_ltrs; // letras restantes
    int max_tries; // cantidad maxima de intentos posibles
    int actual_tries; // intentos realizados
};

#endif // AHORCADO_H