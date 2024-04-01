#include <iostream>

/*
DESCRIPCION
Este programa NO es ejecutable, mas esta para demostrar la estructura
y resumen de diferentes modos de acceso (public, private, protected)
en la herencia. De tal forma que lo que sucede es que:

- Herencia publica mantiene todo igual en la clase derivada.
- Herencia protegida genera que los miebros publicos y protegidos de la
clase base, sean ahora protegidos en la clase derivada.
- Herencia privada genera que los miebros publicos y protegidos de la
clase base, sean ahora privados en la clase derivada.
- Siempre se mantiene que los miembros privados de la clase base seran
inaccesibles para la clase derivada.
- Se pueden aun asi tener miembros publicos, pero deben estar definidos
en la clase derivada, no en la base.
*/

class Base {
    public:
        int x;

    protected:
        int y;

    private:
        int z;
};


class PublicDerived: public Base {
    //x is public
    //y is protected
    //z is not accessible from PublicDerived
};

class ProtectedDerived: protected Base {
    //x is protected
    //y is protected
    //z is not accessible from ProtectedDerived
};

class PrivateDerived: private Base {
    //x is private
    //y is private
    //z is not accessible from PrivateDerived
};