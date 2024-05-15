# Previo 10: Interfaces Graficas (wxWidgets y FLTK)

## Indice
1. [Descripción](#descripcion)
2. [Ejecución de los Programas](#ejecucion-de-los-programas)
3. [Instalacion de wxWidgets en Ubuntu](#instalacion-de-wxwidgets-en-ubuntu)
4. [Instalacion de FLTK en Ubuntu](#instalacion-de-fltk-en-ubuntu)
<!--3. [Conceptos Importantes](#conceptos-importantes)-->

## Descripcion
El objetivo de este previo consiste en el estudio de la instalacion de algunas herramientas para el trabajo con Interfaces Graficas, entre ellas las herramientas instaladas fueron wxWidgets y FLTK; para cada una de ellas se brinda la guia de instalacion realizada para una version de Ubuntu 22.04 LTS, de tal forma que se brinda un paso a paso al igual que maneras de verificar si la instalacion fue realizada con exito. La segunda parte de este previo consiste en la familiarizacion con las herramientas que brinda wxWidgets de tal manera que se desarrollan 9 proyectos o subprogramas con el fin de observar diferentes funcionalidades.
<br>

## Ejecucion de los Programas
A continuacion se brinda una tabla que resume los programas implementados tal que se especifica una breve descripcion de los mismos, el directorio correspondiente para su compilacion, el comando de compilacion y el comando de ejecucion. Para ello considere que usted debe ubicarse en el directorio _.../ie0217/Previos/Previo10/_, por tanto:

| Proyecto | Descripción | Directorio de Compilación | Comando de Compilación | Comando de Ejecución |
|----------|-------------|---------------------------|:-------------------------:|:----------------------:|
| InstallTest | Se utiliza como metodo para verificar la instalacion correcta de wxWidgets. | _.../InstallTest_ | ```g++ main.cpp `wx-config --cxxflags --libs` -o try.exe``` | `/try.exe` |
| BasicWindow | Se incializa el constructor de MainFrame solo para que se pueda desplegar una ventana en blanco. | _.../BasicWindow_ | `make` | `/try.exe` |
| Controles | Se crean 10 controles mediante la instanciacion de objetos de distintas clases, entre los controles creados fueron: el panel (contiene el resto de controles), botones, checkbox, texto estatico, texto modificable, slider, barra de progreso, seleccion entre opciones, incrementador de valores, listas y seleccion por puntos (RadioBox). | _.../Controles_ | `make` | `/try.exe` |
| Estilos | Se le agregaron distintas banderas al final de los argumentos que recibia cada constructor de los controles creados con el fin de observar como estos modificaban a los originales.| _.../Estilos_ | `make` | `/try.exe` |
| ManejoEstatico | Utilizamos la tabla de eventos, enums para identificadores personalizados, luego se define el macro de la tabla de eventos que contienen macros internos de tal forma que estos indican que queremos que suceda cuando se ejecuten las diferentes funciones miembro de MainFrame. Se intoduce el concepto de `CreateStatusBar()-wxLogStatus(string)` (barra que despliega mensajes informativos). | _.../ManejoEstatico_ | `make` | `/try.exe` |
| ManejoDinamico | Se intoduce el concepto de _binding_ como el proceso de enlazar dos elementos (ej. boton y la funcion que lo ejecuta) de tal manera que se busque una alternativa a la rigidez del manejo estatico. Para ello utilizamos `[objeto]->Bind(...)`, todo sin necesidad de crear macros. Tambien se introduce la funcion de `->Unbind(...)` como metodo para remover el enlace. | _.../ManejoDinamico_ | `make` | `/try.exe` |
| PropagacionDeEventos | Se estudian las jerarquias mediante el ejemplo de botones, donde se tienen varias formas de realizar enlaces siendo `this->Bind()` el mas general ya que engloba todo el frame. Ademas se introduce el `evt.Skip()` como forma para propagar eventos tal que se ejecute el siguiente enlace segun lo estipule la jerarquia. | _.../PropagacionDeEventos_ | `make` | `/try.exe` |
| EventosDelMouse | Se utiliza el metodo `OneMouseEvent` con el parametro `wxMouseEvent` para el reconocimiento de entradas del teclado de tal forma que se busca que se reconozca la posicion del mouse de manera lineal sin cortarse entre eventos (se utiliza un boton para mostrar la continuidad). | _.../EventosDelMouse_ | `make` | `/try.exe` |
| EventosKeyboard | Se utiliza el metodo `OneKeyEvent` con el parametro `wxKeyEvent` para el reconocimiento de entradas del teclado de tal forma que se busca que su identificacion sea independiente del evento enfocado. | _.../EventosKeyboard_ | `make` | `/try.exe` |



<br>

<!--## Conceptos Importantes-->
<!--<br>-->

## Instalacion de wxWidgets en Ubuntu
A continuacion se muestra una serie de articulos consultados para la instalacion de los programa, ademas se brinda un paso a paso de como se implemento personalmente dicha instalacion:

1. https://gist.github.com/pemd-sys/6aed397bcbdb380cb53bc09183f3a8f4 (mainly used)
2. https://docs.wxwidgets.org/3.1/plat_gtk_install.html (barely used)
2. https://wiki.wxwidgets.org/Compiling_and_getting_started (used for deeper explanation)

### Installing pre-requisites
A continuacion se brindan comandos para la instalacion de pre-requisitos necesarios para la instalacion de wxWidgets:

1. **build-essential**: Este paquete instala los paquetes básicos necesarios para compilar software en Linux. Incluye el compilador GCC, make y otros utilitarios esenciales para la compilación de programas.
```sh
sudo apt-get install build-essential
```

2. **libgtk-3-dev**: GTK (GIMP Toolkit) es una biblioteca para crear interfaces gráficas de usuario (GUI) en Linux. Este paquete instala los archivos de desarrollo necesarios para compilar programas que utilizan GTK 3.x.
```sh
sudo apt-get install libgtk-3-dev
```

3. **libglu1-mesa-dev:**  OpenGL es una API gráfica multiplataforma para renderizar gráficos 2D y 3D. Este paquete proporciona los archivos de desarrollo necesarios para compilar programas que utilizan OpenGL.
```sh
sudo apt-get install libglu1-mesa-dev
```

4. **freeglut3-dev:** FreeGLUT es una biblioteca de utilidades de OpenGL que simplifica la creación de ventanas y la gestión de eventos. Este paquete instala los archivos de desarrollo necesarios para compilar programas que utilizan FreeGLUT junto con OpenGL.
```sh
sudo apt-get install freeglut3-dev
```

5. **mesa-common-dev:** Mesa es una implementación de código abierto de la especificación de OpenGL. Este paquete proporciona archivos de desarrollo comunes para compilar programas que utilizan la biblioteca Mesa.
```sh
sudo apt-get install mesa-common-dev
```

6. **mesa-common-dev:** Este paquete proporciona los archivos de desarrollo para la biblioteca JPEG, que se utiliza para la manipulación de imágenes JPEG. Si la aplicación de wxWidgets necesita trabajar con imágenes JPEG y realizar operaciones como la compresión o descompresión de imágenes, entonces este paquete es fundamental. Asimomo, se agrega la bandera `-y` para decirle a `apt-get` que responda automáticamente `Yes` a cualquier pregunta de confirmación que pueda surgir durante la instalación del paquete.
```sh
sudo apt-get install -y libjpeg-dev
```



<br>

### Download latest release file from github
Para descargar el source file puede realizarse desde la pagina https://www.wxwidgets.org/downloads/ la version Latest Stable Release: 3.2.4 tal que se descarga el source code para Linux, aunque puede realizarse de la siguiente manera mediante la linea de comandos:
```sh
wget https://github.com/wxWidgets/wxWidgets/releases/download/v3.2.4/wxWidgets-3.2.4.tar.bz2
```

### Unpack and configure for compilation
Donde la `j` ej la bandera `-xjf` funciona para indicar que `tar` debe tratar el archivo como si estuviese comprimido con bzip2, ya que la terminacion del mismo fue .b2z
```sh
tar -xjf wxWidgets-3.2.4.tar.bz2 -C wxWidgets

cd wxWidgets-3.2.4/

mkdir gtk-build

cd gtk-build

../configure  --with-gtk=3 --with-opengl
```
donde `--with-opengl` permite el uso de opengl con wxwidgets.

### Output from configure
```
  Installation directory:             /usr/local
  Documentation directory:            ${prefix}/share/doc/tiff-4.0.3
  C compiler:                         gcc -g -O2 -Wall -W
  C++ compiler:                       g++ -g -O2
  Enable runtime linker paths:        no
  Enable linker symbol versioning:    no
  Support Microsoft Document Imaging: yes
  Use win32 IO:                       no

 Support for internal codecs:
  CCITT Group 3 & 4 algorithms:       yes
  Macintosh PackBits algorithm:       yes
  LZW algorithm:                      yes
  ThunderScan 4-bit RLE algorithm:    yes
  NeXT 2-bit RLE algorithm:           yes
  LogLuv high dynamic range encoding: yes

 Support for external codecs:
  ZLIB support:                       yes
  Pixar log-format algorithm:         yes
  JPEG support:                       yes
  Old JPEG support:                   yes
  JPEG 8/12 bit dual mode:            no
  ISO JBIG support:                   no
  LZMA2 support:                      yes

  C++ support:                        yes

  OpenGL support:                     yes


Configured wxWidgets 3.2.4 for `x86_64-pc-linux-gnu'

  Which GUI toolkit should wxWidgets use?                 GTK+ 3 with support for GTK+ printing
  Should wxWidgets be compiled into single library?       no
  Should wxWidgets be linked as a shared library?         yes
  Should wxWidgets support Unicode?                       yes (using wchar_t)
  What level of wxWidgets compatibility should be enabled?
                                       wxWidgets 2.8      no
                                       wxWidgets 3.0      yes
  Which libraries should wxWidgets use?
                                       STL                no
                                       jpeg               sys
                                       png                sys
                                       regex              sys
                                       tiff               sys
                                       lzma               no
                                       zlib               sys
                                       expat              sys
                                       libmspack          no
                                       sdl                no

```
Luego, se procede a revisar que todas las bibliotecas que dicen _sys_ esten instaladas dentro del sistema con:
```sh
pkg-config --exists --print-errors <biblioteca sin la terminacion -dev>

```
> Para ejecutar este comando debe tener instalado `pkg-config`, en caso de no tenerlo ejecute
> ```sh
> sudo apt-get install pkg-config
> ```
> <br>

Al correr dicho comando para las bibliotecas: `libpng`, `libregex`, `libtiff`, `zlib` y `expat`, se obtuvo un error encontrando _libregex_ y _libtiff_ por lo que se ejecuta:

```sh
sudo apt-get install libtiff-dev
```
La de regex se deja por fuera por el momento ya que no se pudo encontrar su comando especifico. Y se comprueba su instalacion correcta mediante el siguiente comando ya que 

```sh
find /usr -name "libtiff*.pc"
```

a lo cual genera _/usr/lib/x86_64-linux-gnu/pkgconfig/libtiff-4.pc_ si la instalacion fue correcta.


## Make Sources
```sh
make
```
Opcionalmente se puede ejecutar el siguiente comando donde el 3 simboliza el numero de cores disponibles, por tanto si tiene masun numero de cores distinto a esto puede sustituirlo por su cantidad correspondiente. El especificar `make` unicamente asume 1 core.
```sh
make -j3
```


### Install wxwidgets
```sh
sudo make install
```

### Install library
Tras ejecutar el comando de instalacion se genera el siguiente mensaje:
```
 ------------------------------------------------------
 
 The installation of wxWidgets is finished.  On certain
 platforms (e.g. Linux) you'll now have to run ldconfig
 if you installed a shared library and also modify the
 LD_LIBRARY_PATH (or equivalent) environment variable.
 
 wxWidgets comes with no guarantees and doesn't claim
 to be suitable for any purpose.
 
 Read the wxWindows Licence on licencing conditions.
 
 ------------------------------------------------------

```
En algunos sistemas como Ubuntu, es necesario reconstruir la liberia cache y verificar que la nueva libreria sea encontrada en el sistema, para ello corremos el siguiente comando:
```sh
sudo ldconfig
```

### Test installation
```sh
wx-config --list                // output: "Default config is gtk3-unicode-3.2"
wx-config --version             // output: "3.2.4"
```

### Test by building samples
Asumiendo que nos mantenemos en el directorio _/gtk-build_ entonces ejecutemos los siguientes comandos que nos permiten ejecutar un par de pruebas
```sh
cd samples/minimal
make
./minimal
```
<br>

## Instalacion de FLTK en Ubuntu
Para la instalacion de FLTK, utilizamos como base el siguiente recurso: https://www.youtube.com/watch?v=UUsZAEEn1cw

### Descargamos la ultima version
Retornamos al directorio _/Desktop_ y ejecutamos en terminal los siguientes comandos:
```sh
curl -LJO https://www.fltk.org/pub/fltk/1.3.9/fltk-1.3.9-source.tar.bz2
```

### Descomprimimos y preparamos la compilacion
Donde la `j` ej la bandera `-xjf` funciona para indicar que `tar` debe tratar el archivo como si estuviese comprimido con bzip2, ya que la terminacion del mismo fue .b2z
```sh
tar -xjf fltk-1.3.9-source.tar.bz2

cd fltk-1.3.9

mkdir fltk-build

cd fltk-build
```

> Para el siguiente comando se requiere tener instalado `cmake`, en caso de no tenerlo ejecute:
> ```sh
> sudo apt install cmake
> ```
> <br>
<br>

Habiendo aclarado lo anterior, para la compilacion se ejecutan los siguientes comandos. Se utiliza el comando `cmake`, este se utiliza para generar archivos de construcción (como Makefiles o proyectos de IDE) a partir de un archivo de configuración (CMakeLists.txt) que describe cómo debe compilarse el software en diferentes entornos y plataformas, si nos posicionamos sobre el directorio _/fltk-1.3.9_ y ejecutamos `ls` podremos observar el archivo _CMakeLists.txt_ indicando que es posible compilarlo mediante esta forma:

```sh
cmake ..              // ya que CMakeLists.txt se encuentra en el directorio anterior

make
```
### Instalacion de FLTK
```sh
sudo make install

sudo ldconfig
```

### Comprobacion de la instalacion
Regrese a _/Desktop_ y cree un archivo .cpp en el cual incluya el siguiente codigo:

```cpp
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>

using namespace std;

int main() {
  Fl_Window win(800, 600, "demo");
  win.begin();
  Fl_Button but(20, 20, 68, 25, "New");
  win.end();
  win.show();  
  return Fl::run();
}
```

Luego compile y ejecute en la terminal como se le mostrara a continuacion, se le deberia desplegar un recuadro gris con un boton que dice `New`. En nuestro caso, yo cree un archivo llamado `demoFLTK.cpp` el cual contenia el codigo mostrado previamente, por tanto su compilacion y ejecucion es la siguinete:

```sh
fltk-config --compile demoFLTK.cpp 

./demoFLTK
```