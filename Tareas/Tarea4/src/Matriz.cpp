#ifndef MATRIZ_CPP
#define MATRIZ_CPP



// Implementacion de la clase matriz
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "Matriz.hpp"
using namespace std;

template <class T>
Matriz<T>::Matriz(int rows, int columns,
                  bool isResult,
                  bool isRand,
                  const std::vector<T>& valores) {
    this->filas = rows;
    this->columnas = columns;
    this->setDimensiones(rows, columns);

    if (isResult) {
        this->llenarMatrizRslt(valores);
    } else if (!isResult && isRand) {
        this->llenarRandMatriz();
    } else if (!isResult && !isRand) {
        this->llenarMatriz();
    }
} // constructor



template <class T>
Matriz<T>::~Matriz() {
    cout << "No. de matriz destruida: " << endl;
    //Count--;
} // destructor



// Configuracion de las dimensiones de la matriz
template <class T>
void Matriz<T>::setDimensiones(int rows, int columns) {
    cout << "Funcion setDim" << endl;
}



// LLenar la matriz de valores
template <class T>
void Matriz<T>:: llenarMatriz() {
    cout << "Funcion llenar1" << endl;
}



// Llenar la matriz de valores random
template <class T>
void Matriz<T>::llenarRandMatriz() {
    cout << "Funcion llenar2" << endl;
}

// Llenar la matriz en base a un vector con los resultados
template <class T>
void Matriz<T>::llenarMatrizRslt(const std::vector<T>& valores) {
    cout << "Funcion llenar2" << endl;
}



// Sobrecarga del operador de suma
//template <class T>
//Matriz<T>::Matriz operator+(const Matriz& other) const;
//
//
//
//// Sobrecarga del operador de resta
//template <class T>
//Matriz<T>::Matriz operator-(const Matriz& other) const;
//
//
//
//// Sobrecarga del operador de multiplicacion
//template <class T>
//Matriz<T>::Matriz operator*(const Matriz& other) const;
//
//
//
//// Imprimir la matriz
//template <class T>
//Matriz<T>::void displayMatriz() const; 

#endif