# Tarea 2: Manejo de clases en C++.
#### Estudiante: Kristhel Quesada, C06153

En el siguiente repositorio se encuentra...

## Parte Teorica
### 1. ¿Que es la programacion orientada a objetos y cuales son sus principales principios?
En la programacion, existen varios modos de trabajar para obtener los resultados deseados, la programacion orientada a objetos es uno de ellos, y se define como un __paradigma de programacion__, donde un paradigma es como tal una forma o estilo de programar al resolver un problema. La programacion orientada a objetos o POO, funcion de tal manera que se construyen modelos o moldes para asi crear diferentes objetos que tendran mismas caracteristicas o funciones, de esta forma, se permite separar los diferentes componentes de un programa. Entre sus principales principios se tiene:

- __Encapsulación: protección de datos y ocultación de información:__ El encapsulamiento es el principio que permite proteger los datos y ocultar la información interna de un objeto, de manera que solo se pueda acceder a ellos a través de métodos públicos y seguros. Esto debido a que los objetos se comunican entre ellos, entonces es necesario especificar que caminos pueden tomarse o no mediante especificadores de acceso (publi, protected y private) y asi garantizar la integridad de la información y evitar que sea alterada o corrompida accidental o intencionalmente.

- __Herencia: reutilización de código y especialización de objetos:__ La herencia es un principio tal que permite que una clasee una clase (subclase) puede heredar funciones y/o atributos de otra clase (superclase). De esta manera el programa se vuelve mas eficienta ya que no necesita declarar una misma funcion o variable en cada clase que defina si ambas tienen dichas caracteristicas en comun.

- __Polimorfismo: flexibilidad y compatibilidad de objetos:__ El polimorfismo se refiere a la capacidad de los objetos de una clase base de comportarse de manera diferente en función de su clase derivada, es decir, al heredar un metodo por ejemplo, esta puede tener un comportamiento complemramente diferente del heredado.

- __Abstracción: simplificación y claridad de conceptos:__ Este principio se puede definir como las características específicas el objeto que lo distinguen de los demás tipos de objetos, de tal forma que la abstracción consiste en separar un elemento de su contexto o del resto de elementos que lo acompañan. Es un principio por el cual se descarta toda aquella información que no resulta relevante en un contexto en particular, enfatizando en alguno de los detalles o propiedades de los objetos. De esta forma, se facilita el mantenimiento de un código de gran tamaño, donde a lo largo del tiempo pueden surgir diferentes cambios.



### 2. Explique el concepto de ocultamiento de datos y como se logra en C++.
El ocultamiento de datos es parte del principio de encapsulamiento y consiste en ocultar los detalles de implementación de un objeto ya sea para con otras clases o manipulaciones. En C++, se logra mediante el uso de clases y los especificadores de acceso. Para ocultar datos en C++, se pueden declarar los datos miembros de una clase como privados (usando el modificador _private_) para que solo los métodos de esa clase o clases amigas puedan acceder y manipular estos datos, o tambien se podrian definir como _protected_, para que solo los metodos de su misma clase o clases derivadas tengan los permisos necesarios. Esto evita que otros componentes del programa puedan modificar los datos directamente, garantizando así la integridad y seguridad de los datos.

### 3. ¿Cual es la diferencia entre una clase y un objeto en C++?
La diferencia entre estos conceptos es que la clase es un molde o plantilla que caracteriza de manera general las propiedades o funciones que pueden realizar un objeto; por otra parte, un objeto es una instanciacion especifica de una clase. Por ejemplo, se puede definir una clase Carro el cual tiene  atributos generales como color, marca, cantidad de puertas, etc; y de dicha clase podemos sacar uno o mas objetos, por ejemplo carro1, el cual contendra atributos especificos propio de su tipo, por ende se dira que carro1 tiene un color azul, una marca Toyota y una cantidad de puertas igual a 4.

Por tanto, en resumen se puede decir que una clase es un molde para describir un objeto, sus caracteristicas y funciones; mientras que un objeto es una copia o replica de las caracteristicas de una clase, en las cuales se van a especificar sus detalles propios, por tanto, un objeto viene a llenar los espacios en blanco que la clase o plantilla solo propuso.

### 4. ¿Que es el polimorfismo y como se logra en C++?
El polimorfismo es uno de los 4 principios fundamentales de la POO, como se mencionaba con anterioridad, consiste en permitirle a los objetos de diferentes clases que comporten un mismo metodo, la capacidad de implementar dicho metodo con una logica distinta ya sea mediante sobrecarga de funciones (mismo nombre pero distintos argumentos) o mediante la herencia.


### 5. ¿Que significa el termino encapsulamiento en el contexto de la OOP?
Como ya se habia mencionado con anterioridad, el encapsulamiento es otro de los 4 principios fundamentales de la POO, y su termino se refiere en encapsular o ailsar elementos de una clase para que otras clases o externos puedan o no acceder a ellas y asi evitar que estos sean modificados o alterados por error o de manera intencional.


