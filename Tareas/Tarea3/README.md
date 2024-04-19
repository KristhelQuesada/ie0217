# Tarea 3: Manejo de Memoria, Estructura de Datos y Algoritmos
#### Estudiante: Kristhel Quesada, C06153

En el siguiente repositorio se encuentra un programa que 


## Ejecucion de los Programas
Para la ejecucion de los programas, posicionese en el directorio _.../ie0217/Tareas/Tarea2/src/_, y utilice los comandos:
```
>> g++ -o tryout.exe Planeta.cpp Continentes.cpp Funciones.cpp main.cpp Paises.cpp PaisesEnDesarrollo.cpp PaisesPrimerMundo.cpp

>> ./tryout.exe
```

Asimismo, para la documentacion de Doxygen, puede acceder al output de este mediante el uso de Netlify, para ello acceda al siguiente enlace:
```
https://ie0217kriss.netlify.app/
```

## Flujo del programa



## Parte Teorica

### 1. ¿Qué es un algoritmo y cuáles son sus características principales?
Un algoritmo se define como un conjunto de instrucciones paso a paso o bien definidas que se siguen en un orden especifco con el fin de resolver un problema, por tanto a partir del seguimiento especifico de dicho conjunto de instrucciones es posible producir un resultado tras haberse tambien especificado ciertas entradas iniciales definidas. 

Entre las caracteristicas mas importantes se encuentran:
1. Las entradas y salidas deben ser bien especificadas.
2. Cada paso que sigue el algoritmo debe ser claro y nada ambiguo.
3. Los algoritmos deben ser efectivos en comparacion con otros metodos de resolucion de problemas.
4. Los algoritmos no deben venir dados por una implementacion en un lenguaje de programacion, este solo debe incluir la logica de resolucion de manera informal a modo de descripcion o pseudocodigo.
5. Ademas, el algoritmo debe ser __escalable__, debe pretender descomponer un problema en pequeñas partes para poder asi analizarlo de manera mas sencilla.

Para entender este concepto se plantea el siguiente ejemplo, donde se presenta inicialmente un algoritmo y seguidamente dos implementaciones del mismo, con el fin de dar a entender que el algoritmo no debe ser descrito en un lenguaje sino como una descripcion, y si la descipcion es detallada, es posible escalara a diferentes lenguajes:

<details>
<summary> Algoritmo </summary>

<p align="center">Paso 1 − Inicio</p>
<p align="center">Paso 2 − Declarar 3 numeros enteros x,y,z</p>
<p align="center">Paso 3 − Definir los valores de x & y</p>
<p align="center">Paso 4 − Multiplicar los valores de x & y</p>
<p align="center">Paso 5 − Almacenar el resultado del Paso 4 en z</p>
<p align="center">Paso 6 − Desplegar el resultado o imprimir z</p>
<p align="center">Paso 7 − Final</p>

</details>

<details>
<summary> Implementacion de un algoritmo en C++ </summary>

``` cpp
// Paso 1
int main() {

    // Paso 2
    int x, y, z;

    // Paso 3
    x = 10;
    y = 20;

    // Paso 4 y 5
    z = x * y;

    // Paso 6
    std::cout << "El resultado es: " << z << std::endl;

    return 0; // Paso 7. Final
}
```
</details>

<details>
<summary> Implementacion de un algoritmo en Python </summary>

``` python
# Paso 2 y 3
x=int(input("Intro número uno: "))
y=int(input("Intro numero dos: "))

# Paso 4 y 5
z=x*y

# Paso 6
print("El resultado es: ",z)
```
</details>


### 2. Explica la diferencia entre un algoritmo eficiente y uno ineficiente.
La diferencia entre un algoritmo eficiente y uno ineficiente se diferencia en como se utilizan los recursos disponibles, como el tiempo y la memoria, para resolver un problema específico. Entre los puntos de analisis mas importantes para determinar la eficiencia de un algoritmo se encunetran:

1. **Tiempo de Ejecución:** Un algoritmo eficiente generalmente tiene un tiempo de ejecución más rápido en comparación con uno ineficiente. Esto significa que puede resolver el problema en menos tiempo, lo que lo hace más adecuado para conjuntos de datos grandes o aplicaciones que requieren una respuesta rápida.

2. **Uso de Memoria:** Los algoritmos eficientes tienden a utilizar menos memoria en comparación con los ineficientes. Esto es importante especialmente en entornos con recursos limitados, como dispositivos móviles o sistemas embebidos.

3. **Escalabilidad:** Los algoritmos eficientes son escalables, lo que significa que pueden manejar un aumento en el tamaño de los datos de entrada sin un aumento significativo en el tiempo de ejecución o el uso de memoria. Los algoritmos ineficientes pueden volverse impracticables o incluso inutilizables cuando se enfrentan a conjuntos de datos grandes.

