#include <stdio.h>

/*

Faca um programa que leia 2 valores inteiros e 
chame uma funcao que receba estas 2 variaveis e troque o seu conteudo, 
ou seja, esta funcao e chamada passando duas variaveis A e B 
por exemplo e, apos a execucao da funcao, A contera o valor de B e B
tera o valor de A.

*/

void trocar(int* val1, int* val2) {
    int aux;

    aux = *val1;

    *val1 = *val2;
    *val2 = aux;
}

int main() {
    int val1, val2;

    printf("digite 2 valores inteiros: ");
    scanf("%i %i", &val1, &val2);

    printf("valores antes da troca - val1: %i | val2: %i\n", val1, val2);

    trocar(&val1, &val2);

    printf("valores depois da troca - val1: %i | val2: %i\n", val1, val2);

    return 0;
}