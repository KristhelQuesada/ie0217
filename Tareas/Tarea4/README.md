# Tarea 3: Manejo de Memoria, Estructura de Datos y Algoritmos
#### Estudiante: Kristhel Quesada, C06153

En el siguiente repositorio se encuentra un programa que pretende implementar la creacion de una app de contactos donde los estos seran guardados tanto en un espacio de "memoria" como en un "cloud", mediante el uso de memoria dinamica y estructuras de datos como lo son las HashTable y las listas enlazadas. En este caso se utilizan dos estructuras:
- Nodo (para la creacion de una lista enlazada que contiene punteros contactos)
- Contacto (para almacenas la informacion de contacto)

Se aplica la solucion de colisiones mediante _direct chaining_, razon por la cual se hace una estructura nodo que contiene punteros a estructuras Contacto, para que de esta forma, cada nodo represente cada bucket del Hash Table, sin la necesidad de modificar los punteros de la lista enlazada del Cloud.
<br>



## Investigacion de funciones utilizadas el desarrollo del programa
Funciones o bibliografia de donde se obtuvo metodos o directrices nuevas:

Utilizar templates en header files:
https://www.youtube.com/watch?v=jYip4L4gR2g
https://github.com/douglascraigschmidt/CPlusPlus/blob/master/STL/S-02/2.3/2.3a/pair.cpp

vector de vectores
https://stackoverflow.com/questions/12375591/vector-of-vectors-to-create-matrix

Declaracion de valor por default para un vector como argumento
https://stackoverflow.com/questions/3147274/c-default-argument-for-vectorint

<br>




## Flujo de desarrollo
Aca se piensa especificar el flujo
<br>



## Ejecucion de los Programas
Para la ejecucion de los programas, posicionese en el directorio _.../ie0217/Tareas/Tarea3/src/_, y utilice los comandos:
```
g++ -o tryout.exe main.cpp Funciones.cpp LinkedListFuncs.cpp HashTable.cpp
```
```
./tryout.exe
```

Por otra parte, si es de su preferencia se incluye un _Makefile_, por tanto, gusta de hacer la compilacion y ejecucion en un solo comando, posicionese en el directorio mencionado anteriormente y ejecute:

```
make
```

Para la documentacion de Doxygen, esta no fue implementada.
<br>




## Parte Teorica
