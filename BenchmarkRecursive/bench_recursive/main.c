#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "appBusca.h"
#include "appClassificacoes.h"

int main() {
    int escolha;
    int numeroBusca;
    int numeroSolicitado;
    int quantNumeros;

    // Solicita ao usuário a quantidade de números aleatórios a serem gerados
    printf("Quantos numeros aleatorios deseja gerar: ");
    scanf("%d", &quantNumeros);

    // Gerar números aleatórios e armazená-los em um arquivo de texto

    int numeros[quantNumeros]; // Armazena os números gerados

    // Loop do menu
    while (1) {
        printf("\nEscolha uma opcao:\n");
        printf("1. Buscar elemento\n");
        printf("2. Classificar elementos\n");
        printf("3. Resultado do Fatorial, Somatorio e Fibonacci\n");
        printf("4. Sair\n");
        printf("Opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                // Solicita ao usuário o número q precisa ser buscado
                printf("Digite o numero a ser buscado: ");
                scanf("%d", &numeroBusca);

                // Chama as funções de busca e exibe o resultado de cada uma
                int posicaoLinear = buscarLinear(numeroBusca, numeros, quantNumeros);
                int posicaoSentinela = buscarSentinela(numeroBusca, numeros, quantNumeros);
                int posicaoBinaria = buscarBinaria(numeroBusca, numeros, quantNumeros);

                if (posicaoLinear != -1) {
                    printf("Numero encontrado na posicao %d (Busca Linear).\n", posicaoLinear);
                }

                if (posicaoSentinela != -1) {
                    printf("Numero encontrado na posicao %d (Busca Sentinela).\n", posicaoSentinela);
                }

                if (posicaoBinaria != -1) {
                    printf("Numero encontrado na posicao %d (Busca Binaria).\n", posicaoBinaria);
                }

                break;
           case 2:
                printf("\nNota: o tempo de algumas classificacoes nao puderam ser colocadas pois estavam dando problema\n");
                // Chamar as funções de classificação
                insertionSort(numeros, quantNumeros);
                bubbleSort(numeros, quantNumeros);
                quickSort(numeros, 0, quantNumeros - 1);
                quickSortIterativo(numeros, quantNumeros);
                mergeSort(numeros, 0, quantNumeros - 1);
                mergeSortIterativo(numeros, quantNumeros);
                selectionSort(numeros, quantNumeros);
                printf("\nNumeros ordenados:\n");
                for (int i = 0; i < quantNumeros; i++) {
                    printf("%d ", numeros[i]);
                }
                printf("\n");
                break;
            case 3:
                
                // Chamar as funções adicionais
                printf("Digite o numero que deseja realizar as operacoes: ");
                scanf("%d", &numeroSolicitado);

                int posicaoOperacaoLinear = buscarLinear(numeroSolicitado, numeros, quantNumeros);

                if (posicaoOperacaoLinear != -1) {
                    printf("Numero encontrado na posicao %d (Busca Linear).\n", posicaoOperacaoLinear);
                } else {
                    break;
                }

                printf("\nFatorial Iterativo de %d: %d\n", numeroSolicitado, fatorialIterativo(numeroSolicitado));
                printf("\nFatorial Recursivo de %d: %d\n", numeroSolicitado, fatorialRecursivo(numeroSolicitado));
                printf("\nSomatorio Iterativo de %d: %d\n", numeroSolicitado, somatorioIterativo(numeroSolicitado));
                printf("\nSomatorio Recursivo de %d: %d\n", numeroSolicitado, somatorioRecursivo(numeroSolicitado));
                printf("\nSequencia de Fibonacci Iterativa até 10 termos:\n");
                fibonacciIterativo(10);
                printf("\nSequencia de Fibonacci Recursiva até 10 termos:\n");
                fibonacciRecursivo(10);
                break;
            case 4:
                printf("\nEncerrando o programa . . .\n");
                exit(0);
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    }

    return 0;
}