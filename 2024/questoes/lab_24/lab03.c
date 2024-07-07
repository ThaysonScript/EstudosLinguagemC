#include <stdio.h>

#include "lab03_func.h"

/**
 * 
 * Construa um algoritmo que leia 3 números inteiros A, B e C e que, utilizando funções, mostre:

    Os 3 valores em ordem decrescente
    A+B+C
    A*B*C
    Média Aritmética
    Os Fatoriais de A
    (A*B*C)*MAX (A,B,C)

As funções devem estar em um arquivo externo, que deve ser importado no main.

Cada um dos pontos deve ser uma função individual.
 * 
 */

int main() {
    int a, b, c;

    printf("digitar a b c: ");
    scanf("%i %i %i", &a, &b, &c);
    puts("\n");

    decrescente(a, b, c);
    soma(a, b, c);
    mult(a, b, c);
    media(a, b, c);
    fatorialA(a);

    return 0;
}