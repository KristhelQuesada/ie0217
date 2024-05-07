#ifndef MATRIZ_CPP
#define MATRIZ_CPP



// Implementacion de la clase matriz
#include <iostream>
#include <algorithm> // Para el std::transform
#include <vector>
#include <string>
#include <stdexcept> // Para std::invalid_argument
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
    // El producto dicta si es negativo o cero
    int producto = rows * columns;

    // Verifica validez de las dimensiones
    try{

        // Valida si el producto es positivo mayor de cero
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
} // setDimensiones listo



// LLenar la matriz de valores
template <class T>
void Matriz<T>::llenarMatriz() {

    // Iteradores con el fin de reducir el uso de auto
    //class std::vector<std::vector<T>>::iterator itrFila;
    //class std::vector<std::vector<T>>::iterator itrCol;
    int contadorFila = 0;
    int contadorCol = 0;

    // Para cada fila
    for (auto itrFila = contenido.begin();  itrFila != contenido.end(); itrFila++) {

        // Cree otro iterador que recorre la fila de inicio hasta antes del final
        for (auto itrCol = itrFila->begin(); itrCol != itrFila->end(); itrCol++) {

            // Se declara el tipo de dato que debe recibir
            T value;

            // Solicita al usuario que digite el valor que desea agregar
            cout << "Agregue el valor de [" << contadorFila << "," << contadorCol << "]: ";
            cin >> value;

            // Se *itrCol el valor que coontiene el iterador, entonces actualizamos
            *itrCol = value;
            ++contadorCol;
        }
        contadorCol = 0;
        ++contadorFila;
    }
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
// Imprimir la matriz
template <class T>
void Matriz<T>::displayMatriz() const {
    for (const auto& fila : contenido) {

        for (const auto& value : fila) {
            cout << value << " ";
        }
        cout << endl; // Salto de línea después de imprimir una fila completa
    }
} 

#endif