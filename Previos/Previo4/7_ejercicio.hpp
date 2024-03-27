#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

class Student {
    public:
        double marks;

        Student(double m);
};

void calculateAverage(Student s1, Student s2);

#endif //STUDENT_H