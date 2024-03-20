#include <iostream>
using namespace std;

/*
DESCRIPCION
Este programa introduce el concepto de punteros con base en la
diapositiva 11, 12 y 13 de la presentacion. 
- Un puntero es una variable que igualmente puede tener asociada
un tipo de variable tipo entero, caracter, double, etc.
- En resumen, un puntero es otro tipo de variable que apunta a la
ubicacion en memoria de otra variable, permitiendonos acceder y
modificar la variable a la cual esta apuntando.
- Para terminos de notacion, un puntero se va a identidificar con
un asterisco antes de la variable tipo int* pnt es un puntero que
alberga la direccion en memoria de una variable.

EN RESUMEN
==> int var --> declara una variable tipo entero
==> int* pointVar --> declara una variable tipo entero puntero
==> pointVar = &var --> Una variable entero puntero debe alber-
gar en si una direccion por ende lo igualamos a una mediante el
uso del &<variable>.

==> Referencia: cuando accedemos a la direccion en memoria, por
ejemplo, cuando definimos pointVar = &var.
==> Derefencia: cuando accedemos al valor de la variable mediante
su direccion en memoria, por ejemplo, cuando utilizamos *pointVar.

ERRORES COMUNES
Error #1: varPoint is an address not a variable like var.
>> varPoint = var;  // wrong diff data type
>> varPoint = &var; // correct

Error #2: &var is an address while *varPoint is the value or
the content stored in &var.
>> *varPoint = &var;  // wrong
>> *varPoint = var;   // correct
*/


int main() {
    // Initializing variables
    int var = 5;

    // Declaring a pointer variable
    int* pointVar;

    // First Example
    cout << ">>> FIRST EXAMPLE" << endl;
    pointVar = &var; // store address of var
    
    cout << "var = " << var <<endl; // print var
    cout << "Address of var (&var): " << &var << endl; // print address
    cout << "Address of var (pointVar): " << pointVar << endl; // print address
    cout << "Content of the address pointed by pointVar (*pointVar): " << *pointVar << endl;


    // Second Example
    cout << "\n>>> SECOND EXAMPLE" << endl;
    cout << "Changing value of var to 7:" << endl;
    var = 7; // classic way
    cout << "var = " << var << endl;
    cout << "Content (using *pointVar): " << *pointVar << endl;
    cout << "Address of var (&var): " << &var << endl; // print address

    cout << "\nChanging value of var to 16:" << endl;
    *pointVar = 16; // using pointers
    cout << "var = " << var << endl;
    cout << "Content (using *pointVar): " << *pointVar << endl;
    cout << "Address of var (&var): " << &var << endl; // print address

    return 0;
}