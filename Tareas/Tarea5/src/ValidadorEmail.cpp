// Implementacion de la clase ValidadorEmail
#include <iostream>
#include <stdexcept> 
#include <regex>
#include "ValidadorEmail.hpp"
using namespace std;

bool ValidadorEmail::verifyEmail(const string& email) {

    // --------------------------------------------------------
    // DEFINING AND INITIALIZING VARIABLES
    // string que contiene los caracteres validos
    string allowedChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890_.-";
    string onlyLrtsAndDot = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ.";

    // expresiones regulares
    regex namePtrn("^(?![._-])([a-zA-Z0-9._-]{1,15}[._-]?)([^._-])$");
    regex domPtrn("^([^._-])([a-zA-Z]{3,30}[._-]?)([^._-])$");
    regex extPtrn("^([a-zA-Z]{2,6})([^0-9._-])$");

    // mensajes de error comunes
    string iniDotErr = "No debe incluir un punto al inicio (Error)";
    string endDotErr = "No debe incluir un punto al final (Error)";
    string espCharErr = "No debe incluir un caracteres especiales (Error)";
    string consCharsErr = "No deben incluirse caracteres especiales consecutivos (Error)";


    // --------------------------------------------------------
    // CHECK #1: Verifies if @ is present and there's only one
    int atPosition = email.find_first_of("@");
    int atAuxPosition = email.find_last_of("@");

    // Asks if @ not found or if there's more than one
    if (atPosition == string::npos) {
        throw invalid_argument("Asegurese que su email contenga @. (Error)");

    } else if (atPosition != atAuxPosition) {
        throw invalid_argument("Su email no debe contener mas de dos @. (Error)");
    }
    

    // --------------------------------------------------------
    // IF ALL ABOVE WERE RIGHT
    // Extract every part of the mail: nombre, dominio and extesion
    int extBegin = email.find_first_of(".", atPosition);
    string nombre = email.substr(0, atPosition); // del inicio hasta el @
    string dominio = email.substr(atPosition+1); // para no comtemplar el @ de separacion
    string extension = email. substr(extBegin+1); // para no contemplar el . de separacion

    cout << "Nombre: " << nombre << endl;
    cout << "Dominio: " << dominio << endl;
    cout << "Extension: " << extension << endl;


    // --------------------------------------------------------
    // CHECK #2: Verifies if 'nombre' is correct
    if (!regex_match(nombre, namePtrn)) {
        cout << "Se detecta error en el nombre" << endl;
        
        // Se evaluan casos para determinar la razon de no-match
        if (nombre.find_first_not_of(allowedChars) != string::npos) {
            throw invalid_argument("Se detectaron caracteres diferentes de letras, "
                                   "numeros, punto, guiones (Error)");
        }

        if (nombre[0] == '.') throw invalid_argument(iniDotErr);

        if (nombre[nombre.size()] == '.') throw invalid_argument(endDotErr);

        if (nombre.size() > 15) {
            throw invalid_argument("Ha superado la cantidad de 15 caracteres permitidos (Error)");
        }

        for (int i = 0; i < nombre.size(); i++) {
            // Verifica si en esa posicion hay un caracter especial
            if (nombre[i] == '.' || nombre[i] == '-' || nombre[i] == '_') {

                // Verifica si en la posicion siguiente existe otro caracter especial
                if (nombre[i+1] == '.' || nombre[i+1] == '-' || nombre[i+1] == '_') {

                    throw invalid_argument(consCharsErr);
                
                }
            }
        }

    }


    // --------------------------------------------------------
    // CHECK #3: Verifies if 'dominio' is correct



    // --------------------------------------------------------
    // CHECK #4: Verifies if 'extension' is correct



    // -------------------------------------------
    // IF ALL ABOVE CORRECT, END OF FUNCT, RETURN:
    return true;
}