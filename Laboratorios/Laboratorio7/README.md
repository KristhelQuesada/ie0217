# Laboratorio 6: Expresiones Regulares y Makefile


## Resumen
En este laboratorio se realiza un ejemplod donde se desarrollan los conceptos de las expresiones regulares y makefiles. En este caso, se realizan tres archivos fuente los cuales consisten en:

1. _Text\_processor.hpp_: Contiene el prototipo de la clase `TextProcessor` se definen sus dos atributos privados (ambos son el nombre de los archivos de entrada y salida) y las 2 funciones miembro (constructor y replace).
    - `TextProcessor`: Constructor que recibe como parametro la referencia constante de los nombres de los archivos para evitar que el constructor modifique su contenido original y mejorar en terminos de optimizacion de compilacion, y almacena el nombre de esos archivos en sus miembros privados.
    - Funcion `replace()`: Funcion miembro que tiene el objetivo de recibir parametros constantes nuevamente, tal que el primero corresponde al string que queremos sustituir, y el segundo el string por el cual se sustituye dicha palabra.

2. _Text\_processor.cpp_: Contiene la implementacion de las funciones miembro de la clase, de tal forma que el constructor inicializa los nombres de los archivos y _replace_ crea la logica mediante el uso de las clases:
    - `ifstream`: clase orientada para la lectura de archivos.
    - `ofstream`: clase orientada para la escritura de archivos.
    - `regex`: clase propia de la biblioteca _regex_ importada, para trabajar con expresiones regulares, se utiliza su funcion miembro `regex_replace()` para el reemplazo de las palabras meta.

3. _main.cpp_: funciona por medio de la linea de comandos y tiene un small checker de errores en la cantidad de argumentos que recibe. Luego, inicializa las variables de interes segun la posicion de los argumentos recibidos, crea un objeto de la clase TextProcessor y utiliza su funcion `replace()` para implementar la logica deseada.


Finalmente, se prueba la ejecucion del programa mediante la implemetacion de un archivo Makefile. En el se incluyen diversas directrices las cuales crean diversas variables, definen la ubicacion de los archivos fuente, se listan los archivos generados por la compilacion de los archivos fuente en la varible _OBJECTS_ con su respectva terminacion .exe y se identifica el archivo ejecutable. Posteriormente, para cada uno de esos archivos, se realiza su compilacion y enlazado mediante las banderas _-lstdc++fs_ y se agrega una opcion que limpia los archivos .exe tras la ejecucion del programa sin borrar la carpeta donde van contenidos, ya que esta es indispensable para el funcionamiento del comando `make`.

<br>

## Instrucciones de ejecucion
Asi, asumiendo que para la evaluacion del presente laboratorio se busca revisar unicamente los archivos modulados, entonces los comandos de ejecucion para ello se presentan a continuacion, sin embargo, considere que __se asume que se encuentra posicionado en el directorio__ _.../ie0217/Laboratorios/Laboratorio7_ y asegurese de contar con los siguientes directorios y especificaciones ya que el makefile requiere de la existencia de los mismos para su ejecucion:

- `/bin/`: aca se guardan los archivos binarios
- `/data/input.txt`: a lo sumo debe contener la palabra "foo" (sin las comillas) para observar el cambio en el archivo de salida.
- `/data/output.txt`: debe estar vacio para ver los cambios.
- `/src/`: debe contener los tres archivos fuente mencionados al inicio de este instructivo.

```
make
```
```
./bin/textprocessor -f data/input.txt -o data/output.txt -search "foo" -replace "bar"
```
```
make clean
```
