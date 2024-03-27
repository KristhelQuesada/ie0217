#include <iostream>
using namespace std;


class ClassB;

class ClassA {
    private:
        int numA;

        // friend function declaration
        friend class ClassB;

    public:
        // constructor to initialize numA to 12
        ClassA() : numA(12) {}
};

class ClassB {
    private:
        int numB;

    public:
        // constructor to initialize numB to 1
        ClassB() : numB(1) {}

        // member function to add NumA from ClassA
        // and numB from ClassB
        int add() {
            ClassA objectA;
            return objectA.numA + numB;
        }
};


// Funcion Main
int main() {
    ClassB objectB;

    cout << "Sum: " << objectB.add() << endl;

    return 0;
}