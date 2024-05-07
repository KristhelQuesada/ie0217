// MIT License
// 
// Copyright (c) 2024 Kristhel Quesada
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <vector>

/**
 * @class Matriz
 * @brief Clase que define la estructura de una matriz.
 */
template <class T>
class Matriz {
    private: // Only this class and derivates have access
        int filas;
        int columnas;
        T dataType;
        std::vector<std::vector<T>> contenido;

    public: // Anyone can access
        Matriz(int rows, int columns,
               bool isResult=false,
               bool isRand=false,
               const std::vector<T>& valores=std::vector<T>()); // constructor

        ~Matriz(); // destructor

        // Configuracion de las dimensiones de la matriz
        void setDimensiones(int rows, int columns);

        // LLenar la matriz de valores
        void llenarMatriz();
        void llenarRandMatriz();
        void llenarMatrizRslt(const std::vector<T>& valores);

        // Sobrecarga del operador de suma
        //Matriz operator+(const Matriz& other) const;

        // Sobrecarga del operador de resta
        //Matriz operator-(const Matriz& other) const;

        // Sobrecarga del operador de multiplicacion
        //Matriz operator*(const Matriz& other) const;

        // Imprimir la matriz
        void displayMatriz() const;        
};

#include "Matriz.cpp" // para que no hayn errores de ejecucion

#endif // MATRIZ_HPP