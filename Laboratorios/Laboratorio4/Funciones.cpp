#include "Funciones.hpp"

/*
Implementacion de las funcionde del archivo "Funciones.hpp"
*/

using namespace std;
using namespace std::chrono;

/*
Se ingresan primero las funciones de los diferentes
tipos de algortimos de ordenamiento.
*/

void bubbleSort(int arr[], int n) {
    // for que recorr todo el arreglo (step)
    for (int i = 0; i < n - 1; ++i) {

        // for que realiza cada iteracion
        for (int j = 0; j < n - i - 1; ++j) {

            // Intercambia el valor menor a la posicion
            // del mayor y mediante una variable temporal
            // reasigna el mayor en su posicion correcta
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void selectionSort(int arr[], int n) {
    // for que recorre todo el arreglo (step)
    for (int i = 0; i < n - 1; ++i) {

        // Indice que determina desde donde se comienza cada iteracion
        int min_index = i;

        // Desde ese indice de partida i hasta el final del arreglo
        // ya que busca el nuevo minimo
        for (int j = i + 1; j < n; ++j) {

            // Si el valor en la posicion j es menor que el valor
            // donde teniamos registrado el ultimo minimo entonces
            // actualice la posicion del nuevo minimo a j
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        // luego de hallar el nuevo minimo, intercambie el valor
        // que se encuentra en la posicion donde iniciamos la
        // iteracion por el valor del nuevo minimo encontrado
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

void insertionSort(int arr[], int n) {

    // Recorre el arreglo
    for (int i = 1; i < n; ++i) {

        // Se define el key value
        int key = arr[i];

        // Numero de comparaciones a ejecutar
        int j = i - 1;

        // Busca la posicion del key desplazando los mayores
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }

        // Inserta el key en su posicion correcta
        arr[j + 1] = key;
    }
}

int partition(int arr[], int low, int high) {
    // Define el pivote como el elemento mas a la derecha
    int pivot = arr[high];

    // Inicializa el puntero que lleva la cuenta de la
    // indice anterior al cual se ubicara el pivote
    int i = low - 1;

    // Recorre cada elemento del array
    for (int j = low; j < high; ++j) {

        // pregunta si el numero actual es menor al pivote
        if (arr[j] < pivot) {

            // Si lo es entonces
            ++i;                    // actualice el indice
            int temp = arr[i];      // hace un swap para pasar
            arr[i] = arr[j];        // el elemento menor a la
            arr[j] = temp;          // derecha del pivote
        }
    }

    // Despues de hallar la posicion anterior al pivote
    // sumamos uno a dicha posicion para intercambia el
    // pivote a su indice determinado
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    // Luego retornamos la posicion del pivote
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    // Detiene la recursividad cuando se alcance un array unitario
    if (low < high) {
        // Determina el punto de pivote
        int pi = partition(arr, low, high);

        // Llama recursivamente al algortimo para que ejecute
        // la misma logica de particion para los demas subarreglos
        quickSort(arr, low, pi - 1); // subarreglo derecha
        quickSort(arr, pi + 1, high); // subarreglo izquierda
    }
}

/*
Funcion para generar un array con valores random.
Recuerdese que para el array no se especifica puntero o referencia
ya que por default un array siempre manda su referencia al pasarse
por parametro, ya que se devuelve la direccion del primer elemento.
*/
void generateRandomARray(int arr[], int n) {
    srand(time(0));

    for (int i=0; i<n; ++i) {
        arr[i] = rand() % 1000;
    }
}


/*
A continuacion se especifican las funciones para obtener los tiempos
de ejecucion, donde la primera funcion servira para los algortimos de
BubbleSort, SelectionSort e InsertionSort. Sin embargo, para el algo-
ritmo de ordenamiento QuickSort, debido a los parametros que recibe
debe especificarse un metodo distinto.
*/

// En este caso se recibe por parametro:
// un puntero funcion donde que recibira sus parametros dentro de esta misma funcion
// el arreglo
// su tamanio
// y el nombre del algortimo de ordenamiento
void measuringSortingTime(void (*sortingAlgorithm)(int[], int), int arr[], int n, string algorithmName) {

    // De la clase high_resolution_clock
    // se llama al miembro time_point como tipo de variable siendo este un objeto
    // se almacena en la variable start el resultante de utilizar la funcion miembro now
    // para asi capturar el instante donde inicia la ejecucio
    high_resolution_clock::time_point start = high_resolution_clock::now();

    // Luego se llama al metodo que habia pasado por parametro
    sortingAlgorithm(arr, n);

    // se vuelve a definir otro tipo objeto time point llamado stop donde se
    // almacenara el tiempo en el cual termina de eejcutarse el algoritmo
    high_resolution_clock::time_point stop = high_resolution_clock::now();

    // Hace una conversion a microsegundos utilizando la libreria chrono
    // y establece que duration estara en esta escala y alberga el resultado
    // del tiempo de ejecucion mediante la operacion stop-start.
    std::chrono::microseconds duration = std::chrono::duration_cast<std::chrono::microseconds>(stop-start);
    // auto duration duration_cast<microseconds>(stop - start); // forma alternativa de hacer la linea anterior

    // Imprime el resultado
    cout << "Tiempo de "  << algorithmName << ": " << duration.count() << " microseconds" << endl;
}


// En este caso se recibe por parametro:
// un puntero funcion donde que recibira sus parametros dentro de esta misma funcion
// el arreglo
// su indice minimo
// su indice maximo
// y el nombre del algortimo de ordenamiento
void measurinQuickgSortTime(void (*sortingAlgorithm)(int[], int, int), int arr[], int low, int high, string algorithmName) {

    // Logica similar a la implementada en la funcion anterior
    high_resolution_clock::time_point start = high_resolution_clock::now();
    sortingAlgorithm(arr, low, high);
    high_resolution_clock::time_point stop = high_resolution_clock::now();
    //std::chrono::microseconds duration = std::chrono::duration_cast<std::chrono::microseconds>(stop-start);

    // En este caso se usa auto que basicamente determina o define de manera auntomatica
    // el tipo de variable que sera duration
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Tiempo de "  << algorithmName << ": " << duration.count() << " microseconds" << endl;
}