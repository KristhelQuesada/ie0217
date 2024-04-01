#include <iostream>
using namespace std;

/*
DESCRIPCION
Este programa funciona para introducir el concepto de sobrecarga de operadores
en C++ segun la diapositiva 12 de la presentacion. Dicho esto, dicha sobrecarga
permite definir el comportamiento de los operadores.

Por ejemplo, operadores como +, -, *, etc, entonces consideremos la clase Per-
sona donde tenemos persona1 y persona2, si nos dicen que sumemos ambos objetos
ahi nos preguntamos how? porque no sabemos que implica sumar ambos objetos como
si dijeramos sumar 2+2.

Entonces nosotros como desarrolladores definimos que queremos que el compilador
interprete al darle esa instruccion (persona1+persona2).
*/

class Fraccion{
    // Como quedan definidas estas variables?
    int numerador, denominador;

    public:
        // Definicion del constructor donde se asocia que los
        // atributos numerador y denominador seran inicializa-
        // dos por los valores que se pasen por parametros.
        Fraccion(int n, int d) : numerador(n), denominador(d) {}

        /*
        Luego se define la sintaxis para la modificacion del operador
        que queremos sobrecargar, es decir, aqui queremos darle o es-
        pecificar un resultado especial cuando se utilice el operador
        "+" cuando se sumen fracciones, es decir, objetos de la clase
        fraccion.

        Su sintaxis esta dada por:

        <Nombre de la clase> operador<operador> (const <type> &<referencia>)
        */

        Fraccion operator+ (const Fraccion &f) {
            // En este caso resultado es una variable de tipo Fraccion
            // donde vamos a colocar el resultado de la suma de la frac

            // el f.denominador o f.numerador son los denominadores o
            // numeradores de la otra fraccion que nos pasaron por parametro
            // en la linea 41 mediante la referencia.

            // Se separa por coma ya que primero se define la operacion a
            // realizar para calcular el numerador y que asi se albergue en
            // el objeto o variable tipo Fraccion, y luego mismo para el de-
            // nominador
            Fraccion resultado (
                numerador*f.denominador + f.numerador*denominador,
                denominador*f.denominador
            );

            // Luego se retorna la variable resultado tipo Fraccion
            return resultado;
        }

        void imprimir() {
            cout << numerador << "/" << denominador << endl;
        }
};


int main() {
    // Se instancian dos fracciones, con sus valores de numerador
    // y denomiador ya inicializadas.
    Fraccion f1(1,2);
    Fraccion f2(3,4);

    // Luego lo siguiente es posible gracias a la sobrecarga de operadores
    Fraccion f3 = f1 + f2;

    // Se imprime el resultado
    f3.imprimir();

    return 0;
}