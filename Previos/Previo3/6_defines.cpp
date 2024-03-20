#include <iostream>
using namespace std;

/*
Descripcion
Este programa introduce el concepto del uso de defines con base en
la diapositiva 9 de la presentacion. Su sintaxis esta dada por:

#define <nombre en mayuscula por convencion> <valor>

se utiliza como "una variable", pero no lo es completamente porque
la definicion es un valor constante y a su vez porque esta no existe
en el tiempo de ejecucion. Antes de compilar existe un paso de pre-
procesamiento o pre-compilacion que entonces va a agarrar todos los
defines y en todo lugar del programa donde se utilice dicho define,
este se va a sustituir por su valor asociado en bruto.
*/

#define BOOK_ID_MAX 10
#define MI_PRIMER_DEFINE 925

enum {
    CASA_BADILLA,
    CASA_ALVARADO,
    CASA_SOLANO,
    CASA_MAX
} casas_t;

enum seasons {spring = 34, summer = 4, autumn = 9, winter = 32};
enum enumcito {carro, casa, arbol, patio};

int main() {
    // First Example
    // El valor de BOOK_ID_MAX es preprocesado
    cout << "El valor de Book ID Max es: " << BOOK_ID_MAX << endl;

    // Second Example
    cout << "La cantidad de casas en el condominio es: " << CASA_MAX << endl;

    // Teacher's example
    // la linea siguiente es exactamente lo mismo que decir:
    // cout << "Define: " << 925 << endl;
    cout << "Define: " << MI_PRIMER_DEFINE << endl;

    // Para observar que se puede definir el enum o bien, especificar
    // su atributo en bruto
    cout << "arbol: " << arbol << endl;

    return 0;
}