# Previo 5
## Descripcion
El objetivo de este previo consiste en el estudio de tres temas importantes:
- Manejo de Memoria
- Estructuras de Datos
- Algoritmos

## Ejecucion de los Programas
Para la ejecucion de los programas, posicionese en el directorio _.../ie0217/Previos/Previo5_, y utilice los comandos:
```
>> g++ -o ejecutable.exe ./<nombre del archivo>.cpp

>> ./ejecutable.exe
```

## Conceptos Importantes
Entre los conceptos importantes abarcados en este curso se destacan los siguientes:

### Como se guardan los programas en C++ dentro de la memoria?
La memoria la vamos a interpretar como un archivero muy grande que tiene direcciones de memoria entonces cada uno de los elementos será del tamaño de la palabra que queramos y donde vamos a tener tres espacios. En este caso, ya hablamos de representaciones fisicas no logical ni virtuales.

1. __Nivel Kernel (se parte en dos de manera fisica):__ Como usuarios no vamos a tener acceso, no vamos a poder acceder a él o escribir cosas en él. Por tanto, vamos a tener espacios reservados en él como:
    - Reserved, Kernel text, Kernel data, Memory mapped IO.

2. __Nivel de Usuario:__ Vamos a tener varias secciones como texto y la diferenciación entre lo que es los datos estáticos y dinámicos. Los datos estáticos son los que definimos en nuestro programa y luego los datos dinámicos, ambos los cuales se almacenan en el heap (del inglés un puño o montón) y luego de eso tenemos el stack, donde el heap y el stack llevan direcciones opuestas al llenarse.

    - Ampliando mas en el nivel de usuario, vamos a tener el __segmento de texto__ el cual almacena el código que estamos ejecutando o eventualmente que se va a ejecutar, son las instrucciones que el procesador va a procesar. 
    - Luego los puntos de datos inicializados y no inicializados, la cual se resume en la parte de los datos, y se encarga de almacenar las variables globales, separadas en inicializadas o no.
    - Luego de esto es donde va a comenzar el __heap__ que se encarga de la memoria dinámica que __nosotros definimos__. 
    - Luego tenemos el __stack__  y se encarga de almacenar las __variables locales__.
    - Tanto el stack y el heap son reservados para la memoria dinámica. Entonces, dependiendo de lo que haga el programa podría utilizarlo o no utilizarlo.


### Memoria dinamica
Para esto se desarrollaron tres programas que se enfocaron en lo siguiente:

1. __Uso de la directiva new__

    La directiva 'new' nos va a dar una porcion de la memoria que esta en la porcion del heap, donde su uso va a ser: 
    ```
    >>> <name of pointer varible> = new <type of data>
    ```
    Se dice que es un pointer variable porque lo que nos retorna esta sintaxis es una direccion de memoria, entonces si esto no fuera un puntero, no podria funcionar. Asimismo, 'new' devuelve la direccion en memoria, en el caso de un arreglo, de la primera posicion de este, es decir, de la posicion cero.

    Consideraciones importantes:
    - Le llamamos dinamico porque no lo tenemos definido desde un inicio.
    - El operador new asigna memoria a una variable dinamica:
        pointerVariable = new dataType;
    - Para deasignar (deallocate) la memoria ocupada por la variable dinamica:
        delete pointerVariable;


2. __Metodos de asignacion y liberacion de memoria: malloc, calloc, realloc y free__

    En el programa pasado se estudia como asignarles a variables, arrays y objetos una direccion en la memoria dinamica. En este caso, se exploran 4 maneras de asignar memoria, liberarla o reasignarla mediante 4 funciones que pertenecen a la libreria estandar. Por tanto, se exploran los conceptos de los siguientes operadores:

    __Metodos que asignan un bloque de memoria en el heap y devuelven un puntero void* al inicio de la memoria asignada__

    - malloc: m(emory)alloc
    - calloc: inicializa en cero, es decir, si en ese espacio habia basura, la limpia. Sin embargo, es mas caro a nivel computacional porque tiene que ir a poner todo en cero.

    __Metodo que cambia el tamanio de un bloque de memoria asigando por malloc o calloc, redimensiona el bloque existente o asigna uno nuevo y devuelve un puntero al nuevo bloque de memoria__

    - realloc

    __Metodo que liberia memoria previamente asignada por los malloc, calloc o realloc, ayuda a evitar fugas de memoria al liberar recursos__

    - free

    Tambien se introduce el concepto de _memory leak_ o fugas de memoria y sucede cuando usamos algo en el heap pero no lo eliminamos, entonces los espacios disponibles en dicha memoria se comienza a llenar hasta el punto que no podemos utilizar ese espacio de memoria.


### Estructuras de Datos
Una estructura de datos es ligeramente diferente a un tipo de dato, para ello considere el ejemplo donde tenemos un array de enteros, el array puede considerarse una estructura de dato, mientras que entero es el tipo de dato. POr tanto podemos decir que una estructura de datos se refiere a la manipulacion o coleccion de tipos de datos tal que se describen en un orden especifico. Podemos tener 2 tipos:

- Lineales
    - Estaticas: como los arreglos.
    - Dinamicas: como las listas, stacks y colas (_queues_)
- No lineales
    - Graphs
    - Arboles

#### Temas desarrollados en los programas

1. __Stack__

    Un stack es una estructura de datos que funciona de tal manera como una pila de objetos, tal que siempre es mas sencillo extraer el elemento que esta arriba de la pila, es por eso que funcionamiento se describe de tal forma que el ultimo elemento en ingresar, sera el primer elemento en salir cuando se desee realizar una extraccion del mismo.

2. __Queues__

    Funciona de tal manera que el primer elemento en entrar es el primer elemento en salir. En esta estructura se tendran dos punteros donde ambos iniciaran en la misma posicion cuando no haya nada o un unico elemento, y conforme se vaya llenando la cola el puntero rear (trasero) comenzara a moverse y conforme se eliminen elementos, el puntero front (frontal) tambien comenzara a moverse hacia el rear. Una vez se hayan eliminado todos los elementos entonces ambos punteros regresan a la posicion inicial.

3. __Linked Lists__

    Es una estructura de datos lineal, la cual consta de una serie de __nodos__ enlazados, donde cada nodo almacena los datos y la direccion del siguiente nodo. Tambien se mencionan otro tipos de listas como las doblemente enlazadas y las listas circulares.

4. __Tranversal Trees__

    Es una estructura de datos jerarquica y no lineal que se caracteriza por tener nodos conectados por aristas, es decir, caminos multiples que se derivan de un solo punto.

    Se define entonces a una __arista__ como el vinculo entre dos nodos cualesquiera, mientras que nodo es un elemento que contiene un valor y las direcciones de sus nodos subsecuentes.

    Entre los nodos se tienen nodos internos y externos. Los __nodos internos__ son aquellos que tienen como minimo un nodo secundario o siguiente; mientras que los __nodos externos__ son aquellos que no contienen otros nodos despues de el.

    Cuando '_atravesamos_' un arbol decimos que anduvimos por todos los nodos del arbol. Asi, para recorrer un arbol se plantea la forma de visualizarlo como dos nodos o subarboles (izquierda y derecha). Asi podremos recorres el arbol de tres maneras:

    - Primero todos los nodos del subarbol izquierdo, luego raiz y luego todos los nodos del derecho. (__Inorder__)
    - Primero raiz, luego todos los nodos del subarbol derecho y luego todos los nodos del izquierdo. (__Preorder__)
    - Primero todos los nodos del subarbol derecho, luego todos los nodos del izquierdo y luego la raiz. (__Postorder__)

