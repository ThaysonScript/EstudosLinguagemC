#include <stdio.h>
#include <stdlib.h>
#include "lab06.h"

/*

Crie um código que armazena n valores digitados pelo usuário em um vetor. 
Use alocação dinâmica para criar o vetor

 O programa deve ter:

    Uma função que exiba na tela, sem quebra de linha, todos os valores do vetor. [ FEITO ]
    Uma função que receba o vetor e inverta ele. (Essa função não deve printar). [ FEITO ]

    As funções devem estar em arquivos separados importados na main. [ FEITO ]

    {
        A mesma função que exibe o vetor deve ser chamada antes dele ser invertido e novamente logo depois.
        Em ambas as chamadas passando o mesmo vetor para demonstrar que ele foi invertido.
    } && [ FEITO ]

Aviso: Favor lembrar que a linguagem C usa ASCII, assim sendo erros de formatação são frequentes quando tentamos usar acentos. 
Portanto, sugiro que evitem fazer uso de acentos para melhorar a legibilidade.

Crie um menu para manipular o vetor.

*/

void exibirVetor(int* v, int t) {
    puts("---------- PRINTANDO VETOR ----------");
    for (int i = 0; i < t; i++) {
        printf("[ %i ] ", *(v + i));
    }
    puts("\n--------------------------------------\n");
}

void inverterVetor(int* vetor, int tamanho) {
    int* inicio = vetor;
    int* fim = (vetor + tamanho - 1);
    int aux;

    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - (i + 1); j++) {
            if (*(vetor + j) < *(vetor + (j + 1))) {
                aux = *(vetor + j);
                *(vetor + j) = *(vetor + (j + 1));
                *(vetor + (j + 1)) = aux;
            }
        }
    }

    // for (int i = 0; i < tamanho; i++) {
    //     aux = *inicio;
    //     *inicio = *fim;
    //     *fim = aux;
    // }
}

int menu() {
    int escolha;

    puts("----------- MENU -----------");
    puts("1 - Criar vetor");
    puts("2 - Exibir vetor");
    puts("3 - Inverter vetor");
    puts("----------------------------");

    printf("escolha: ");
    scanf("%i", &escolha);

    return escolha;
}