# Previo 5: Algoritmos de Ordenamiento

## Indice
1. [Descripción](#descripcion)
2. [Ejecución de los Programas](#ejecucion-de-los-programas)
3. [Conceptos Importantes](#conceptos-importantes)
   - [Contenedores](#contenedores)
   - [Iteradores](#tipos-de-iteradores)
   - [Algoritmos STL](#algoritmos-stl)

## Descripcion
El objetivo de este previo consiste en el estudio de la _Standard Template Library_ (STL), donde se revisan conceptos relacionadas a ellas y ademas se brinda mediante una serie de programas, algunos ejemplos sobre su implementacion y sintaxis.  Entre los conceptos mas importantes asociados a la STL vistos y estudiados en esta seccion se tienen:
- Contenedores
- Tipos de Iteradores
- Algoritmos STL

## Ejecucion de los Programas
Para la ejecucion de los programas, posicionese en el directorio _.../ie0217/Previos/Previo5_, y utilice los comandos:
```
>> g++ -o ejecutable.exe ./<nombre del archivo>.cpp

>> ./ejecutable.exe
```

Con el fin de brindar mayor facilidad a quien desea correr los archivos, a continuacion se incluyen todos los comandos de compilacion (el de ejecucion no se incluye ya que siempre sera el ultimo de arriba en la linea anterior):
```
g++ -o ejecutable.exe ./1_Containers.cpp
```

```
g++ -o ejecutable.exe ./2_ContainersAdapters.cpp
```

```
g++ -o ejecutable.exe ./3_Iterators.cpp
```

```
g++ -o ejecutable.exe ./4_IteratorsTypes.cpp
```

```
g++ -o ejecutable.exe ./5_STL_Algorithms.cpp
```


## Conceptos Importantes
Entre los conceptos importantes abarcados en este previo se destacan los siguientes:

### Contenedores

Los contenedores almacenan y organizan datos de una manera específica según sea necesario, por ejemplo:

	- Vectores: almacenan datos de un mismo tipo en orden secuencial
	- Mapas: almacenan datos en pares clave-valor

Se categorizan en 3 tipos.

#### Contenedores de Secuencia
Se acceden a ellos de manera secuencial y suelen ser arreglos o estructuras de listas enlazadas.

	- Arreglos, vectores, deque, listas.

#### Contenedores Asociativos
Almacenan elementos en orden mas no "cuándo" se agregan no afectan el orden de los elementos. Internamente, se implementan como estructuras de árbol binario.

	- Set, multiset, map, multimap


#### Contenedores Asociativos Desordenados
Contiene las versiones sin ordenar del contenedor anterior y se implementa usualmente mediante hash-tables, por tanto si queremos algo sin ordenar, un hash table puro funciona, mas si queremos algo ordenado entonces sería mejor un árbol binario. 

	- unordered_set,  unordered_multiset, unordered_map, unordered_multimap

#### Adaptadores de Contenedores
Los adaptadores de contenedores son una parte de la STL de C++ que nos proporciona una forma de modificar o adaptar clases de contenedores existentes para satisfacer necesidades o requisitos específicos. En C++, los adaptadores de contenedores son interfaces especializadas creadas sobre otros contenedores secuenciales como deque, vector o list tal que buscan romper las limitaciones en la funcionalidad en un contenedor preexistente y proporcionar funcionalidades más específicas. Se hace así para evitar definir una interfaz completamente nueva para contenedores que se pueden construir sobre los contenedores ya existentes.

La STL tiene tres adaptadores de contenedores principales:

- Pila (Stack)
- Cola (Queue)
- Cola de prioridad (Priority Queue)

 |                   | Stack                                                    | Queue                                                                                                     | Priority Queue                                          |
|-------------------|----------------------------------------------------------|-----------------------------------------------------------------------------------------------------------|---------------------------------------------------------|
| Descripción       |Sigue el principio LIFO (Last in first out) de tal forma que la inserción y eliminación de elementos solo puede aplicarse al elemento que encabeza la lista.          | Sigue el principio de FIFO (First In First Out), lo que significa que los elementos se insertan en la parte posterior y se eliminan desde el frente de la cola. Por defecto, se implementa utilizando el contenedor deque.                                                           | Está diseñado específicamente de manera que el primer elemento de la cola sea el mayor o el menor de todos los elementos en la cola, y los elementos están en orden no decreciente o no creciente (por lo tanto, podemos ver que cada elemento de la cola tiene una prioridad {orden fijo}).  El elemento superior usualmente es el mayor por default aunque puede ser modificado para que sea el más pequeño.        |
| Key Operations    | - push(elm): Inserta elm en la parte superior.          | - push(elm): Inserta elm al final.                                                                        | - push(elm): Inserta elm.                               |
|                   | - pop(): Elimina el elemento superior.                   | - pop(): Elimina el elemento frontal.                                                                      | - pop(): Elimina el elemento superior.                  |
|                   | - empty(): Comprueba si está vacío.                     | - empty(): Comprueba si está vacío.                                                                       | - empty(): Comprueba si está vacío.                    |
|                   | - size(): Devuelve el número de elementos.               | - size(): Devuelve el número de elementos.                                                                | - size(): Devuelve el número de elementos.             |
|                   | - top(): Devuelve una referencia al elemento superior.   | - front(): Accede al elemento frontal.                                | - top(): Devuelve una referencia al elemento superior. |
|                   |                          | - back(): Accede al último elemento. |                      |



#### Programas Implementados
En resumen, los archivos *1_Containers.cpp* y *1_ContainersAdapters.cpp* contienen algunos ejemplos sobre la implementacion de los contenedores y un adaptador, entre ellos, se resume lo siguiente de los archivos:

| Contenedor/Apatador      | Descripción                                                                                           |
|-----------------|-------------------------------------------------------------------------------------------------------|
| Vector          | Simplemente define un tipo de lista secuencial donde sus elementos se ordenan según la manera en que fueron ingresados.                                                |
| Set             | Ordena los elementos en orden ascendente y elimina los elementos repetidos.                          |
| Unordered Set   | Almacena los elementos en desorden de manera aleatoria e igual elimina los elementos repetidos.       |
| Map             | Almacena los elementos en forma de key-value, donde el key no puede repetirse ya que reescribe sobre el último elemento que contenía ese key, pero sí puede repetirse el value con otro key. |
| Stack | Almacena los elementos y los gestiona bajo el principio LIFO |

### Tipos de iteradores
Un iterador es un objeto similar a un puntero ya que representa la posición de un elemento dentro de un contenedor, y su función consiste en poder iterar sobre dichos elementos, todo mediante aritmética de punteros internamente.

Por ejemplo, en un vector llamado nums de tamaño 4:

	- begin()
	- end(): solo que este apunta al elemento más allá del elemento final, por lo que si realmente queremos obtener el final real debería ser "end()-1", esto porque tenemos que tener algún punto para identificar cuál es el fin.

… estas anteriores, son _funciones miembro_ que devuelven iteradores que apuntan al inicio y al final del vector respectivamente. Para ello primero debe crearse un contenedor al cual vamos a asociar el el iterador, ambos deben tener el mismo tipo de dato ya que de lo contrario se genera un error.

Se puede hacer de dos formas la especificacion de un iterador:

```cpp
1. vector<string>::iterator itr = languages.begin()
2. auto itr = languages.begin()
```

Aunque usualmente se prefiere la primera cuando se requiere especificar y mantener un control sobre las variables que estamos utilizando. En general, vamos a tener 5 tipos de iteradores.

#### 1. Iteradores de Entrada
Puede hacer únicamente lecturas y se mueve solo hacia adelante. 

#### 2. Iteradores de Salida
Puede hacer solo escritura y se mueve solo hacia atrás.

#### 3. Forward Iterators
Puede hacer lecturas y escrituras y se mueve solo hacia adelante. Para ello, se inicializa con un forward_list.

#### 4. Bidirectional Iterators
Es parecido al forward pero con un poco más de cosas adicionales. Realiza lecturas, escrituras y puede moverse tanto hacia adelante como hacia atrás. Los iteradores bidireccionales son compatibles con los contenedores:

  - List, set, multiset y map

… es decir, con los contenedores asociativos.

#### 5. Random Access Iterator
Es una combinación de los 4 básicamente. Realiza lecturas, escrituras y puede moverse tanto hacia adelante como hacia atrás con el adicional de tener acceso aleatorio. En este caso, son compatibles con contenedores secuenciales como:

  - Vectores, deques, arrays e iteradores string

donde su nombre de acceso aleatorio es porque cuando queramos acceder a un elemento, el tiempo de ejecucion para este acceso siempre sera constante.

### Algoritmos STL
En la STL existe una tercer caja de herramientas ademas de los contenedores e iteradores, la cual vamos a estar utilizando, y esta va a ser los algoritmos. En este caso solo vemos una cantidad reducida de algoritmos en comparación con la basta cantidad que existen, sin embargo, podemos encapsularlos en 6 burbujas o catgorias distintas:

	1. Algoritmos de Búsqueda
	2. Algoritmos de Ordenamiento
	3. Algoritmos de Manipulación de Rango
	4. Algoritmos de Eliminación y Modificación
	5. Algoritmos Numéricos
	5. Algoritmos de Conjuntos

En este previo, se realiza un ejemplo utilizando un algoritmo de ordenamiento denominado sort() el cual ordena por default los elementos de un arreglo de manera ascendente.




