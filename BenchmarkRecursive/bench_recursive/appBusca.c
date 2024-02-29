#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para buscar um elemento usando a tal da busca linear
int buscarLinear(int elemento, int numeros[], int tamanho) {
    clock_t inicio = clock();
    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] == elemento) {
            clock_t fim = clock();
            double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
            printf("Tempo de busca linear: %.6f segundos\n", tempo);
            return i; // Elemento encontrado
        }
    }
    printf("Busca linear: Elemento não encontrado.\n");
    return -1; // Elemento não encontrado
}

// Função para buscar um elemento usando a busca sentinela
int buscarSentinela(int elemento, int numeros[], int tamanho) {
    clock_t inicio = clock();
    int ultimo = numeros[tamanho - 1];
    numeros[tamanho - 1] = elemento; // Configuração do sentinela
    int i = 0;
    while (numeros[i] != elemento) {
        i++;
    }
    numeros[tamanho - 1] = ultimo; // Restaurar o último elemento
    if (i < tamanho - 1 || numeros[tamanho - 1] == elemento) {
        clock_t fim = clock();
        double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
        printf("Tempo de busca sentinela: %.6f segundos\n", tempo);
        return i; // Elemento encontrado
    } else {
        printf("Busca sentinela: Elemento não encontrado.\n");
        return -1; // Elemento não encontrado
    }
}

// Função para buscar um elemento usando busca binária
int buscarBinaria(int elemento, int numeros[], int tamanho) {
    int inicio = 0; // Movido o 'inicio' aqui para evitar conflito de tipos
    clock_t inicioBusca = clock();

    int fim = tamanho - 1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (numeros[meio] == elemento) {
            clock_t fimBusca = clock();
            double tempo = (double)(fimBusca - inicioBusca) / CLOCKS_PER_SEC;
            printf("Tempo de busca binária: %.6f segundos\n", tempo);
            return meio; // Elemento encontrado
        } else if (numeros[meio] < elemento) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    printf("Busca binária: Elemento não encontrado.\n");
    return -1; // Elemento não encontrado
}
