# Compilador de C++
# variable para especificar el compilador que usaremos
CXX = g++

# Opciones de compilacion (banderas)
CXXFLAGS = -std=c++11

# Opciones de enlace
LDFLAGS =  -lstdc++fs

# Se declaran los Phony targets para evitar conflictos con archivos reales
.PHONY: all build run clean

# Definicion de los directorios a los cuales se tendra acceso
SRC_DIR = src
BIN_DIR = src

# Lista de archivos fuente
SOURCES = $(wildcard $(SRC_DIR)/*.cpp) # Archivos fuente

# Lista de archivos .exe generados a partir de los .cpp
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(BIN_DIR)/%.exe) # Ejecutables generados de los .cpp

# Archivo que se va a ejecutar
EJECUTABLE = tarea5.x # Archivo ejecutable principal

# Default target: busca construir y ejecutar el programa
all: build run

# Compila el programa
build: $(EJECUTABLE)

# Regla para enlazar el programa
$(EJECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $@ $(LDFLAGS)

# Regla que compila los archivos .cpp a .exe
$(BIN_DIR)/%.exe: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


# Regla para limpiar los archivos generados
clean:
	rm -f $(BIN_DIR)/*.exe $(EJECUTABLE)

# egla para la ejecucion
run:
	./$(EJECUTABLE)