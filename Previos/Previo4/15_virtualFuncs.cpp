#include <iostream>
using namespace std;

class Base {
    public:
        virtual void print() {
            cout << "Base function" << endl;
        }
};

class Derived : public Base {
    public:
        void print() {
            cout << "Derived function" << endl;
        }
};



int main() {
    Derived derived1;

    // pointer of Base Type that points to derived1
    Base* base1 = &derived1;

    // calls member function of Derived class
    base1->print();


    return 0;
}