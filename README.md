# ie0217
Repositorio del curso de Estructuras Abstractas de Datos y Algoritmos para Ingeniería.

> Consideraciones:
> - Ignore los ">>" en las secciones donde se especifican los comandos utilizados para ejecutar los programas. Estos estan unicamente para dar a entender en donde comienza el comando.
> - Los comandos estan escritos en base al uso de Linux Ubuntu 22.04.

## Previos

### Previo 1

Consiste en la familiarización del entorno de GitHub. Para ello se crearon dos archivos (_archivo.cpp_ y _archivo2.cpp_) con el fin de utilizarlos para la manipulación de comandos asociados al entorno. Asimismo, a continuación se listan una serie de comandos que se utilizan para la ejecución de dichos archivos:
```
>> g++ -o archivo.exe archivo.cpp
>> .\archivo.exe

>> g++ -o archivo2.exe archivo2.cpp
>> .\archivo2.exe
```

### Previo 2

Consiste en el primer acercamiento del funcionamiento del lenguaje de programacion de C++, en el cual se revisaron conceptos como declaracion e inicializacion de variables, operadores, sentencias, loops, arreglos, declaracion de funciones (su paso de argumentos, prototipos, sobrecargos), variables externas y estructuras.

Asimismo, con respecto a los comandos utilizados para la ejecucion de los programas se utilizaron los siguientes comandos asumiendo que nuestra posicion en el directorio es _.../ie0217/_ :
```
>> g++ -o ejecutable.exe ./Previos/Previo2/<nombre del archivo>

>> .\ejecutable.exe
```

Lo anterior se aplica para todos los archivos.cpp a excepcion de los archivos:
- 15_variablesScope.cpp
- 15_program2.cpp

donde para su ejecucion se necesitan compilar simultaneamente ya que es aca donde se realizan las pruebas de variables externas y por ende su ejecucion es (asumiendo nuevamente que nos ubicamos en el directorio _.../ie0217/_ ):
```
>> g++ -o ejecutable.exe ./Previos/Previo2/15_variablesScope.cpp ./Previos/Previo2/15_program2.cpp

>> .\ejecutable.exe
```

### Previo 3

Consiste en el seguimiento del estudio de C++. En este caso se revisan los conceptos de archivos de encabezado, casting, la sentencia _goto_, recursividad, enums, defines y almacenamiento de variables con el uso de punteros aplicado tanto a variables normales como a structs, arrays y funciones.

Nuevamente asumiendo que nuestra posicion en el directorio es _.../ie0217/_, entonces los comandos utilizados para ejecutar los codigos fueron:
```
>> g++ -o ejecutable.exe ./Previos/Previo3/<nombre del archivo>

>> .\ejecutable.exe
```

Lo anterior se aplica para todos los archivos a excepcion de:
- 1_main.cpp
- 1_sum.cpp
- 1_sum.hpp

donde para su ejecucion se utiliza:
```
>> g++ -o ejecutable.exe ./Previos/Previo3/1_main.cpp ./Previos/Previo3/1_sum.cpp

>> .\ejecutable.exe
```