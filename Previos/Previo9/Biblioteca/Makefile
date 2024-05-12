# Makefile para compilar un programa C++ con multiples archivos y clases
# esto permite que la compilacion solo suceda en los archivos modificados
# y no en todos, lo cual es un proceso mas optimo de compilado
# Nombre del programa de salida, es decir, ejecutable final
TARGET = gestion_biblioteca.exe

# Objetivo predeterminado
# Por defecto cuanod no le pasamos el nombre de un target entonces
# va a buscar el que se llame all, de lo contrario usa el primero
# que se encuentra
all: $(TARGET)

# Compilador a utilizar de C++
CXX = g++

# Opciones de compilacion (banderas)
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente
SOURCES = Libro.cpp Biblioteca.cpp main.cpp

# Lista de archivos objeto generados a partir de los archivos fuente
OBJECTS = $(SOURCES:.cpp=.exe)

# Regla para compilar los archivos funete en archivos objeto
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para compilar el programa a partir de los archivos objeto
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Regla para limpiar los archivos generados
# Phony para indicar que no es un archivo sino una funcion
.PHONY: clean
clean:
	rm $(TARGET) $(OBJECTS)