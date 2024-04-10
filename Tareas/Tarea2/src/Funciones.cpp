#include <iostream>
#include "Funciones.hpp"

bool checkPrimo(int numero) {
    if (numero == 0 || numero == 1 || numero == 4) return false;
    
    for (int x = 2; x < numero / 2; x++) {
        if (numero % x == 0) return false;
    }

    // SI no se pudo dividir arriba entonces si es primo
    return true;
}