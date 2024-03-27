#include <iostream>
using namespace std;

class Student {
    public:
        double marks;

        Student(double m) {
            marks = m;
        }  
};

void calculateAverage(Student s1, Student s2) {
    // Calculo del promedio
    double average = (s1.marks + s2.marks)/2;

    // Impresion del promedio
    cout << "Average Marks = " << average << endl;
}

int main() {
    // Instanciacion de los objetos
    Student student1(88.0), student2(56.0);

    // Calcular el promedio
    calculateAverage(student1, student2);


    return 0;
}