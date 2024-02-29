#ifndef APPCLASSIFICACAO_H
#define APPCLASSIFICACAO_H

void insertionSort(int numeros[], int tamanho);
void bubbleSort(int numeros[], int tamanho);
void quickSort(int numeros[], int baixo, int alto);
void quickSortIterativo(int numeros[], int tamanho);
void mergeSort(int numeros[], int baixo, int alto);
void mergeSortIterativo(int arr[], int tamanho);
void selectionSort(int numeros[], int tamanho);

// Novas Operações

// Função para calcular o fatorial de um número (Iterativo)
int fatorialIterativo(int n);

// Função para calcular o fatorial de um número (Recursivo)
int fatorialRecursivo(int n);

// Função para calcular o somatório de 1 até n (Iterativo)
int somatorioIterativo(int n);

// Função para calcular o somatório de 1 até n (Recursivo)
int somatorioRecursivo(int n);

// Função para calcular os n termos da sequência de Fibonacci (Iterativo)
void fibonacciIterativo(int n);

// Função para calcular os n termos da sequência de Fibonacci (Recursivo)
void fibonacciRecursivo(int n);


#endif