4. **Optimización:** Los algoritmos eficientes suelen estar optimizados para minimizar el número de operaciones necesarias para resolver el problema. Esto puede implicar técnicas como la reducción del número de iteraciones en bucles, la utilización de estructuras de datos adecuadas o la aplicación de algoritmos más avanzados.

5. **Simplicidad:** Aunque no siempre es el caso, los algoritmos eficientes tienden a ser más simples y más fáciles de entender que los ineficientes. Esto facilita su implementación, depuración y mantenimiento.

En resumen, un algoritmo eficiente es aquel que utiliza de manera óptima los recursos disponibles para resolver un problema específico, minimizando el tiempo de ejecución y el uso de memoria, mientras que un algoritmo ineficiente no lo hace, lo que resulta en un rendimiento más pobre y, a menudo, en una falta de escalabilidad.


### 3. ¿Qué es una estructura de datos y por qué son importantes?
Las estructuras de datos describen una forma para almacenar y organizar tipos de datos de tal forma que su acceso, modificacion y manipulacion sea mas eficiente en terminos de memoria y tiempo. Estructuras de datos comunes incluyen arrays, listas enlazadas, stack, queues, arboles y muchos mas, donde cada una de ellas tiene diferentes propositos y por tanto el uso de una estructura u otra va a depender de los requerimientos del problema. Entender como funcionan las estructuras de datos se vuelve importante ya que son fundamentales para el diseño eficiente de algoritmos y optimizacion de rendimiento.

De manera mas especifica, las estructuras de datos son importantes porque:

1. **Manejo eficiente de datos:** Permiten manejar de manera eficiente el almacenamiento y recuperacion de los datos, reduciendo por consecuencia el tiempo y mejorando el rendimiento.
2. **Organizacion de datos:** Buscan ordenar los datos de forma logica, haciendolos mas facil de entender y acceder a ellos.
3. **Abstracción de datos:** Ocultan los detalles de implementación del almacenamiento de datos, permitiendo a los programadores centrarse en los aspectos lógicos de la manipulación de datos.
4. **Reutilización:** Las estructuras de datos comunes pueden reutilizarse en múltiples aplicaciones, ahorrando tiempo y esfuerzo en el desarrollo.
5. **Optimización de algoritmos:** La elección de la estructura de datos adecuada puede impactar significativamente en la eficiencia de los algoritmos que operan en los datos.




### 4. Describe las diferencias entre una estructura de datos estática y una dinámica.
| Estructura de datos estaticas  | Estructura de datos dinamicas |
| ------------- | ------------- |
| Son aquellas que tienen un tamaño y una estructura fijos en tiempo de compilación, lo que significa que no se pueden modificar ni cambiar de tamaño durante el tiempo de ejecución.  | Son aquellas que tienen un tamaño y una estructura variables en tiempo de ejecución. Esto significa que se pueden modificar o cambiar de tamaño según sea necesario.  |
| Ejemplos: matrices, estructuras y enumeraciones.  | Ejemplos: listas vinculadas, pilas, colas, árboles, gráficos y tablas hash. |
| Rápidas y de fácil acceso debido a su dirección e índice de memoria constante.  | Acceso puede ser lento y complejo. |
| Suelen ser simples y directas en su definición e implementación. | Complicadas y difíciles de implementar y administrar correctamente pero brindan eficiencia y uso óptimo de la memoria |
| Rígidas e inflexibles para adaptarse a datos o requisitos cambiantes.  | Ofrecen flexibilidad y adaptabilidad para adaptarse a datos o requisitos cambiantes. |
| Pueden asignar más memoria de la necesaria o dejar espacio sin usar.  | Pueden ser impredecibles e inestables debido a cambios inesperados o crecimiento. |
| No admiten operaciones complejas o dinámicas.  | Soportan operaciones complejas o dinámicas. |



### 5. ¿Qué es la memoria dinámica y cómo se gestiona en lenguajes de programación como C++, explique las operaciones que se pueden realizar?


La memoria dinámica que se almacena en el heap es aquella que se utiliza para almacenar datos que se crean en el medio de la ejecución de un programa a diferencia de la memoria estática, que se asigna antes de que comience la ejecución del programa y se mantiene constante durante toda su duración. Entre las operaciones que se pueden realizar se tienen:

1. __Uso de la directiva new__

    La directiva 'new' nos va a dar una porcion de la memoria que esta en la porcion del heap, donde su uso va a ser: 
    ```
    >>> <name of pointer varible> = new <type of data>
    ```
    Se dice que es un pointer variable porque lo que nos retorna esta sintaxis es una direccion de memoria, entonces si esto no fuera un puntero, no podria funcionar. Asimismo, 'new' devuelve la direccion en memoria, en el caso de un arreglo, de la primera posicion de este, es decir, de la posicion cero.

    Consideraciones importantes:
    - Le llamamos dinamico porque no lo tenemos definido desde un inicio.
    - El operador new asigna memoria a una variable dinamica:
        ``` cpp
        pointerVariable = new dataType;
        ```
    - Para deasignar (deallocate) la memoria ocupada por la variable dinamica:
        ``` cpp
        delete pointerVariable;
        ```


