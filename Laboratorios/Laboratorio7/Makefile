# Compilador de C++
CXX = g++

# Opciones de compilacion
CXXFLAGS = -Wall -std=c++11

# Opciones de enlazado
LDFLAGS = -lstdc++fs

# Carpetas de direccionamiento
SRC_DIR = src
BIN_DIR = bin

# Lista de archivos fuente
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)

# Lista de archivos generados a partir de los archivos fuente
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(BIN_DIR)/%.exe)

# Archivo ejecutable
EXECUTABLE = $(BIN_DIR)/textprocessor

# Ejecucion de los archivos fuente
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS)

$(BIN_DIR)/%.exe: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpia los archivos .exe creados en la carpeta bin/ sin borrar la carpeta
clean:
	rm $(BIN_DIR)/*

#Para finalizar, luego de que el makefile se halla ejecutado, envie por terminal
#./bin/textprocessor -f data/input.txt -o data/output.txt -search "foo" -replace "bar"