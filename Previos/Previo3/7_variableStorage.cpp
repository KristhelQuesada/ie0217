#include <iostream>
using namespace std;

/*
Descripcion
Este programa busca comprender que pasa a nivel de memoria cuando
estamos utilizando algunas variables y con base en la diapositiva
10 de la presentacion. En este caso se introduce el &, que cuando
esta pegado a una variable entonces representa la direccion de me-
moria donde esta almacenada esa variable. La memoria internamente
es un archivero.
*/

int main() {
    // Initializing variables
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;

    // Printing the addresses
    cout << "Address of var1: " << &var1 << endl;
    cout << "Address of var2: " << &var2 << endl;
    cout << "Address of var3: " << &var3 << endl;

    return 0;
}