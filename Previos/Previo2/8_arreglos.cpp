#include <iostream>
using namespace std;

/*
Este programa introduce los arrays o arreglos de la diapositiva 19.
Se implementa un arreglo x de tamanio 6 y por ende sus indices iran
de 0 a 5. Si se especifica un tamanio para el arreglo pero al ini-
cializarlo no se especifican todos los elementos entonces el array
completara sus espacios restantes con cero.

Para el caso de arreglos de dos dimensiones, recuerde que el primer
corchete denota las filas y el segundo las columnas, por tanto:
--> x[3][4] implica un arreglo de 3 filas y 4 columnas.

Hay dos formas de escribir arreglos en 2D pero se prefiere la des-
crita en la linea 32 ya que es mas legible y ordenada, pero ambas
son iguales.
*/

int main() {

    // Declaring and initializing an array 1D
    int x[6] = {19, 10, 8, 17, 9, 15}; // inicializacion completa
    int y[6] = {19, 10, 8}; //inicializacion autocompletada con 0's

    for (int i = 0; i < 6; i++) {
        cout << y[i] << " ";
    }

    // Declaring and initializing an array 2D
    int z1[2][3] = {2, 4, 5, 9, 0, 10};
    int z2[2][3] = { {2, 4, 5}, {9, 0, 10} };

    cout << endl;
    return 0;
}