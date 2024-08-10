// Crie um programa que receba uma lista de números do usuário, e salva em um vetor, até que o valor 0 seja digitado.
// Ao fim da entrada:

// O vetor deve passar por um algoritmo bubble sort para ordenar.
// Deve ser exibido ordenado.

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *v, int tamanho) {
    int aux;
    for (int i = 0; i < (tamanho - 1); i++) {
        for (int j = 0; j < (tamanho - 1) - i; j++) {
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

void imprimir(int *v, int tamanho) {
    for (int i = 0; i < tamanho; i++)
        printf("[ %i ] ", v[i]);
    puts("");
}

void desalocar(int *v) {
    free(v);
}

int main() {
    int numero, tamanho = 0;
    int *vetor = NULL;

    while (1) {
        printf("digite numero: ");
        scanf("%i", &numero);

        if (numero == 0) {
            printf("os elementos que foram adicionados ao array: ");
            imprimir(vetor, tamanho);
            break;
        }

        tamanho += 1;
        vetor = realloc(vetor, tamanho * sizeof(int));

        vetor[tamanho - 1] = numero;

        printf("elemento [ %i ] adicionado!\n", vetor[tamanho - 1]);
    }

    printf("\ntamanho do array: %i\n\n", tamanho);

    printf("imprimindo vetor antes do bubble sort: ");
    imprimir(vetor, tamanho);

    printf("imprimindo vetor depois do bubble sort: ");
    bubbleSort(vetor, tamanho);
    imprimir(vetor, tamanho);

    fprintf(stdout, "vetor desalocado!\n");
    desalocar(vetor);

    return 0;
}