#include <iostream>
using namespace std;

/*
DESCRIPCION: Quick Sort
Este programa introduce el algoritmo de ordenamiento Quick Sort investigado
segun lo solicitado. Es un método de ordenamiento muy eficiente. Para ello
se elige un elemento pivote para comenzar y se particiona el arreglo de tal
forma que se agrupan de un lado todos los elementos menores al pivote y del
otro todos los elementos mayores, tal que se sigue la convencion de que los
menores a la izquierda y los mayores a la derecha.

Luego, el proceso se repite de manera recursiva para los demás subarreglos
que vayan saliendo. Los subarreglos se realicen hasta que quedan de tamaño
unitario. En este caso, la complejidad del tiempo de ejecucion es logarítmica
0(nlog n) en el mejor de los casos y en promedio, más puede empeorar en el
peor de los caso si se elige un mal punto de pivote. Por otra parte, para la
complejidad de espacio es de $0(log n)$.

En este caso, la implementacion busca hacer particiones recursivas donde por
cada particion se retorna el pivote el cual servira para determinar los limi-
tes de la siguiente particion asi hasta que el array resultante sea de valor
unitario.
*/

// function to swap elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// function to print the array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

// Función que se encarga de realizar la partición del array
// Esta función divide el array en dos sub-arrays, uno con elementos menores o iguales al pivote y otro con elementos mayores al pivote.
int partition(int array[], int low, int high) {
    
  // Selecciona el pivote como el elemento más a la derecha
  int pivot = array[high];
  
  // Inicializa un puntero que lleva la cuenta de la posicion anterior a donde se debe ubicar el pivote
  int pivot_position = (low - 1);

  // Se recorre cada elemento del array
  for (int j = low; j < high; j++) {

    // pregunta si esa posicion es menor o igual al pivote
    if (array[j] <= pivot) {
      // Si el elemento es menor o igual al pivote actualizamos la posicion del pivote
      pivot_position++;

      // Intercambia el elemento actual con el elemento señalado por el puntero
      // de tal forma que se pasa el menor a la derecha de donde debe quedar el pivote
      cout << "Antes del swap array[i] era: " << array[pivot_position] << " con i o posicion de pivote actualmente en: " << pivot_position << endl;
      cout << "Antes del swap array[j] era: " << array[j] << " con j: " << j << endl;
      swap(&array[pivot_position], &array[j]);
      cout << "Despues del swap array[i] era: " << array[pivot_position] << endl;
      cout << "Despues del swap array[j] era: " << array[j] << endl << endl;

      // Si otra parte el elemento actual es mayor a pivote, no haga nada
      // Este else no es necesario, solo se realizan impresiones para estudiar comportamiento
    } else {
      cout << array[j] << " es mayor que " << array[pivot_position] << " , no se cambia" << endl;
      cout << "array[i] es: " << array[pivot_position] << " con i o posicion de pivote actualmente en: " << pivot_position << endl;
      cout << "array[j] es: " << array[j] << " con j: " << j << endl << endl;
    }
  }
  
  // Una vez se haya recorrido el arreglo completo de tal forma que la posicion de pivote fue definida
  // Intercambia el pivote con el primer elemento mayor al pivote ubicandolo ahora si en su posicion correcta

  // Notese que se le suma uno porque realmente pivot_position
  // indica el indice anterior a su ubicacion real
  cout << "SWAP FINAL" << endl;
  cout << "Antes del swap array[i+1] era: " << array[pivot_position+1] << " con i o posicion de pivote actualmente en: " << pivot_position + 1 << endl;
  cout << "Antes del swap array[high] era: " << array[high] << " con high: " << high << endl;
  swap(&array[pivot_position + 1], &array[high]);
  cout << "Despues del swap array[i+1] es: " << array[pivot_position+1] << " con i o posicion de pivote actualmente en: " << pivot_position + 1 << endl;
  cout << "Despues del swap array[high] es: " << array[high] << " con high: " << high << endl;
  
  // Retorna el índice del pivote
  cout << "--------------------------------------" << endl;
  cout << "Aca termino la definicion de un pivote" << endl;
  cout << "--------------------------------------" << endl << endl;

  // Luego retornamos la direccion del pivote
  return (pivot_position + 1);
}


void quickSort(int array[], int low, int high) {
  // low = min index
  // high = high index

  // se detiene la recursividad hasta que low = high, es decir,
  // se llegue a tener un array de un elemento
  if (low < high) {
      
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on righ of pivot

    // Se retorna el index del pivote
    int pi = partition(array, low, high);

    // recursive call on the left of pivot
    // Se particiona en base al indice del pivote para los elementos
    // de la izquierda o menores al pivote
    quickSort(array, low, pi - 1);

    // recursive call on the right of pivot
    // Se particiona en base al indice del pivote para los elementos
    // de la derecha o mayores al pivote
    quickSort(array, pi + 1, high);
  }
}

// Driver code
int main() {
  int data[] = {20, 10, 80, 40, 70};
  int n = sizeof(data) / sizeof(data[0]);
  
  cout << "Unsorted Array: \n";
  printArray(data, n);
  
  // perform quicksort on data
  quickSort(data, 0, n - 1);
  
  cout << "Sorted array in ascending order: \n";
  printArray(data, n);

  return 0;
}