2. __Metodos de asignacion y liberacion de memoria: malloc, calloc, realloc y free__

    En el programa pasado se estudia como asignarles a variables, arrays y objetos una direccion en la memoria dinamica. En este caso, se exploran 4 maneras de asignar memoria, liberarla o reasignarla mediante 4 funciones que pertenecen a la libreria estandar. Por tanto, se exploran los conceptos de los siguientes operadores:

    __Metodos que asignan un bloque de memoria en el heap y devuelven un puntero void* al inicio de la memoria asignada__

    - malloc(): m(emory)alloc
    - calloc(): inicializa en cero, es decir, si en ese espacio habia basura, la limpia. Sin embargo, es mas caro a nivel computacional porque tiene que ir a poner todo en cero.

    __Metodo que cambia el tamanio de un bloque de memoria asigando por malloc o calloc, redimensiona el bloque existente o asigna uno nuevo y devuelve un puntero al nuevo bloque de memoria__

    - realloc()

    __Metodo que liberia memoria previamente asignada por los malloc, calloc o realloc, ayuda a evitar fugas de memoria al liberar recursos__

    - free()




### 6. ¿Cuáles son las ventajas y desventajas de la memoria dinámica en comparación con la memoria estática?
#### Ventajas
| **Ventajas de la asignación de memoria estática** | **Ventajas de la asignación de memoria dinámica** |
|------------------------------------------------|-------------------------------------------------|
| El espacio de memoria se asigna durante el tiempo de compilación. | Este método de asignación no tiene desperdicio de memoria. |
| Es fácil de usar.                                | La asignación de memoria se realiza en tiempo de ejecución. |
| Utiliza una estructura de datos de pila.         | El tamaño de la memoria puede cambiarse según los requisitos de la asignación de memoria dinámica. |
| Se controla eficientemente el tiempo de ejecución. | Si no se necesita memoria, se puede liberar. |

#### Desventajas
| **Desventajas de la asignación de memoria estática** | **Desventajas de la asignación de memoria dinámica** |
|----------------------------------------------------|-----------------------------------------------------|
| Este método de asignación conduce al desperdicio de memoria. | Requiere más tiempo de ejecución debido a la ejecución durante el tiempo de ejecución. |
| La memoria no puede cambiarse mientras se ejecuta un programa. | El compilador no ayuda con la asignación y desasignación. El programador necesita tanto asignar como desasignar la memoria. |
| Se deben conocer los requisitos exactos de memoria.  |                                                              |
| Si no se necesita memoria, no se puede liberar.     |                                                              |



### 7. Explica qué es un árbol binario y cuáles son sus principales características.
Los árboles binarios son estructuras de datos muy similares a las listas doblemente enlazadas, en el sentido que tienen dos punteros que apuntan a otros elementos, pero no tienen una estructura lógica de tipo lineal o secuencial como aquellas, sino ramificada.  Tienen aspecto de árbol, de ahí su nombre.

Un árbol binario es una estructura de datos no lineal en la que cada nodo puede apuntar a uno o máximo a dos nodos. También se suele dar una definición recursiva que indica que es una estructura compuesta por un dato y dos árboles. Esto son definiciones simples. Este tipo de árbol se caracteriza porque tienen un vértice principal y de él se desprende dos ramas. La rama izquierda y la rama derecha a las que también se les conoce como subárboles.


### 8. ¿Qué es una cola (queue) y en qué situaciones se utiliza comúnmente?


### 9. ¿Cuál es la diferencia entre una cola (queue) y una pila (stack)?


### 10. Describe cómo funciona el algoritmo de inserción (insert) en una tabla hash.


### 11. ¿Qué es la función de dispersión (hash function) y por qué es importante en las tablas hash?


### 12. ¿Cuál es la complejidad temporal promedio de búsqueda en una tabla hash bien implementada?


### 13. Explica cómo se realiza la operación de inserción (push) en una pila (stack).


### 14. ¿Cuál es la complejidad temporal de las operaciones de apilar (push) y desapilar (pop) en una pila?


### 15. Describe cómo funciona una lista enlazada y cuáles son sus ventajas y desventajas.


### 16. ¿Qué es un nodo en una lista enlazada y qué contiene?


### 17. ¿Cuál es la diferencia entre una lista enlazada simple y una lista enlazada doblemente enlazada?


### 18. ¿Cómo se realiza la eliminación (delete) de un nodo en una lista enlazada?


### 19. Explica cómo funciona el algoritmo de recorrido (traversal) en un árbol binario.


### 20. ¿Cuál es la complejidad temporal del recorrido en preorden, en orden y en postorden en un árbol binario balanceado?


### 21. Explique la diferencia entre la notación Big O (O) y la notación Omega () en el análisis de la complejidad temporal de los algoritmos. Proporciona un ejemplo de un algoritmo y determina su complejidad temporal utilizando ambas notaciones Big O y Omega.

