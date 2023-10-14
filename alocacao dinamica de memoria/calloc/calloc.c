#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // quantos elementos deve alocar == 1
    int *x = (int *) calloc(1, sizeof(int));    // retorna o enderedo dessa alocacao dinamica, se nao conseguir retorna NULL

    if(x) {
        printf("memoria alocada com sucesso!\n");
        printf("x: %d\n", *x);
        *x = 50;
        printf("x: %d\n", *x);
    }
    else {
        printf("erro ao alocar memoria!\n");
    }

    return 0;
}
