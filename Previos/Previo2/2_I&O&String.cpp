#include <iostream>
#include <string>
using namespace std;

/*
Este programa combina los fragmentos de codigo de la
diapositiva 10 que explica las entradas del usuario
mediante el uso de cin y cout, asi como la declaracion
de string. Entonces

- cin >>: Indica que lo que sea que ingrese el usuario
lo vamos a almacenar en una variable x.
- cout <<: Para mostrarle un texto en pantalla al usuario.

Para declarar un tipo de dato string entonces se debe
incluir la libreria string como se muestra en la linea 2.
*/

int main() {
    // Declaring a local variable
    int x;
    string str;

    // Inicialization
    str = "Hello \n";

    // Displaying
    cout << str;
    cout << "Type a number: ";
    cin >> x;
    cout << "Your number is: " << x;
    cout << "\n";
    
    return 0;
}