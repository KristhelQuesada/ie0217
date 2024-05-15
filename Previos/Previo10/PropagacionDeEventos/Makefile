# Compilador de C++
CXX = g++

# Opciones de compilacion
CXXFLAGS = wx-config --cxxflags

# Opciones de enlazado
LDFLAGS = --libs

# Lista de archivos fuente
SOURCES = MyApp.cpp MainFrame.cpp

# Nombre del ejecutable
EJECUTABLE = try.exe

# La regla predeterminada que se ejecuta cuando escribes 'make'
all: $(EJECUTABLE)
$(EJECUTABLE):
	$(CXX) $(SOURCES) `$(CXXFLAGS) $(LDFLAGS)` -o $(EJECUTABLE)

# Regla para limpiar los archivos compilados (ejecutable)
clean:
	rm -f $(EJECUTABLE)

# Regla para ejecutar el programa
run: $(EJECUTABLE)
	./$(EJECUTABLE)

.PHONY: all clean run