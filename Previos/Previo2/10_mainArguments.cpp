#include <iostream>
using namespace std;

/*
Este programa introduce el uso de argumentos en la funcion main con
base en la diapositiva 23 de la presentacion. 

La funcion main tambien puede recibir argumentos y son argc (argument
count) y argv (argument vector) (recuerde que la funcion main no puede
ser recursiva).

==> int argc: cantidad de argumentos.
==> char* argv: un puntero de tipo caracter, es decir, va a recibir 
strings, como un arreglo de cadenas de caracteres. La primera posi-
cion del argv siempre contiene el nombre del programa (ejecutable).
Para pasar mas argumentos por la linea de comandos simplemente a la
par del ./ejecutable.exe coloco los valores separados por espacio.

Ambos tienen la funcion de recibir parametros desde la linea de comandos.
*/

int main(int argc, char* argv[]) {
    // Imprimir argumentos principales

    cout << "Numero de argumentos: " << argc << endl;
    // si se ingresan 2 argumentos adicionales entonces el output es:
    // 1 || 3
    cout << "Nombre del programa: " << argv[0] << endl;
    // si se ingresan 2 argumentos adicionales entonces el output es:
    // ./ejecutable.exe || ./ejecutable.exe 3 hello

    // el doble pipe divide dos casos distintos, cuando se ingresan
    // argumentos y cuando se ingresan 2 extra

    // Teacher's code
    cout << "argv[1]: " << argv[1] << endl; 
    cout << "argv[2]: " << argv[2] << endl; 
    cout << "argv[3]: " << argv[3] << endl;

    // Imprimir argumentos adicionales en caso de existir
    if (argc > 1) {
        cout << "Argumentos adicionales: " << endl;

        for (int i=1; i < argc; ++i) {
            cout << "argv[" << i << "]: " << argv[i] << endl;
        }
    }


    return 0;
}