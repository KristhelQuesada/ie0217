#include <iostream>
using namespace std;

/*
    DESCRIPCION
    Este programa continua con la introduccion del concepto de los
    templates, con base en las diapositivas 5, 6 y 7 de la presen-
    tacion. En este caso, se estudia el segundo tipo de templates,
    los cuales son templates de clases, donde al igual que las fun-
    ciones, permite generalizar los tipos de datos, en este caso,
    de miembros o funciones miembro de la clase.

    En este ejemplo, se crea un template de una clase numero con un
    parametro T, luego este parametro general describe al miembro
    'num' y a la funcion miembro getNum, al igual que el parametro
    del constructor Number.

    La clase lo que busca es crear un numero donde el miembro 'num'
    almacena el valor, el constructor permite inicializar dicho miem-
    bro y la funcion getNum permite imprimir el valor de 'num'.

    Asi, en el main podemos observar como para instanciar la clase,
    este proceso se realiza de la misma forma que cuando lo hacemos
    con una clase normal, con la unica diferencia que ahora se espe-
    cifica a la par del nombre de la clase con <> el tipo de dato,
    por ejemplo, de manera general:

    ClassName<type of data> obj_name;

*/

// Definicion de un class template
template <class T>
class Number {
    private:
        // Variable of type T
        T num;

    public:
        Number(T n) : num(n) {} // constructor
        T getNum() {
            return num;
        }
};


int main() {
    // create object with int type
    // En este caso funciona de manera similar a las funciones
    // tal que primero se especifica el nombre de la clase y
    // luego el tipo de dato que es equivalente al parametro T
    // que se describe en la definicion.
    Number<int> numberInt(7);

    // create object with double type
    Number<double> numberDouble(7.7);

    // Print results
    cout << "int Number = " << numberInt.getNum() <<  endl;
    cout << "double Number = " << numberDouble.getNum() <<  endl;


    return 0;
}
