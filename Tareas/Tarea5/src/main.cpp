#include <iostream>
#include<regex>
using namespace std;

// Funcion generica para validar la expresion
bool Email(string email) {
    const regex pattern(R"(^(?![\.\-\_])([a-zA-Z0-9\.\-\_]{1,15}[\.\-\_]?)([^\.\-\_])@([^\.\-\_])([a-zA-Z]{3,30}[\.]?)([^\.\-\_])\.([a-zA-Z]{2,6})([^0-9\.\-\_])$)");

    return regex_match(email, pattern);
}

int main() {
    // Pruebas
    string emailValido = "kris.quesada@gm.ail.com";
    string emailInvalido = "kris.quesadagmail.com";

    // Pruebas nombre
    string nombrepuntoInicio = ".kris.quesada@gmail.com";
    string nombrepuntoFinal= "kris.quesada_@gmail.com";
    string nombre16char = "kristhel.quesada@gmail.com";
    string nombreEspCharCons = "kris..quesada@gmail.com";

    // Pruebas dominio
    string dominiopuntoInicio = "kris.quesada@.gmail.com";
    string dominiopuntoFinal = "kris.quesada@gmail..com";
    string dominio2char = "kris.quesada@gg.com";
    string dominio31char = "kris.quesada@ggggggggggkkkkkkkkkkmmmmmmmmmmw.com";
    string dominioNum = "kris.quesada@g2mail.com";
    string dominioEspCharCons = "kris.quesada@g..il.com";

    // Pruebas extension
    string extensionNum = "kris.quesada@gmail.com7";
    string extensionEspChar = "kris.quesada@gmail.com-";
    string extension1char = "kris.quesada@gmail.c";
    string extension7char = "kris.quesada@gmail.hotmail";

    // Imprimimos los resultados obtenidos
    cout << boolalpha
         << Email(emailValido) << '\n'
         << Email(emailInvalido) << '\n'
         << Email(nombrepuntoFinal) << '\n'
         << Email(nombrepuntoInicio) << '\n'
         << Email(nombre16char) << '\n' // true
         << Email(nombreEspCharCons) << '\n' // true
         << Email(dominiopuntoInicio) << '\n'
         << Email(dominiopuntoFinal) << '\n'
         << Email(dominio2char) << '\n'
         << Email(dominio31char) << '\n' // true
         << Email(dominioNum) << '\n'
         << Email(dominioEspCharCons) << '\n'
         << Email(extensionNum) << '\n'
         << Email(extensionEspChar) << '\n'
         << Email(extension1char) << '\n'
         << Email(extension7char) << '\n'; // tue

    return 0;
}