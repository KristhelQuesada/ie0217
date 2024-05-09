#ifndef OP_VERIFIER_CPP
#define OP_VERIFIER_CPP

#include <iostream>
#include "OperacionesBasicas.hpp"
using namespace std;

template<class T>
bool OperacionesBasicas<T>::validarSumaResta(Matriz<T>& a, Matriz<T>& b) {
    if (a.getFilas() == b.getFilas() && a.getColumnas() == b.getColumnas()) {
        return true;
    } else {
        return false;
    }
}


template<class T>
bool OperacionesBasicas<T>::validarMultiplicacion(Matriz<T>&a, Matriz<T>&b) {
    if (a.getColumnas() == b.getFilas()) {
        return true;
    } else {
        return false;
    }
}


template<class T>
void OperacionesBasicas<T>::suma(Matriz<T>&a, Matriz<T>&b) {
    bool isValid = validarSumaResta(a, b);

    if (isValid) {
        return (a + b);
    } else {
        cout << "La operacion no es valida, ambas matrices deben tener igual dimension." << endl;
    }
}


template<class T>
void OperacionesBasicas<T>::resta(Matriz<T>&a, Matriz<T>&b) {
    bool isValid = validarSumaResta(a, b);

    if (isValid) {
        return (a - b);
    } else {
        cout << "La operacion no es valida, ambas matrices deben tener igual dimension." << endl;
    }
}


template<class T>
void OperacionesBasicas<T>::multiplicacion(Matriz<T>&a, Matriz<T>&b) {
    bool isValid = validarSumaResta(a, b);

    if (isValid) {
        return (a * b);
    } else {
        cout << "La operacion no es valida, la primera matriz ";
        cout << "debe tener la misma cantidad de columnas que ";
        cout << "la cantidad de filas de la segunda matriz " << endl;
    }
}

#endif // OP_VERIFIER_CPP

