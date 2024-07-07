#include <stdio.h>

#include  "lab03_func.h"

/**
 * 
 * utilizando funções, mostre:

    Os 3 valores em ordem decrescente
    A+B+C
    A*B*C
    Média Aritmética
    Os Fatoriais de A
    (A*B*C)*MAX (A,B,C)

As funções devem estar em um arquivo externo, que deve ser importado no main.

 * 
 */

void decrescente(int a, int b, int c)
{
    if (a >= b && a >= c) {
        if (b >= c) {
            printf("decrescente: %d, %d, %d\n", a, b, c);
        } else {
            printf("decrescente: %d, %d, %d\n", a, c, b);
        }
    } else if (b >= a && b >= c) {
        if (a >= c) {
            printf("decrescente: %d, %d, %d\n", b, a, c);
        } else {
            printf("decrescente: %d, %d, %d\n", b, c, a);
        }
    } else { // c >= a && c >= b
        if (a >= b) {
            printf("decrescente: %d, %d, %d\n", c, a, b);
        } else {
            printf("decrescente: %d, %d, %d\n", c, b, a);
        }
    }
}

void soma(int a, int b, int c)
{
    printf("soma: %i\n", a + b + c);
}

void mult(int a, int b, int c)
{
    printf("mult: %i\n", a * b * c);
}

void media(int a, int b, int c)
{
    printf("media aritmetica: %i\n", (a + b + c) / 3);
}

void fatorialA(int a)
{
    int fator = 1;
    for (int i = a; i >= 1; i--) {
        fator *= i;
    }
    printf("fatorialA: %i\n", fator);
}

void maximo(int a, int b, int c)
{
    //
    puts("falta implementar");
}
