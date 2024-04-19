#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

// Inclusion de las bibliotecas a utilizar
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <string>

// Definicion de los prototipos de las funciones a implementar
void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void generateRandomARray(int arr[], int n);
void measuringSortingTime(void (*sortingAlgorithm)(int[], int),
                          int arr[], int n, std::string algorithmName);
void measurinQuickgSortTime(void (*sortingAlgorithm)(int[], int, int),
                            int arr[], int low, int high, std::string algorithmName);

#endif // FUNCIONES_HPP