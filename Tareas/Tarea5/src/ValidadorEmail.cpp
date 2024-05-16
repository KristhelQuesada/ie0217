// Implementacion de la clase ValidadorEmail
#include <iostream>
#include <stdexcept> 
#include <regex>
#include "ValidadorEmail.hpp"
using namespace std;

bool ValidadorEmail::verifyEmail(const string& email) {
    // Definicion de variables


    // CHECK #1: Verifies if @ is present and there's only one
    int atPosition = email.find_first_of("@");
    int atAuxPosition = email.find_last_of("@");

    // Asks if @ not found or if there's more than one
    if (atPosition == string::npos) {
        throw invalid_argument("Asegurese que su email contenga @. (Error)");

    } else if (atPosition != atAuxPosition) {
        throw invalid_argument("Su email no debe contener mas de dos @. (Error)");
    }
    
    // IF ALL ABOVE WERE RIGHT
    // Extract every part of the mail: nombre, dominio and extesion
    cout << "This should not be executed" << endl;
    
    return true;
}