#include <iostream>
using namespace std;

/*
Este programa explica sentencias o statements break y continue de la
diapositiva 18. Dichos statements se utilizan en los for y while, tal
que su utilizacion esta dada por:

==> break: romper el ciclo. Si llegamos a ejecuar el brake entonces nos
salimos del for o del while del todo.

==> continue: continuar hacia la siguiente iteracion. Si llegamos al
continue entonces nos saltamos a la siguiente iteracion tal que se
actualiza el valor, se revisa la condicion para ver si se ejecuta nue-
vamente el cuerpo o no.
*/

int main() {
    // Declaring variables
    int i, j;

    // Initializing variables
    int k = 1;
    int l = 1;


    // TRYING THE BREAK
    //with a for
    cout << "--> Break with a for \n";
    for (int i=1; i <= 5; ++i) {

        if (i == 3) {
            cout << i << " por tanto se ejecuta el break \n";
            break;
        }

        cout << i << ", ";
    }
    // Prints: 1, 2, 3 por tanto se ejecuta el break


    // with a while
    cout << "\n\n--> Break with a while\n";
    while (k <= 5) {
        
        if (k == 3) {
            cout << k << " por tanto se ejecuta el break \n";
            break;
        }
        
        cout << k << ", ";
        ++k;
    }
    // Prints: 1, 2, 3 por tanto se ejecuta el break


    // TRYING THE CONTINUE
    //with a for
    cout << "\n\n--> Continue with a for \n";
    for (int j=1; j <= 5; j++) {

        if (j == 4) {
            cout << j << " se ejecuta el continue, ";
            continue;
        }

        cout << j << ", ";
    }
    // Prints: 1, 2, 3, 4 se ejecuta el continue, 5,


    // with a while
    cout << "\n\n--> Continue with a while\n";
    while (l <= 5) {
        cout << l << ", ";
        l++;
        
        if (l == 3) {
            cout << l << " se ejecuta el continue, ";
            continue;
        }
    }
    // Prints: 1, 2, 3 se ejecuta el continue, 3, 4, 5
    // el 3 se imprime doble porque el primero es de la segunda
    // iteracion y el otro es de la tercera antes de la actuali-
    // zacion ya que luego cambia a 4, por eso no se ejecuta el
    // continue.


    cout << endl;


    return 0;
}