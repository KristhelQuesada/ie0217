#include <iostream>
using namespace std;

/*
Descripcion
Este programa introduce el concepto de enums o enumeraciones con base en
la diapositiva 8 de la presentacion. Los enums es otra manera de mantener
el codigo mantenible, legible y escalable, al igual que los structs por
ejemplo. Estos se definen en llaves y se separan por coma, donde si no se
les inicializa un valor entonces el primer enum de la lista adquiere un
valor de cero, el segundo adquiere un valor de 1, el tercero de 2 y asi
sucesivamente. Si el primer valor se inicializa en 40, el segundo sera
41, el tercero 42, etc.

Basicamente, un enum permite albergar un identificador distinto para va-
riables que estan relacionadas o quieren ser clasificadas bajo una carac-
teristica en comun.

Nos interesa hacer esto porque lo podemos pensar como un tipo de dato, por
ejemplo, en el ejemplo de enum seasons, cuando en el main declaramos la
variable s entonces estamos diciendo que s es una variable de tipo seasons
que tiene asociada 4 valores distintos. Esto nos ayuda al orden de nuestro
codigo.

Las posibilidades o los valores que puede tomar una enumeracion son las que
se definen antes del igual, si se iguala s = 15 (considerando el ejemplo de
seasons) el programa presentara un error puesto que sus unicos valores posi-
bles son: spring, summer, autumn, winter.
*/

// Definition of the enums
enum seasons {spring = 34, summer = 4, autumn = 9, winter = 32};
enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
enum suit {
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;

int main() {
    // First Example
    seasons s;
    s = summer;
    cout << "Summer = " << s << endl;

    // Second Example
    // Today entonces es 3 porque como no se definieron valores en los enums
    // su numeracion parte de 0 y como Wednesday es la cuarta posicion enton-
    // ces equivale a 3. Se imprime 4 porque se le suma 1.
    week today;
    today = Wednesday;
    cout << "Day " << today+1 << endl;

    // Third Example
    card = club;
    cout << "Size of enum variable " << sizeof(card) << " bytes." << endl;

    return 0;
}