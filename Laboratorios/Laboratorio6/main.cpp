#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>

/*
    Descrpcion
    En este laboratorio se realiza un ejemplo que contempla los conceptos
    de excepciones y templates. En este caso se realiza un template de una
    clase, donde dicha plantilla utiliza el keyword 'typename' ya que es
    perfectamente intercambiable con 'class' en este caso. Dicha clase con-
    tiene:
    - Constructor que inicializa su miembro privado data el cual es un 
    vector de tipo T (parametro).
    - Funcion mean() const ya que no se modificara nada dentro de ella
    mas que una variable dentro de su scope y retorna un valor double,
    su objetivo es calcular la media del vector numerico que reciba
    data.
    - Funcion standardDeviation() const al igual que mean() cuyo proposito
    era calcular la desviacion estandar del vector numerico data.
*/

template <typename T>
class Statistics{
    public:
        // Definicion del constructor
        // Recibe como parametro la referencia constante del vector de tipo T 
        // para evitar que el constructor modifique su contenido original, y 
        // almacena el contenido de ese vector en el vector miembro data.
        Statistics(const std::vector<T>& data) : data(data) {
            // Se aprovechan las funciones del vector para preguntar si esta
            // vacio, y en caso de que sea correcto, al instante de instanciar
            // el objeto con un vector vacio le envia el argumento throw del
            // throw al catch.
            if(data.empty()) {
                throw std::invalid_argument("La lista de datos debe contener elementos.");
            }
        }

        // Funcion que calcula la media
        double mean() const {
            T sum = 0;

            // Para cada elemento (value) en data
            for (const T& value : data) {

                // Se suma dicho elemento a la variable data
                sum += value;
            }

            // Luego se retorna la media como double
            // Se hace solo static_cast a un elemento, ya que
            // ambos al ser ints generan que aunque se pase
            // como float, se pierda precision porque la division
            // entre dos ints genera un entero entonces aunque se
            // pase a double la precision ya se habria perdido
            return static_cast<double>(sum)/data.size();
        }

        // Funcion que calcula la desviacion estandar
        double standardDeviation() const {
            double meanValue = mean(); // se guarda el valor de la media
            double sumSquares = 0; 

            // Para cada elemento (value) en data
            for (const T& value : data) {
                // Se obtiene el resultado de (value-media)^2 y se agrega
                // a la sumatoria
                sumSquares += (value - meanValue) * (value - meanValue);
            }

            // Luego se termina de aplicar la formula
            return std::sqrt(sumSquares/data.size());
        }

    private:
        // vector que contiene los valores numericos o la muestra
        std::vector<T> data;
};


int main() {
    try {
        /*Vector tipo int */
        std::vector<int> intData = {1, 2, 3, 4, 5};

        // Crear una instancia del template, tal que T es un tipo de dato int
        Statistics<int> statsInt(intData);

        // Impresion de los resultados
        std::cout << "Media de intData: " << statsInt.mean() << std::endl;
        std::cout << "Desviacion estandard de intData: " << statsInt.standardDeviation() << std::endl;



        /* Vector del tipo double */
        std::vector<double> doubleData = {1.5, 2.5, 3.5, 4.5, 5.5};

        // Crear una instancia del template, tal que T es un tipo de dato double
        Statistics<double> statsDouble(doubleData);
        std::cout << "Media de doubleData: " << statsDouble.mean() << std::endl;
        std::cout << "Desviacion estandard de doubleData: " << statsDouble.standardDeviation() << std::endl;



        /* Vector vacio*/
        std::vector<int> emptyData;
        Statistics<int> statsEmpty(emptyData); // activa el catch porque el
                                               // constructor manda un throw

    } catch(const std::invalid_argument& e) {
        // Impresion del error mediante e.what y el argumento
        //          const std::invalid_argument& e
        // ya que el throw venia dado por una excepcion de la std
        std::cerr << "Excepcion encontrada: " << e.what() << std::endl;
    }

    return 0;
}