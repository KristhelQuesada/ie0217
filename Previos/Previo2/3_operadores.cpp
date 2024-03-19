#include <iostream>
using namespace std;

/*
Este programa explica algunos de los operadores extra de
la diapositiva 12, donde:

- ?: -> permite hacer un if en una sola linea, donde ? actua
si la condicion se cumple y el : cuando la condicion no se cumple
y se llama operador ternario.
*/

int main() {
    // D&I a local variable
    int var1 = 0;
    int var2;
    int var3;

    // Trying the ?: operator
    var2 = (var1 == 0) ? 15 : 27; //15
    var3 = (var1 == 3) ? 15 : 27; //27

    // Displaying
    cout << "var2 is: " << var2 << "\n";
    cout << "var3 is: " << var3 << "\n";
    
    return 0;
}