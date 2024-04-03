# Tarea 1: Desarrollo de un juego de ahorcardo en C++, conceptos de GitHub y C++.


## Consideraciones iniciales
> - Ignore los ">>" en las secciones donde se especifican los comandos utilizados para ejecutar los programas. Estos estan unicamente para dar a entender en donde comienza el comando.
> - Los comandos estan escritos en base al uso de Linux Ubuntu 22.04 LTS.
> - El navegador utilizado fue Firefox Web Browser.


## Instrucciones de ejecucion
#### Ejecucion del juego
> - Para la **ejecucion del juego**, posicionese en el directorio _.../ie0217/Tareas/Tarea1_, y utilice los comandos:
> ```
> >> g++ -o ejecutable.exe ./src/main.cpp ./src/Funciones.cpp
> >> .\ejecutable.exe
> ```

#### Ejecucion de Doxygen
> - Para la **ejecucion del doxygen** utilice los comandos:
> ```
> >> g++ -o ejecutable.exe ./src/main.cpp ./src/Funciones.cpp
> >> .\ejecutable.exe
> ```

## Funciones utilizadas en el programa
A lo largo del desarollo del juego de Ahorcado, se utilizaron varias funciones no vistas en clase, que fueron investigadas para su implementacion, entre ella se listan las siguientes y el enlace respectivo de donde se obtuvo:
- size(): https://aprende.olimpiada-informatica.org/cpp-string#:~:text=Para%20saber%20cuantas%20letras%20tiene,de%20la%20variable%20seguido%20de%20%22.
- push_back(): https://www.techiedelight.com/es/append-char-end-string-cpp/




## Parte Teórica (Respuesta a preguntas)
1. La principal difencia entre C y C++ radica en que el lenguaje de C no provee ningun soporte para el uso de clases y objetos ya que este es unicamente un lenguaje estructural, mientras que C++ es tanto un lenguaje estructural como orientado a objetos.

2. | Comando  |   Proposito | Uso  |
   |:----------: |:----------:|:----------:|
   | git init    |  Crea un repositorio local, es decir en el computador que estemos trabajando y no directamente en los servidores de GitHub  |  git init \<directory> |
   | git add     |  Promueve los cambios realizados en el directorio de trabajo (o branch) al stage, dichos cambios seran los que seran incluidos cuando se realice un commit.  |  git add \<archivo>  |
   | git commmit |  Promueve los cambios agregados al stage hacia el repositorio local, estos cambios pueden ser reversibles. Este comando puede contener banderas como -s (firma de quien hizo cambios) o -m (agregar breve mensaje descriptivo).  |  git commit <banderas>  |
   | git push    |  Promueve los commits realizados al repositorio remoto, es decir, a los servidores de GitHub.  | git push  |
   | git pull    |  Este comando se ejecuta cuando el repositorio local esta desactualizado con base al repositorio remoto, por tanto, permite actualizar el repositorio local con la informacion que en ese momento se encuentre en el repositorio remoto.  |  git pull  |
   | git clone   |  Permite clonar la informacion que contiene un repositorio remoto dentro de nuestro repositorio local para asi poder trabajar con el. Esto puede realizarse mediante el link del repositorio o llaves SSH.  |  git clone \<https o SSH Key del repositorio>  |
   | git branch  |  Permite crear, eliminar, o listar (dependiendo de los parametros que se especifiquen) ramas dentro de un repositorio local. Las ramas permiten realizar cambios sin alterar la rama principal para asi evitar sobreescrituras sin revisiones previas. |  git branch \<-D para eliminar> \<nombre de la rama para crear o eliminar una rama>  |
   | git merge   |   Combina dos branches paralelos tal respeta la línea temporal de los commits y por ende implement los cambios realizados. Para su uso es mejor realizarlo de manera remota luego de hacer un __git push__.  |    |


3. Usualmente los desarrolladores utilizan siempre un sistema de control de versiones (VCS) con el fin de permitir la colaboración con otros desarrolladores de un mismo proyecto tal que se evite la sobreescritura en el trabajo de los demás y con la posibilidad de volver a versiones anteriores en caso de que algo falle. Git es un VCS mientras que GitHub es un sitio web creado por los mismos desarrolladores de Git que nació bajo la necesidad de proporcionar alojamiento para los repositorios y varias herramientas más para trabajar con ellos. Por tanto, GitHub brinda una interfaz visual donde los desarrolladores pueden compartir su código fuente de manera pública, privada o restringida según lo deseen, también brindan extensiones y herramientas para la gestión de problemas (issues), solicitudes de extracción (pull requests), y comentarios en el código. Y permite observar de manera más sencialla cuando un compañero de trabajo realizó un cambio, cuándo se hizo y por qué. En resumen, Git se encarga de toda la lógica acerca del control de versiones mientras que GitHub es una herramienta en forma de interfaz gráfica y de alojamiento para las versiones de los repositorios que facilita y permite potenciar las características de Git.

4. Un merge conflict o conflicto  sucede cuando se intentan fusionar ramas que tiene confirmaciones de cambios contrapuestas, por ejemplo, como cuando dos o más persona editan la misma línea de un archivo y se tienen objetivos distintos, o cuando una persona edita un archivo y otra persona borra el mismo. Usualmente, Git es capaz de resolver algunas diferencia y fusionar ambas automáticamente, sin embargo, no todo el tiempo y es ahí donde debemos intervenir de lo contrario no se nos permitirá hacer un pull-request de manera exitosa. Para resolver estos conflictos manualmente, se pueden manejar los  conflictos tanto en GitHub como por la Línea de Comandos tal que Git ofrece un manual paso a paso de como resolverlos donde estos consisten en identificar los conflictos para asi tomar las decisiones sobre combinar ambos cambios en conflicto o bien eliminar y dejar solo uno.