### 6. ¿Cual es el proposito del constructor y el destructor en una clase de C++?
- __Constructor:__ El constructor es un método especial de una clase en C++ que se llama automáticamente cuando se crea un objeto de esa clase y el cual se encarga principalmente de inicializar los datos miembros del objeto y realizar cualquier otra inicialización necesaria antes de que el objeto se utilice. Ademas, en los constructores es posible pasarle parámetros para asi pasarle valores iniciales a los datos miembros del objeto.

- __Destructor:__ El destructor por el contrario, es un metodo que se llama automáticamente cuando un objeto de esa clase se deja de utilizarse, ya sea porque sale del ámbito en el que se declaró o porque se elimina explícitamente con el operador delete. El propósito del destructor es liberar recursos que el objeto pueda haber adquirido durante su vida útil, como memoria asignada dinámicamente o recursos de sistema.


### 7. ¿Investigue como se define una clase abstracta en C++ y cual es su funcion?
Una clase abstracta en C++ es una clase que no puede ser instanciada directamente, sino que se utiliza como una plantilla para otras clases derivadas. Se define utilizando al menos una función virtual pura, que se declara utilizando la sintaxis virtual tipoDeRetorno nombreFuncion() = 0;. La función virtual pura no tiene una implementación en la clase base y debe ser implementada por las clases derivadas. La función virtual pura convierte a la clase en abstracta, lo que significa que no se pueden crear objetos de ella. La función principal de una clase abstracta es definir una interfaz común para todas las clases derivadas, lo que facilita la programación basada en interfaces y el polimorfismo.

### 8. ¿Investigue que es un constructor de copia y para que se utiliza en C++?
Un constructor de copia en C++ es un constructor que se utiliza para crear un nuevo objeto como una copia de otro objeto del mismo tipo. Se define con el siguiente formato: Clase(const Clase &objeto). El constructor de copia se utiliza cuando se asigna un objeto a otro o cuando se pasa un objeto como argumento a una función por valor. Su utilidad radica en asegurar que los objetos se copien correctamente y que no haya problemas con el manejo de la memoria.

### 9. ¿Investigue que es el polimorfismo estatico y dinamico en C++ y como se diferencian?
- __Polimorfismo estático:__ También conocido como vinculación estática o temprana, se refiere al enlace de función que ocurre en tiempo de compilación. Se produce cuando se llama a una función de forma estática, es decir, el compilador selecciona qué función se llamará en función del tipo de referencia o puntero, en lugar del tipo real del objeto en tiempo de ejecución.

- __Polimorfismo dinámico:__ También conocido como vinculación dinámica o tardía, se refiere al enlace de función que ocurre en tiempo de ejecución. Se produce cuando una función virtual se llama a través de un puntero o una referencia a la clase base, y la implementación real de la función se determina en función del tipo real del objeto en tiempo de ejecución.

### 10. ¿Que son las clases anidadas y cual es su utilidad en C++?
Las clases anidadas, también conocidas como clases internas, son clases definidas dentro de otras clases en C++. La utilidad principal de las clases anidadas es la encapsulación y la organización del código. Pueden acceder a los miembros privados de la clase externa, lo que puede simplificar el diseño y la implementación de ciertas estructuras de datos y algoritmos. Además, pueden tener su propio nivel de acceso (public, protected, private), lo que permite controlar el acceso a sus miembros según sea necesario. Las clases anidadas también pueden facilitar la ocultación de detalles de implementación al agrupar clases relacionadas dentro de una clase externa.

### 11. En el contexto de la programacion orientada a objetos en C++, ¿como se pueden utilizar los punteros para trabajar con objetos y clases? Explique tambien por que los punteros a objetos son utiles en la programacion orientada a objetos.
En C++, los punteros son ampliamente utilizados en la programación orientada a objetos (OOP) para trabajar con objetos y clases de varias maneras:
- Asignación dinámica de memoria: Los punteros se utilizan para asignar y liberar memoria dinámicamente para objetos utilizando los operadores new y delete.
- Polimorfismo: Los punteros a la clase base se utilizan para acceder a objetos de clases derivadas, permitiendo así el polimorfismo.
- Acceso a miembros de objetos: Los punteros se pueden utilizar para acceder a los miembros de un objeto utilizando el operador de acceso a miembros (->).
- Paso de objetos a funciones: Los punteros se pueden utilizar para pasar objetos a funciones por referencia o por puntero, lo que evita la copia innecesaria de objetos grandes.
- Los punteros a objetos son útiles en la programación orientada a objetos porque proporcionan flexibilidad y eficiencia. Permiten la asignación dinámica de memoria, lo que significa que los objetos pueden crearse y destruirse según sea necesario durante la ejecución del programa. Además, los punteros a objetos permiten el polimorfismo, lo que facilita el diseño de programas que pueden manipular objetos de diferentes clases de manera uniforme.

