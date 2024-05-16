# Tarea 5: Expresiones Regulares y Makefile

## Indice
1. [Descripción](#descripcion)
2. [Ejecución de los Programas](#ejecucion-de-los-programas)
3. [Nota Teorica](#nota-teorica)


## Descripcion
El programa desarrollado para esta tarea consistia en la verificacion de la direccion de correo electronico.


<br>

## Ejecucion de los programas
### Compilacion y ejecucion del programa
Con el fin de ejecutar el programa solicitado se recomienda seguir los siguientes pasos:

1. Posicionese sobre el directorio _ie0217/Tareas/Tarea5/_
2. Ejecute el comando para la compilacion y ejecucion:
```sh
make
```
3. Cuando finalizado con las pruebas necesarias, ejecute el siguiente comando para eliminar los archivos ejecutables.
```sh
make clean
```

### Doxygen
La documentacion correspondiente generada a partir del formato doxygen se encuentra en el siguiente enlace: https://tarea5c06153.netlify.app/globals_func.html

<br>


## Nota Teorica

### 1. Que es una expresion regular y cual es su proposito en la programacion?
Las expresiones regulares llamadas _regex or regexp_ son descripcion de patrones que se utilizan para encontrar combinaciones de caracter en un texto y es una funcionalidad que se encuentran presente en casi todos los lenguajes de programacion e incluso en Linux mediante lo que conocemos bajo el comando _grep_. Su proposito en programacion esta en que las expresiones regulares pueden servir para buscar, editar y manipular  texto permitiendo asi que se pueda validar la entrada de un usuario, busqueda entre archivos o la simple sustitucion de un texto por un string especifico. Entre los beneficions que ofrecen las expresiones regulares en la programacion es que nos da la habilidad de analizar grandes cantidades de datos y de manera precisa encontrar coincidencias o selectivamente remplazar ciertas partes por otros valores. En resumen, las expresiones regulares suponen un conjunto de expresiones que describen un patron de busqueda o reconocimiento en hileras de texto, donde su utilidad en la programacion es maximizar la eficiencia de busqueda mediante una sola expresion.

### 2. Que significan los caracteres especiales . y * en una expresion regular?
| Caracter especial | Descripción                                                                 | Ejemplo       |
|-------------------|----------------------------------------------------------------------------|---------------|
| .                 | Representa cualquier carácter individual.                                    | Un punto puede representar cualquier cosa. Si deseas seleccionar nombres de dispositivos de cinco letras que comiencen con T y terminen con R, declararías "^T...R$", donde los tres puntos en el medio significan que las tres letras intermedias de la palabra pueden ser cualquier letra. |
| *                 | Al igual que el punto, un asterisco puede representar cualquier carácter. Sin embargo, mientras que el punto solo puede representar un solo carácter, el asterisco representa desde cero hasta una cantidad infinita de caracteres. | *. * devuelve cadenas que comienzan con cualquier combinación y cualquier cantidad de caracteres (el primer asterisco), y pueden terminar con cualquier combinación y cualquier cantidad de caracteres (el último asterisco). Esto selecciona todas las cadenas disponibles. |

### 3. Como se pueden agrupar subexpresiones en una expresion regular?
La construcción de agrupación siguiente captura una subexpresión coincidente:

_<p style="text-align: center;"> (subexpression) </p>_


Donde subexpression es cualquier patrón de expresión regular válido. Las capturas que usan paréntesis se numeran automáticamente de izquierda a derecha según el orden de los paréntesis de apertura de la expresión regular, empezando desde 1. Sin embargo, los grupos de capturas con nombre siempre se ordenan en último lugar, después de los **grupos de capturas sin nombre**. Para estos ultimos, buscan capturar una subexpresión coincidente y tener acceso a ella por nombre o por número tal que su sintaxist esta dada por:

_<p style="text-align: center;"> (?\<name>subexpression) </p>_

O bien

_<p style="text-align: center;"> (?'name'subexpression) </p>_

Donde _name_ es un nombre de grupo válido, y subexpresión es cualquier patrón de expresión regular válido. Tal que **name** no contenga ningún carácter de puntuación y no puede comenzar por un número.

### 4. Que funcion cumple la barra invertida \ en una expresion regular?
La funcion principal del _backslash_ es indicar que el caracter que se muestra posterior a este sera un caracter especial, sin embargo, esta no es la unica funcion tal que se resumen algunas a continuacion:

1. Desactivar el significado especial de los metacaracteres de modo que se puedan tratar como caracteres normales.
2. Incluir caracteres no imprimibles en una expresión regular.
3. Dar significado especial para algunos caracteres normales.
4. Especifica referencias a elementos anteriores. Las referencias a elementos anteriores se utilizan para especificar que una subexpresión coincidente anterior se compare de nuevo más tarde.

A modo de resumen, la siguiente tabla describe cómo especificar las secuencias de barra inclinada invertida para caracteres no imprimibles y de referencias a elementos anteriores, tambien muestra como utilizar secuencias de _backslash_ para aplicar una significado especial para algunos caracteres normales.

| Secuencia de barra inclinada invertida | Descripción                                                                                                                          |
|----------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------|
| \a                                     | Coincide con el carácter de campana (código ASCII 7).                                                                               |
| \e                                     | Coincide con el carácter de escape (código ASCII 27).                                                                               |
| \f                                     | Coincide con el carácter de alimentación de papel (código ASCII 12).                                                                |
| \n                                     | Coincide con el carácter de nueva línea o salto de línea (códigos ASCII 10).                                                        |
| \r                                     | Coincide con el carácter de retorno de carro (código ASCII 13).                                                                     |
| \t                                     | Coincide con el carácter de tabulador horizontal (código ASCII 9).                                                                  |
| \v                                     | Coincide con el carácter de tabulador vertical.                                                                                     |
| \\<                                    | Coincide con el principio de una palabra, o el principio de un identificador, que se define como el límite entre alfanuméricos y no alfanuméricos (incluyendo el carácter de subrayado). Esto no coincide con caracteres, sólo el contexto. |
| \\>                                    | Coincide con el fin de una palabra o identificador.                                                                                 |
| \b                                    | Coincide con un límite de palabra; es decir, coincide con la serie vacía al principio o al final de una secuencia de caracteres alfanuméricos. Habilita la búsqueda 'sólo palabras completas'. |
| \B                                    | Coincide con un límite que no es de palabra; es decir, no coincide con la serie vacía al principio o al final de una palabra.     |
| \d                                    | Coincide con cualquier dígito decimal. Equivalente a [0-9] y [[:digit:]].                                                           |
| \D                                    | Coincide con cualquier carácter no digital. Equivalente a [^0-9] o [^[:digit:]].                                                     |
| \s                                    | Coincide con cualquier carácter de espacio en blanco. Equivalente a [ \t\n\r\f\v] o [[:espacio:]].                                  |
| \S                                    | Coincide con cualquier carácter que no sea de espacio en blanco. Equivalente a [^ \t\n\r\f\v] o [^[:space:]].                        |
| \w                                    | Coincide con un carácter de palabra; es decir, cualquier carácter alfanumérico o el subrayado. Equivalente a [a-zA-Z0-9_] o [[:alnum:]_]. |
| \W                                    | Coincide con cualquier carácter no alfanumérico. Equivalente a [^a-zA-Z0-9_] o [^[:alnum:]_].                                       |
| \\[1-9]                                | Una barra inclinada invertida seguida de un dígito decimal no cero individual n se la considera referencia a elementos anteriores. Coincide con el mismo conjunto de caracteres coincidente con la subexpresión entre el enesimo paréntesis. |

### 5. Explique como se pueden capturar coincidencias usando parentesis en una expresion regular.
Como se menciono en la pregunta 3, los parentesis en las expresiones regulares denominan grupos de captura o subexpresiones regulares, estos grupos de captura nos permite dos cosas:

1. Permite obtener una parte de la coincidencia como un elemento separado en la matriz de resultados.
2. Si colocamos un cuantificador después del paréntesis, se aplica a los paréntesis en su conjunto.

Por ejemplo, sin paréntesis, el patrón `go+` significa el carácter `g`, seguido por `o` repetido una o más veces. Por ejemplo, `goooo` o `gooooooooo`. Los paréntesis agrupan los carácteres juntos, por lo tanto `(go)+` significa `go`, `gogo`, `gogogo` etcétera.

### 6. Cual es la diferencia entre \d y \D en una expresion regular?
El \d (character) es el equivalente a [0-9], lo cual significa que genera un coincidencia con cualquier numero, luego, todos aquellos caracteres que no coinciden con \d podran ser matcheados mediante el uso de \D. \D por tanto es el equivalente a [^0-9] lo cual significa que existira una coincidencia con cualquier caracter a excepcion de un digito numerico.

### 7. Como se representa una clase de caracteres en una expresion regular?
Una clase puede ser representada mediante los [], de tal manera que definen conjuntos (_sets_) o rangos de caracteres y generan un match con cualquier caracter del set de caracteres que se incluyo dentro de los parentesis cuadrados. Las clases de caracteres hacen sencillo generar una coincidencia con un set especifico o bien, excluir ciertos caracteres, por ejemplo, la expresion regular  [aeiou] genera una coincidencia con cualquier vocal, mientras que [^aeiou] genera un match con cualquier caracter siempre y cuando no sea una vocal.

> **Nota:** Las clases de caracter solo generan un match con un solo caracter a la vez, por tanto, si se requiere generar un match multiples veces a la vez, se necesitara de cuantificadores como +(repite minimo 1 vez lo que se especificase anterior a el) o *(repite cero o varias veces lo que se especificase anterior a el).

Algunos ejemplos se resumen a continuacuion:

| Patrón    | Descripción                                                                                                                |
|-----------|----------------------------------------------------------------------------------------------------------------------------|
| [abc]     | Coincide con cualquier carácter que sea 'a', 'b' o 'c'.                                                                    |
| [a-z]     | Coincide con cualquier letra minúscula de 'a' a 'z'.                                                                       |
| [A-Z]     | Coincide con cualquier letra mayúscula de 'A' a 'Z'.                                                                       |
| [0-9]     | Coincide con cualquier dígito de '0' a '9'. Opcionalmente, utiliza el metacarácter \d.                                    |
| [^abc]    | Coincide con cualquier carácter que no sea 'a', 'b' o 'c'.                                                                 |
| [\w]      | Coincide con cualquier carácter de palabra, incluyendo letras, dígitos y guión bajo.                                       |
| [\s]      | Coincide con cualquier carácter de espacio en blanco, incluyendo espacio, tabulación y nueva línea.                      |
| [^a-z]    | Coincide con cualquier carácter que no sea una letra minúscula de 'a' a 'z'.                                               |