5. Los archivos .gitignore son una herramienta para especificar qué archivos deben ignorarse o no desplegarse en un repositorio. Este archivo, aunque editable, tiene un contenido predeterminado basado en el lenguaje de programación del proyecto. Al utilizar comandos como git add y git status, los archivos con extensiones incluidas en .gitignore se omiten, lo que evita que se realicen acciones en ellos.

6. En GitHub, un pull request es una solicitud para fusionar los cambios de una rama a la rama principal (main) en el repositorio remoto. Esta solicitud permite revisar los cambios propuestos, identificar conflictos, proporcionar retroalimentación y, finalmente, aceptar, rechazar o modificar la fusión después de una revisión adecuada. 
Para ello primero debemos haber cargado/creado nuestra rama paralela al __main__ o rama base, al repositorio remoto con sus commits actualizados. Luego, desde la página principal de GitHub podemos dirigirnos sobre la rama que a la cual le queremos hacer un pull request y dirigirnos a la ventana desplegable de contribute donde se nos brinda la opción de abrir un pull request. Damos click sobre dicha opción y se nos despliega una ventana donde debemos asignarle un nombre al igual que una descripción, finalmente confirmamos el proceso. De ahí, luego podemos aceptar el proceso donde se revisará si existen conflictos de fusión, si es exitoso, la rama debería aparecer bajo la etiqueta de merged.

7. Un lenguaje interpretado se ejecuta línea por línea por un intérprete, mientras que un lenguaje compilado pasa por etapas adicionales como preprocesamiento, compilación y enlace antes de la ejecución. Entre algunos ejemplos, los lenguajes compilados, como C++ para el desarrollo de sistemas operativos y videojuegos de alto rendimiento, ofrecen eficiencia y control, mientras que los interpretados, como Python para desarrollo web con Django o automatización de tareas, priorizan la rapidez de desarrollo y la portabilidad.

8. Durante el proceso de compilación, el enlace (linking) es llevado a cabo por un linker, que une los programas y bibliotecas necesarios para crear un archivo ejecutable correctamente. El linker asocia programas mediante #include o variables externas, garantizando que se tengan todas las dependencias necesarias para la compilación adecuada del código fuente.

9. El flujo común de desarrollo en Git para agregar cambios a un repositorio son: crear una nueva rama para los commits, sincronizar el repositorio local con el remoto mediante un git pull, realizar un git add para agregar los cambios al stage, luego git commit para enviarlos al repositorio local, despues enviar los commits al repositorio remoto en una nueva rama mediante el git push, iniciar un pull request para fusionar la nueva rama con la rama principal (main), y por ultimo (si es aprobado y no hay conflictos) implementar los cambios y borrar la rama por orden.

10. La declaración de variables consiste en definir una variable en código con su tipo de datos y nombre, mientras que la inicialización, por otro lado, es el proceso de asignar un valor inicial a la variable en el momento de su declaración.

11. La sobrecarga de funciones en C++ permite tener varias funciones con el mismo nombre pero con diferentes tipos y cantidades de parámetros. Esto facilita la creación de funciones con funcionalidades similares para diferentes tipos de datos. 

12. Un puntero es una variable que almacena la dirección de memoria de otra variable. Esto permite acceder y manipular directamente la variable referenciada en la memoria. Para terminos de notacion, un puntero se va a identidificar con un asterisco antes de la variable tipo int* pnt es un puntero que alberga la direccion en memoria de una variable. Por ejemplo, para inicializar una variable tipo puntero debemos utilizar el siguiente formato:
```
- int var --> declarar una variable tipo entero
- int* pointVar --> declarar una variable tipo entero puntero
- pointVar = &var --> Una variable entero puntero debe albergar en si una direccion por ende lo igualamos a una mediante elvuso del &<variable>.
```

13. Un "branch" o rama puede pensarse como una version en desarrollo del proyecto sobre el cual se este trabajando. Cada repositorio comienza con un "branch" principal, al que comúnmente se le llama "main", y desde este punto se pueden crear ramificaciones paralelas para realizar cambios sin afectar el trabajo en el "main". Estas ramas secundarias permiten realizar modificaciones necesarias de forma aislada, y una vez que se verifica el correcto funcionamiento de los cambios realizados, se pueden fusionar con el "main", asimismo, en caso de que surjan problemas, estos pueden ser corregidos en la rama secundaria sin impactar el funcionamiento del "main".

14. La principal diferencia entre los bucles "do-while" y "while" radica en el momento en que se realiza la evaluación de la condición. En el bucle "do-while", la acción se ejecuta al menos una vez antes de verificar si la condición se cumple, mientras que en el bucle "while", la condición se evalúa primero y luego se decide si se ejecuta la acción.

15. Dividir un proyecto en archivos ".hpp", ".cpp" y "main.cpp" tiene su objetivo en reforzar la organización y claridad del código. En los archivos de encabezado (".hpp"), se encuentran las declaraciones de funciones y estructuras que se utilizarán en el proyecto, encapsuladas dentro de directivas de preprocesador para evitar la duplicación (en resumen se definen los prototipos). Posteriormente se implementan en los archivos ".cpp" para definir las funciones de manera adecuada. POr ultimo, el "main.cpp" contiene la lógica, funcionamiento e implementacion de las funciones declaradas y definidas en los .cpp y .hpp dentro del programa.