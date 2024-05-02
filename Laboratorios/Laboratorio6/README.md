# Laboratorio 6: Templates y Excepciones


## Resumen
En este laboratorio se realiza un ejemplo que contempla los conceptos de excepciones y templates. En este caso se realiza un template de una clase, donde dicha plantilla utiliza el keyword 'typename' ya que es perfectamente intercambiable con 'class' en este caso, asimismo, la clase incluye un `throw` en su constructor para aplicar un manejo de excepciones tal que envie el argumento `std::invalid_argument()` al `catch()` cuando el vector que recibe el constructor este vacio. Dicha clase contiene entonces las siguientes funciones miembro:

- `Statistics`: Constructor que recibe como parametro la referencia constante del vector de tipo T para evitar que el constructor modifique su contenido original, y almacena el contenido de ese vector en el vector miembro data.
- Funcion `mean()`: Funcion miembro constante ya que no se modificara nada dentro de ella mas que una variable dentro de su scope y retorna dicha variable como un valor double, su objetivo es calcular la media del vector numerico que reciba data.
- Funcion `standardDeviation()`: Funcion miembro constante al igual que `mean()` cuyo proposito era calcular la desviacion estandar del vector numerico data.

<br>

## Instrucciones de ejecucion
Asi, asumiendo que para la evaluacion del presente laboratorio se busca revisar unicamente los archivos modulados, entonces los comandos de ejecucion para ello se presentan a continuacion, sin embargo, considere que __se asume que se encuentra posicionado en el directorio__ _.../ie0217/Laboratorios/Laboratorio6_ :

```
g++ -o tryout.exe main.cpp
```
```
./tryout.exe
```
<br>

## Teoria Investigada
Entre los conceptos que se aclararon con el desarrollo del laboratorio fue que se plantea la pregunta:

> Por que se utiliza el keyword `typename` en vez de `class`?

Entonces, investigando un poco se dice que `typename` y `class` son intercambiables cuando se quiera especificar una plantilla ya sea que se trate de un funcion o de una clase, se podria decir que son keywords equivalentes. Dicho esto, hay casos específicos donde hay una diferencia entre "typename" y "class", a continuacion se mencionan algunos:

1. El primero es en el caso de tipos dependientes. "typename" se utiliza para declarar cuando estás haciendo referencia a un tipo anidado que depende de otro parámetro de plantilla, como el `typedef` en el ejemplo siguiente:

```cpp
template<typename param_t>
class Foo
{
    typedef typename param_t::baz sub_t;
};

```

2. El segundo es cuando se especifica una plantilla de plantillas, este caso `class` *DEBE* usarse como se muestra a continuacion y por ende, no es intercambiable con `typename` (nota: desde C++17, ambos keywords están permitidos en este caso).

```cpp
template < template < typename, typename > class Container, typename Type >
```

3. El tercero se dice que se debe utilizar `class` al instanciar una plantilla, por ejemplo:

```cpp
template class Foo<int>;
```
<br>

_Obtenido de [What is the difference between typename and class template parameters](https://stackoverflow.com/questions/2023977/what-is-the-difference-between-typename-and-class-template-parameters)._
