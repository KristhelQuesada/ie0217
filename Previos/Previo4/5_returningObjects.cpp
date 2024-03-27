#include <iostream>
using namespace std;

class Student {
    public:
        double marks1, marks2;
};

// Funcion tipo Student
Student createStudent() {
    Student student;

    student.marks1 = 96.5;
    student.marks2 = 75.0;

    cout << "Marks 1 = " << student.marks1 << endl;
    cout << "Marks 2 = " << student.marks2 << endl;

    return student;
}

int main() {
    // Instanciar objeto
    Student student1;

    // Llamar a la funcion createStudent
    // para agregar atributos
    student1 = createStudent();

    return 0;
}