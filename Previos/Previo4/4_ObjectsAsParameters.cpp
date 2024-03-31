#include <iostream>
using namespace std;

/*
DESCRIPCION

Este programa esta para estudiar si se pueden pasar objetos como paramteros
de funciones con base en la diapositiva 8 de la presentacion.

Su sintaxis esta dada por
>>> <type> <name>(<Name of the clas> <parameter name>, ...) {
        // code
    }


*/

class Student {
    // Acceso publico
    public:
        // Atributo
        double marks;

        // Constructor
        // recibe un parametro m y por ende inicializa el atributo
        // marks en m.
        Student(double m) {
            marks = m;
        }  
};

// Funcion que calcula el promedio que recibe dos parametros
// de tipo Student, es decir, de tipo clase
void calculateAverage(Student s1, Student s2) {
    // Calculo del promedio
    // se puede acceder al atributo marks afuera de la clase porque
    // estaba dentro del especificador de acceso publico
    double average = (s1.marks + s2.marks)/2;

    // Impresion del promedio
    cout << "Average Marks = " << average << endl;
}


// Funcion main
int main() {
    // Instanciacion de los objetos
    Student student1(88.0), student2(56.0);

    // Calcular el promedio
    calculateAverage(student1, student2);


    return 0;
}