# Previo 5: Algoritmos de Ordenamiento

## Indice
1. [Descripción](#descripcion)
2. [Ejecución de los Programas](#ejecucion-de-los-programas)
3. [Conceptos Importantes](#conceptos-importantes)
   - [Templates](#templates)
   - [Manejo de Excepciones](#manejo-de-excepciones)


## Descripcion
El objetivo de este previo consiste en el estudio de los templates, su implementacion y uso tanto para describir funciones o clases con uno o multiples tipos de datos; por otra parte, se introduce al tema de manejo de excepciones donde se explican la funcionalidad de los bloques _try, throw y catch_.  En resumen, los topicos a desarrollar son los siguientes:
- Templates
- Manejo de Excepciones

<br>

## Ejecucion de los Programas
Para la ejecucion de los programas, posicionese en el directorio _.../ie0217/Previos/Previo5_, y utilice los comandos:
```
>> g++ -o ejecutable.exe ./<nombre del archivo>.cpp

>> ./ejecutable.exe
```

Con el fin de brindar mayor facilidad a quien desea correr los archivos, a continuacion se incluyen todos los comandos de compilacion (el de ejecucion no se incluye ya que siempre sera el ultimo de arriba en la linea anterior):
```
g++ -o ejecutable.exe ./1_FunctionTemplate.cpp
```

```
g++ -o ejecutable.exe ./2_ClassTemplate.cpp
```

```
g++ -o ejecutable.exe ./3_ClassTemp_ExtImp.cpp
```

```
g++ -o ejecutable.exe ./4_FuncTemp_MultiParam.cpp
```

```
g++ -o ejecutable.exe ./5_ClassTemp_MultiParam.cpp
```

```
g++ -o ejecutable.exe ./6_Excepciones.cpp
```

```
g++ -o ejecutable.exe ./7_MultiExceptions.cpp
```

```
g++ -o ejecutable.exe ./8_Excepciones.cpp
```

<br>

## Conceptos Importantes
Entre los conceptos importantes abarcados en este previo se destacan los siguientes:

### Templates
Un template, es como su nombre lo indica, una plantilla cuyo proposito en C++ consiste en pasar el tipo de datos como un parámetro para que no necesitemos escribir el mismo código para diferentes tipos de datos. Por ejemplo, una empresa de software puede necesitar usar la función sort() para diferentes tipos de datos. En lugar de escribir y mantener múltiples códigos, podemos escribir una sola función sort() y pasar el tipo de datos como un parámetro.

C++ añade dos keywords para darle soporte a los templates: 'template' y 'typename', donde esta ultima siempre puede ser reemplazada por la palabra clave 'class'. La diferencia entre ambas es que:

1. _typename_: se utiliza para especificar que se trata de un template de una funcion.
2. _class_: se utiliza para especificar que se trata de un template de una clase.

Para ello se incluyen ejemplos adicionales tanto de funciones y clases, donde hay tanto uno como multiples tipos de datos como parametro:

<details>
<summary> Function Templates </summary>

```cpp

// C++ Program to demonstrate
// Use of template
#include <iostream>
using namespace std;

// One function works for all data types. This would work
// even for user defined types if operator '>' is overloaded
template <typename T> T myMax(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    // Call myMax for int
    cout << myMax<int>(3, 7) << endl;
    // call myMax for double
    cout << myMax<double>(3.0, 7.0) << endl;
    // call myMax for char
    cout << myMax<char>('g', 'e') << endl;

    return 0;
}

```

</details>

<details>
<summary> Class Templates </summary>

```cpp

// C++ Program to implement
// Use of template
#include <iostream>
using namespace std;

template <class T, class U> class A {
    T x;
    U y;

public:
    A() { cout << "Constructor Called" << endl; }
};

int main()
{
    A<char, char> a;
    A<int, double> b;
    return 0;
}

```

</details> <br>

_Obtenido de [Templates in C++ with Examples
](https://www.geeksforgeeks.org/templates-cpp/)._

<br>

### Manejo de Excepciones
En C++, las excepciones son anomalías o condiciones anormales que un programa encuentra durante su ejecución. El proceso de manejar estas excepciones se llama manejo de excepciones y funciona de tal manera que el control desde una parte del programa donde ocurrió la excepción puede ser transferido a otra parte del código.

Por tanto, una excepción es un problema inesperado que surge durante la ejecución de un programa y causa la terminación repentina del programa con algunos errores o problemas. En resumen, el manejo de excepciones en C++ se basa en tres palabras clave: try, catch y throw.

- _throw_: Un programa lanza una excepción cuando surge un problema. Esto se hace usando la palabra clave throw.
- _catch_: Un programa captura una excepción con un manejador de excepciones en el lugar de un programa donde se desea manejar el problema. La palabra clave catch indica la captura de una excepción.
- _try_: Un bloque try identifica un bloque de código para el cual se activarán excepciones particulares. Está seguido por uno o más bloques catch.

Asi, un bloque try/catch se coloca alrededor del código que podría generar una excepción, asimismo, se puede enumerar múltiples declaraciones catch para capturar diferentes tipos de excepciones en caso de que su bloque try genere más de una excepción en diferentes situaciones.

> Se pueden usar múltiples declaraciones catch para capturar diferentes tipos de excepciones lanzadas por un bloque try.

#### Sintaxis
La sintaxis del uso de los bloques _try, throw y catch_ puede verse a continuacion:

```cpp
try {         
     // Code that might throw an exception
     throw SomeExceptionType("Error message");
 } 
catch( ExceptionName e1 )  {   
     // catch block catches the exception that is thrown from try block
 } 
```

donde `SomeExceptionType` puede ser una de las multiples excepciones que contiene la biblioteca `stdexcept`, a continuacion se brinda una descripcion de algunos:

| Excepción        | Descripción                                                                                          |
|:------------------:|:------------------------------------------------------------------------------------------------------:|
| std::exception   | Una excepción y clase principal de todas las excepciones estándar de C++.                              |
| std::bad_alloc   | Esta puede ser lanzada por `new`.                                                                     |
| std::bad_cast    | Esta puede ser lanzada por `dynamic_cast`.                                                             |
| std::bad_exception | Este es un dispositivo útil para manejar excepciones inesperadas en un programa C++.                    |
| std::bad_typeid  | Esta puede ser lanzada por `typeid`.                                                                   |
| std::logic_error | Una excepción que teóricamente puede ser detectada leyendo el código.                                   |
| std::domain_error| Esta es una excepción lanzada cuando se utiliza un dominio matemáticamente inválido.                     |
| std::invalid_argument | Se lanza debido a argumentos inválidos.                                                               |
| std::length_error | Se lanza cuando se crea una std::string demasiado grande.                                              |
| std::out_of_range | Esta puede ser lanzada por el método 'at', por ejemplo, un std::vector y std::bitset<>::operator[]().  |
| std::runtime_error | Una excepción que teóricamente no puede ser detectada leyendo el código.                                 |
| std::overflow_error | Se lanza si ocurre un desbordamiento matemático.                                                       |
| std::range_error | Ocurre cuando intentas almacenar un valor que está fuera de rango.                                      |
| std::underflow_error | Se lanza si ocurre un desbordamiento matemático.                                                        |

#### Catch block
Hay varias maneras de especificar los argumentos del catch, se recompila las siguientes consideraciones:

```cpp

catch(const std::exception& e) { // Will catch std exceptions only.
    cerr << "\n" << e.what()<< endl;
}

catch(...) // Will catch everything there after.

catch(<data type> e) // Will catch the data type you specify

```

En este ejemplo cabe destacar las siguientes directivas:

- `cerr`: Es un objeto de la clase _ostream_, el cual está asociado con el standard error output stream.
- `.what()`: Retorna un string explicatorio del error y es una funcion miembro virtual publica propia del manejo de errores.

_Obtenido de [Standard library header <stdexcept>](https://en.cppreference.com/w/cpp/header/stdexcept), [C++ Exception Handling](https://www.tutorialspoint.com/cplusplus/cpp_exceptions_handling.htm), [std::exception](https://en.cppreference.com/w/cpp/error/exception), [Exception Handling in C++](https://www.geeksforgeeks.org/exception-handling-c/) y [C++ catch(std::exception & e ) vs. catch(...)](https://stackoverflow.com/questions/49877965/c-catchstdexception-e-vs-catch)_.