#ifndef FUNCIONES_H
#define FUNCIONES_H

using namespace std;

// Prototipo de las funciones base
void gameStart(string array[], Game* game);
void guessWord(char letra);
void checkWord();

// Prototipo de funciones propias
int findSizeDictionary(string array[]);
void printDictionary(string array[]);
void addWords(string array[], string word);

#endif // FUNCIONES_H