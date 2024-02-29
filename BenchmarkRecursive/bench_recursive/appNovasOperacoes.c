#include <stdio.h>

// Função para calcular o fatorial de um número (Iterativo)
int fatorialIterativo(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

// Função para calcular o fatorial de um número (Recursivo)
int fatorialRecursivo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int resultado = n * fatorialRecursivo(n - 1);
    return resultado;
}

// Função para calcular o somatório de 1 até n (Iterativo)
int somatorioIterativo(int n) {
    int resultado = 0;
    for (int i = 1; i <= n; i++) {
        resultado += i;
    }
    return resultado;
}

// Função para calcular o somatório de 1 até n (Recursivo)
int somatorioRecursivo(int n) {
    if (n == 1) {
        return 1;
    }
    int resultado = n + somatorioRecursivo(n - 1);
    return resultado;
}


// Função para calcular os n termos da sequência de Fibonacci (Iterativo)
void fibonacciIterativo(int n) {
    int a = 0, b = 1, proximo;


    for (int i = 0; i < 99; i++) {
        printf("%d, ", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("\n");
}

// Função para calcular os n termos da sequência de Fibonacci (Recursivo)
int fibonacciRecursivoAux(int n, int a, int b) {
    if (n == 0) {
        return a;
    }
    printf("%d, ", a);
    int resultado = fibonacciRecursivoAux(n - 1, b, a + b);
    return resultado;
}

void fibonacciRecursivo(int n) {
    fibonacciRecursivoAux(n, 0, 1);
    printf("\n");
}

