# Nombre del programa de salida
# ejecutable final que vamos a tener
TARGET = try.exe

# Compilador de C++
# variable para especificar el compilador que usaremos
CXX = g++

# Opciones de compilacion (banderas)
CXXFLAGS = -std=c++11

# Lista de archivos fuente
SOURCES = main.cpp ValidadorEmail.cpp Funciones.cpp

# Lista de archivos objeto generados a partir de los archivos fuente
OBJECTS = $(SOURCES:.cpp=.exe)

# Regla para compilar los archivos fuente en archivos objeto
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para compilar el programa a partir de los archivos objeto
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Regla para limpiar los archivos generados
.PHONY: clean
clean:
	rm $(TARGET) $(OBJECTS)