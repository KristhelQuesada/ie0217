#ifndef FUNCIONES_H
#define FUNCIONES_H

using namespace std;

// Prototipo de las funciones base
string gameStart(string array[], Game* game);
void guessWord(Game* game, string unfilled_word);
void checkWord(Game* game);

// Prototipo de funciones propias
int findSizeDictionary(string array[]);
void printDictionary(string array[]);
void addWords(string array[], string word);

#endif // FUNCIONES_H