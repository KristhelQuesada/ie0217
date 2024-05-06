#ifndef MATRIZ_CPP
#define MATRIZ_CPP



// Implementacion de la clase matriz
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "Matriz.hpp"
#include "ValidadorDeEntrada.hpp"
using namespace std;

template <class T>
Matriz<T>::Matriz(int rows, int columns,
                  bool isResult,
                  bool isRand,
                  const std::vector<T>& valores) {
    this->setDimensiones(rows, columns);

    if (isResult) {
        this->llenarMatrizRslt(valores);
    } else if (!isResult && isRand) {
        this->llenarRandMatriz();
    } else if (!isResult && !isRand) {
        this->llenarMatriz();
    }
} // constructor listo



template <class T>
Matriz<T>::~Matriz() {
    cout << "Matriz destruida" << endl;
} // destructor listo



// Configuracion de las dimensiones de la matriz
template <class T>
void Matriz<T>::setDimensiones(int rows, int columns) {

    // Verifica validez de las dimensiones
    try{

        // EL producto me dira si es negativo o cero
        int producto = rows * columns;
        bool isValid = ValidadorDeEntrada::validarDimensiones(producto);

        if (isValid == false) {
            throw invalid_argument("Las filas y columnas deben ser enteros "
                                   "positivos diferentes de cero.");
        }

        // Si el producto resulta estar bien entonces
        // Inicializa la matriz con filas y columnas
        /*
            Sea n = rows y m = columns
            Entonces se crea una matriz de n filas, donde
            cada fila contiene un vector de m tamanio que
            representa la cantidad de columnas
        */
        this->filas = rows;
        this->columnas = columns;
        this->contenido.resize(rows, vector<T>(columns));

    } catch(const std::invalid_argument& e) {
        cerr << "Excepcion Found: " << e.what() << endl;
    }
}



// LLenar la matriz de valores
template <class T>
void Matriz<T>:: llenarMatriz() {
    cout << "Funcion llenar1" << endl;
}



// Llenar la matriz de valores random
template <class T>
void Matriz<T>::llenarRandMatriz() {
    cout << "Funcion llenar random" << endl;
}

// Llenar la matriz en base a un vector con los resultados
template <class T>
void Matriz<T>::llenarMatrizRslt(const std::vector<T>& valores) {
    cout << "Funcion llenar resultado" << endl;
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