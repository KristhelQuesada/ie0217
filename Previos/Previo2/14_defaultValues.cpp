#include <iostream>
using namespace std;

/*
Este programa introduce el concepto de funciones con valores
por defecto en sus parametros con base en la diapositiva 29
de la presentacion.

En dicha diapositiva se presentan 4 casos, entre ellos:

==> Case 1: Cuando no pasamos ningun argumento entonces debemos
especificar el valor por defecto de cada uno de estos argumentos.
==> Case 2: Se especifica un unico parametro entonces el primer
argumento definido tendra el valor que se paso por parametro y
el segundo tendra el valor default.
==> Case 3: Ambos argumentos fueron definidos entonces los valores
default ya no surgen efecto pues estos fueron sustituidos por los
los argumentos pasados
==> Case 4: Si se quiere pasar solo el segundo argumento no se puede,
puesto que no se pueden ingnorar previos valores por defecto entonces
para el ejemplo visto no se puede no pasar un valor para i y esperar
ser capaz de especificar solo el segundo.

Algunas situaciones invalidas
>> void add(int a, int b=3, int c, int d); 
>> void add(int a, int b=3, int c, int d=4); 

este es invalido porque todos los valores que vayan a tener un valor
por defecto deben ir al final es decir:
... void add(int a, int c, int b=3, int d=4); // This is valid


Otra situacion es si realizamos lo siguiente
>> int main() {
>>    //function call
>>    display();
>> }

>> void sisplay(char c='*', int count=5) {
>>    // code
>> }

esto es invalido porque nunca se especifico el prototipo de la
funcion display
*/

// Case 1
// Cuando definimos el valor en los parametros decimos que ahi
// se define el valor default entonces int y float son por
// defecto 10 y 8.8 respectivamente.
void temp(int = 10, float = 8.8);


// Function Main
int main() {
    // Calling functions

    // En el caso que en el main no le pase nada por
    // parametro a la funcion temp, entonces por deafult
    // i quedara asignado como 10 e f como 8.8
    temp(); // case 1


    // En el caso que en el main se le pasa un solo para-
    // metro a la funcion temp, entonces por el primer ar-
    // gumento tendra el valor que definido en main (i=6)
    // y el segundo argumento sera su valor default (f=8.8)
    temp(6); // case 2

    // En el caso que en el main se le pasan los dos argu-
    // mentos a la funcion temp, entonces los valores de-
    // fault seran sustituidos en orden tal que i=2 y f=7.5
    temp(2, 7.5); // case 2



    return 0;
}


// Function case 1
void temp(int i, float f) {
    // code
}