### 12. ¿Que es una funcion prototipo?
Una función prototipo es una declaración de una función antes de que se defina su implementación. Especifica el tipo de retorno de la función, el nombre de la función y los tipos de parámetros que recibe la función, pero no proporciona el cuerpo de la función. La función prototipo le dice al compilador cómo se verá la función cuando se llame a ella en otros lugares del programa. Se utiliza para permitir que una función se llame antes de que se defina su implementación, lo que puede ser útil cuando las funciones se definen en diferentes archivos de código fuente.

### 13. ¿Explique los diferentes tipos de miembros que existen en la OOP?
En la programación orientada a objetos (OOP), los diferentes tipos de miembros que pueden existir en una clase son:

- Atributos (o variables miembro): Representan el estado de un objeto y almacenan datos relacionados con el objeto.
- Métodos (o funciones miembro): Representan el comportamiento de un objeto y definen las operaciones que pueden realizar sobre el objeto.
- Constructores: Métodos especiales que se llaman automáticamente cuando se crea un objeto para inicializarlo.
- Destructores: Métodos especiales que se llaman automáticamente cuando se destruye un objeto para liberar recursos utilizados por el objeto.

### 14. ¿Que es un memory leak?
Un memory leak (fuga de memoria) ocurre cuando un programa asigna memoria dinámicamente pero no la libera correctamente cuando ya no es necesaria. Como resultado, la memoria asignada sigue siendo ocupada incluso después de que el programa haya dejado de usarla. Con el tiempo, esto puede llevar a una disminución del rendimiento del programa y, en casos extremos, a la falla del programa debido a la falta de memoria disponible. Es importante liberar adecuadamente la memoria asignada dinámicamente utilizando el operador delete en C++ para evitar memory leaks.

### 15. ¿Que es y cual es la importancia de la Herencia multinivel, multiple y jerarquica de C++?
- Herencia multinivel: Es un concepto en el que una clase puede heredar propiedades y comportamientos de otra clase que, a su vez, también puede ser una clase base para otra clase. Esto crea una jerarquía de clases en la que cada clase deriva de otra clase en la cadena.
- Herencia múltiple: Permite que una clase herede propiedades y comportamientos de más de una clase base. Esto permite la reutilización de código en situaciones donde una clase necesita características de múltiples fuentes.
- Herencia jerárquica: Es cuando varias clases derivan de una misma clase base. Esto crea una estructura de árbol en la que una clase base tiene múltiples clases derivadas.

### 16. ¿Que es la composicion y como se implementa en C++?
La composición es un concepto de la programación orientada a objetos en el que un objeto contiene otros objetos como parte de sus datos miembros. Se implementa en C++ incluyendo objetos de otras clases dentro de una clase como miembros de datos. La composición permite crear objetos complejos construyendo y combinando objetos más simples, lo que facilita la creación de jerarquías de objetos y la reutilización de código.

### 17. ¿Que es la sobreescritura de funciones en C++ y cuando es bueno usarla?
La sobreescritura de funciones (override) es un concepto en el que una clase derivada proporciona una implementación específica de una función que ya está definida en una clase base. Esto permite que las clases derivadas reemplacen el comportamiento de las funciones de la clase base con su propia implementación. Es útil cuando se quiere proporcionar una funcionalidad específica para una clase derivada que difiere de la funcionalidad proporcionada por la clase base.

### 18. ¿Que es un metodo y un atributo y cual es la diferencia entre ellos?
El metodo, es una funcion asociada a una clase que define su comportamient y manipulan los datos de la clase para realizar operaciones específicas, por otra parte, un atributo es una variable que pertenece a una clase y representa el estado de los objetos de esa clase tales que almacenan datos asociados con los objetos de la clase.
Por tanto, la diferencia principal entre ellos radica en su función: los metodos definen el comportamiento de la clase, mientras que los atributos almacenan los datos asociados con la clase.

### 19. ¿Que es el constructor y el destructor en una clase?
El constructor es un método especial de una clase que se llama automáticamente cuando se crea un objeto de esa clase y se encarga de inicializar el estado del objeto, por el contrario, el destructor es un método especial de una clase que se llama automáticamente cuando un objeto de esa clase se destruye con propósito es liberar recursos asignados al objeto antes de que se elimine.


### 20. ¿Que es la sobrecarga de operadores en C++ y como se utiliza?
La sobrecarga de operadores es una característica de C++ que permite a los operadores estándar (como +, -, *, /) puedan ser redefinidos para trabajar con objetos de clases definidas por el usuario para proporcionar una sintaxis más natural y legible cuando se trabaja con tipos de datos personalizados. La sobrecarga de operadores se realiza mediante la definición de funciones miembro o funciones globales con el nombre del operador y su comportamiento deseado,en resumern,nosotros como desarrolladores definimos que queremos que el compilador interprete al darle una instruccion (por ejemplo, persona1+persona2), donde dicho operador no realiza su funcion directamente.