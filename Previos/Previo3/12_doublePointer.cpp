#include <iostream>
using namespace std;

/*
Description:
Este programa continua el estudio de punteros dobles con base en la
diapositivas 21 de la presentacion. Basicamente consiste en visualizar
que si bien se tiene una direccion de memoria que apunta a una variable
(puntero), tambien se puede tener otro puntero cuyo valor asociado es
esa misma direccion. Es decir, direcciones de memoria asociadas a otras
direcciones de memoria.
*/

// FUNCTION MAIN
int main() {
    // D&I variables
    int var = 2050;
    int* ptr_var;
    ptr_var = &var;

    // Displaying the variables
    cout << "var: " << var << ", &var: " << &var << endl;
    cout << "ptr_var: " << ptr_var << endl;
    cout << "&ptr_var: " << &ptr_var << endl;
    
    // The double pointer
    int** ptr_ptr_var;
    ptr_ptr_var = &ptr_var;

    // Displaying the result
    cout << "\nptr_ptr_var: " << ptr_ptr_var << endl;
    cout << "&ptr_ptr_var: " << &ptr_ptr_var << endl;

    return 0;
}