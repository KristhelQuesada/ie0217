#include <iostream>
using namespace std;

/*
    DESCRIPCION

*/

// class template with multiple and default parameters
// Se definen tres tipos de datos distintos T, U y V donde V si este en
// la implementacion no es especificado entonces asume un valor por de-
// fault de tipo char.
template <class T, class U, class V = char>
class ClassTemplate {
    private:
        // Definicion de las variables de tipo T, U y V respectivamente
        T var1;
        U var2;
        V var3;

    public:
        // Constructor que inicializa las variables con los parametros que
        // recibe y aparte son de tipo T, U y V.
        ClassTemplate(T v1, U v2, V v3) : var1(v1), var2(v2), var3(v3) {}

        // Funcion para imprimir los parametros
        void printVar() {
            cout << "var1 = " << var1 << endl;
            cout << "var2 = " << var2 << endl;
            cout << "var3 = " << var3 << endl;
        }
};


int main() {
    // create object with int, double and char types
    // solo pasamos por parametro T y U ya que dentro de los <>
    // unicamente hay 3 tipos de datos, V por ende queda por su
    // tipo de dato default 'char'
    ClassTemplate<int, double> obj1(7, 7.7, 't');
    cout << "obj1 values: " << endl;
    obj1.printVar();

    // create object with int, double and bool types
    // aca si definimos V pero ahora como  booleano remplazando
    // entonces el tipo de dato char por bool
    ClassTemplate<double, char, bool> obj2(8.8, 'a', false);
    cout << "\nobj2 values: " << endl;
    obj2.printVar();


    return 0;
}
