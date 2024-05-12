# Nombre del programa de salida
# ejecutable final que vamos a tener
TARGET = gestion_estudiantes.exe

# Compilador de C++
# variable para especificar el compilador que usaremos
CXX = g++

# Opciones de compilacion (banderas)
# Definimos las variables de compilacion
# -Wall: stands for warning all and means 'show me all the the 
#        warnings we got during compilation'
# -std=c++11: indicamos la version del compilador
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente
SOURCES = 2_main.cpp 2_estudiante.cpp

# Lista de archivos objeto generados a partir de los archivos fuente
# $: interpreta una variable definida previamente
# (SOURCES:.cpp=.exe): significa que de SOURCES vamos a agrrar de esa lista
# todod lo que termina en cpp y lo cambiaremos por una terminacion exe
OBJECTS = $(SOURCES:.cpp=.exe)

# Regla para compilar los archivos funete en archivos objeto
# Patrones: reglas para lodos los archivos .exe con dependencia
# a su respectivo archivo .cpp
# $< es la dependencia (.cpp)
# $@ es el target (.exe)
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para compilar el programa a partir de los archivos objeto
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Regla para limpiar los archivos generados
# del for windows
# rm for linux
clean:
	rm $(TARGET) $(OBJECTS)