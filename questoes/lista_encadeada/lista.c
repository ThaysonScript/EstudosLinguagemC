#include <stdio.h>
#include <stdlib.h>

struct Numeros
{
    int inteiro;
    struct Numeros* prox;
};

struct Numeros* inicializarLista(int n) {
    struct Numeros* nums = (struct Numeros*)malloc(sizeof(struct Numeros));

    if (nums == NULL)
        exit(1);

    nums->inteiro = n;
    nums->prox = NULL;

    return nums;
}

void novoNode(struct Numeros* nums, int n) {
    struct Numeros* novoNode;
    struct Numeros* cabeca = nums;

    novoNode = inicializarLista(n);

    novoNode->inteiro = n;

    while (cabeca->prox != NULL) {
        cabeca = cabeca->prox;
    }
    
    cabeca->prox = novoNode;
}


int main () {
    struct Numeros* num;

    num = inicializarLista(1);

    printf("int: %i\n", num->inteiro);
    if (num->prox == NULL)
        printf("num->prox == null\n");

    novoNode(num, 2);
    novoNode(num, 3);
    novoNode(num, 4);
    novoNode(num, 5);
    novoNode(num, 6);
    novoNode(num, 7);
    novoNode(num, 8);
    novoNode(num, 9);
    novoNode(num, 10);
    novoNode(num, 11);

    struct Numeros* atual = num;
    while (atual != NULL) {
        printf("int: %i\n", atual->inteiro);
        atual = atual->prox;
    }


    return 0;
}