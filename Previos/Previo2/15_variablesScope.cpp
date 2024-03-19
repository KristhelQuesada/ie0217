#include <iostream>
using namespace std;

/*
Este programa retoma el concepto de las variables y su alcance (scope)
con base en la diapositiva 30 y 31 de la presentacion. Aca se introduce
el concepto de las variables local estatica.

Una variable local estatica exitse solamente dentro de una funcion donde
se declara pero la vida de esta comienza en el instante en que se llama
a la funcion por primera vez, despues de ahi su valor seguira existiendo
como si este tuviese memoria, es decir, su valor no se resetea cada vez
que se llama a la funcion que la declara o inicializa. La diferencia en-
tonces entre una variable local y una estatica es que la variable esta-
tica persiste hasta el final del programa permitinedo asi el ahorro de
memoria.

Luego, en lo que respecta a la palabra reservada 'extern'. es algo que
se utiliza en C++ para decirle al compilador "esta variable esta declara
o inicializada en otro archivo" por tanto dicha variable va a extraerse
de otro archivo fuente. Por ejemplo:

Program1
>> #include <iostream>
>> int count;
>> extern void write_extern();
>>
>> main() {
>>    count = 5;
>>    write_extern();
>> }


Program2
>> #include <iostream>
>>
>> extern int count;
>>
>> void extern_write(void) {
>>    cout << "Count is " << count << endl;
>> }

Estos dos fragmentos lo que esta pasando es que en Program1, en otro
archivo fuente (Program2) hay una funcion que se llama write_extern().
Lo mismo sucede con la variable count en Program2 ya que esta esta de-
finida externamente en Program1. Notese que no deben ser lineales, es
decir, se pueden intercambiar sin llevar un orden en especifico.
*/

// To explain static variables
void test() {
    // var is static variable
    static int var = 0;
    ++var;

    cout << var << endl;
}


// Function Main
int main() {
    // Calling functions
    test(); // Output: 1
    // Como la variable ya se inicializo entonces la segunda vez que
    // se ejecute la funcion, esta se saltara la linea 23 y pasara
    // a aumentar en 1 var, es por ello que se obtiene un 2 como re-
    // sultado.
    test(); // Output: 2

    return 0;
}