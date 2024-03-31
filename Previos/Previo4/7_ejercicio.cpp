#include <iostream>
#include "7_ejercicio.hpp"

// Definimos el constructor
Student::Student(double m) {
    marks = m;
}

// Definimos la funcion sin el operador :: porque
// esta es una funcion externa, es decir, no per-
// tenece a la clase Student
void calculateAverage(Student s1, Student s2) {
    double average = (s1.marks + s2.marks)/2;
    cout << "Average Marks = " << average << endl;
}