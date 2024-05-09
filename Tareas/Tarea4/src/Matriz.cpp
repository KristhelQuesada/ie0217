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
#include "OperacionesBasicas.hpp"
using namespace std;

template <class T>
Matriz<T>::Matriz(int rows, int columns,
                  bool isResult,
                  bool isRand,
                  const vector<T>& valores) {
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

    // Contadores para desplegar posicion del elemento a ingresar
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
} // fin llenar matriz para valores ingresados



// Llenar la matriz de valores random
template <class T>
void Matriz<T>::llenarRandMatriz() {
    
    // Semilla para el rand()
	srand((unsigned) time(NULL));

    // Para cada fila
    for (auto itrFila = contenido.begin();  itrFila != contenido.end(); itrFila++) {

        // Cree otro iterador que recorre la fila de inicio hasta antes del final
        for (auto itrCol = itrFila->begin(); itrCol != itrFila->end(); itrCol++) {

            // Se declara el tipo de dato que debe recibir
            T value;

            // Se inicializa el valor random a agregar
            value = rand()%100;

            // Se *itrCol el valor que coontiene el iterador, entonces actualizamos
            *itrCol = value;
        }
    }
}



// Llenar la matriz en base a un vector con los resultados
template <class T>
void Matriz<T>::llenarMatrizRslt(const std::vector<T>& valores) {
    int position = 0;

    // Para cada fila
    for (auto itrFila = contenido.begin();  itrFila != contenido.end(); itrFila++) {

        // Cree otro iterador que recorre la fila de inicio hasta antes del final
        for (auto itrCol = itrFila->begin(); itrCol != itrFila->end(); itrCol++) {

            // Se *itrCol el valor que coontiene el iterador, entonces actualizamos
            *itrCol = valores[position];
            ++position;
        }
    }
}



// Sobrecarga del operador de suma
template <class T>
void Matriz<T>::operator+(Matriz<T>&b) const {

    // Aca se guardan los resultados de la suma de cada posicion
    vector<T> temp;

    // Contenido de b
    vector<vector<T>> contentB = b.getContent();

    // Traverse the Matrix x
    for (int i = 0; i < this->filas; i++) {
        for (int j = 0; j < this->columnas; j++) {
 
            // Add the corresponding
            // blocks of Matrices
            T sum = this->contenido[i][j] + contentB[i][j];
            temp.push_back(sum);
        }
    }

    Matriz<T> resultado(this->filas, this->columnas, true, false, temp);

    return resultado.displayMatriz();
}



//// Sobrecarga del operador de resta
//template <class T>
//Matriz<T>::Matriz operator-(const Matriz& other) const;
//
//
//
//// Sobrecarga del operador de multiplicacion
//template <class T>
//Matriz<T>::Matriz operator*(const Matriz& other) const {
//    vector<T> temp;
//    //Matriz<T> resultado
// 
//    // Traverse the Matrix x
//    for (int i = 0; i < ; i++) {
//        for (int j = 0; j < N; j++) {
// 
//            // Add the corresponding
//            // blocks of Matrices
//            sum = this->contenido[i][j] + b->contenio[i][j];
//            temp.push_back(sum)
//        }
//    }
//
//    Matriz<T> resultado(this->fila, b->columna, true, false, v1)
//
//    return resultado.displayMatriz();
//}
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

// Extraccion de atributos
template <class T>
int Matriz<T>::getFilas() {
    return this->filas;
}

template <class T>
int Matriz<T>::getColumnas() {
    return this->columnas;
}

template <class T>
vector<vector<T>> Matriz<T>::getContent() {
    return this->contenido;
}


#endif
