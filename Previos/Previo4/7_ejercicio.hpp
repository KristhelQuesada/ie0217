// Header file

#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

// Declaramos el boierplate de la clase Student
class Student {
    public:
        double marks;

        Student(double m);
};

// Declaramos la funcion mediante su prototipo
void calculateAverage(Student s1, Student s2);

#endif //STUDENT_H