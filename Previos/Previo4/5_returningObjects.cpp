#include <iostream>
using namespace std;

/*
DESCRIPCION

Este programa continua ejemplificando la utilizacion de los objetos en
funciones, en este caso, el retorno de objetos dentro de una funcion con
base en la diapositiva 9. Para ello se crea una funcion tipo <Nombre de
de la clase (que viene siendo el tipo de retorno de la funcion)> asociada
al objeto al cual queremos retornar, se instancia dentro de ella el objeto
y se pasa como parametro de retorno.
*/

class Student {
    public:
        double marks1, marks2;
};

// Funcion tipo Student
Student createStudent() {
    // Instanciacion general del objeto
    Student student;

    // Inicializacion de sus atributos
    student.marks1 = 96.5;
    student.marks2 = 75.0;

    // Impresion de sus atributos
    cout << "Marks 1 = " << student.marks1 << endl;
    cout << "Marks 2 = " << student.marks2 << endl;

    // Retorna el objeto estudiante con sus atributos actualizados
    return student;
}

int main() {
    // Instanciar objeto
    Student student1;

    // Llamar a la funcion createStudent
    // para cargar atributos al objeto
    student1 = createStudent();

    return 0;
}