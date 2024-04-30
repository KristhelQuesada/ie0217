#include <iostream>
using namespace std;

/*
    DESCRIPCION
    Este programa tiene la misma funcionalidad de '2_ClassTemplate.cpp'
    con la unica diferencia que en este caso definimos los metodos fuera
    de la clase.

*/

// Definicion de un class template
template <class T>
class Number {
    private:
        // Variable of type T
        T num;

    public:
        Number(T n); // constructor
        T getNum();
};

// Member functions of class Numbers
// constructor
template <class T>
Number<T>::Number(T n) : num(n) {}

// getNum function
template <class T>
T Number<T>::getNum() {
    return num;
}


int main() {
    // create object with int type
    Number<int> numberInt(7);

    // create object with double type
    Number<double> numberDouble(7.7);

    // Print results
    cout << "int Number = " << numberInt.getNum() <<  endl;
    cout << "double Number = " << numberDouble.getNum() <<  endl;


    return 0;
}
