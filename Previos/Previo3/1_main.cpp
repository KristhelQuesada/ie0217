#include <iostream>
#include "1_sum.hpp"

/*
Descripcion:

Tanto este archivo como el 1_sum.cpp y 1_sum.hpp pretenden ejemplificar
los conceptos de header files (archivos de encabezado) y archivos fuente
con base en la diapositiva 2 y 3 de la presentacion. De tal forma que se
extrae en este archivo la funcion sum() definida en los otro dos archivos,
para ello se utilizo el #include "1_sum.hpp".

Archivos de encabezado
- Van a tener una terminación .hpp (con h de header) y son archivos que
contienen únicamente las declaraciones (no inicialización) de funciones,
variables u objetos que pueden llegar a ser utilizados en un programa.

- Para incluir estos archivos en el programa se utiliza la directiva #include
con <file> para header files estándar del sistema y "file" para header files
definidos por el usuario.

Para ejecutar se utiliza...
>> g++ -o ejecutable.exe ./Previos/Previo3/1_main.cpp ./Previos/Previo3/1_sum.cpp 
>> ./ejecutable.exe
*/


int main() {
    int num1 = 5;
    int num2 = 3;
    int result = sum(num1, num2);

    std::cout << "El resultado de la suma de " << num1 << " y " << num2 << " es " << result << std::endl;

    return 0;
}