#include <stdio.h>

/**
 *
 * Use comandos iterativos e funções na solução.

Faça um programa em C que receba 3 números inteiros retorne:

- O maior dos 3;

- O menor dos 3;

- Quais são positivos e quais são negativos;

- Quais são pares e quais são ímpares.
 *

rubrica:

 {3, 2, 1}; { 8, 0, -2} ; {1, 2, 3}; {2 2 2}
 */

int maiorF(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int menorF(int a, int b, int c)
{
    if (a < b && a < c)
    {
        return a;
    }
    else if (b < a && b < c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

void posNeg(int a, int b, int c) {
    if (a > 0) {
        printf("positivo: %i", a);
    }

    if (b > 0) {
        printf("positivo: %i", b);
    }

    if (c > 0) {
        printf("positivo: %i", c);
    }


    if (a < 0) {
        printf("negativo: %i", a);
    }

    if (b < 0) {
        printf("negativo: %i", b);
    }

    if (c < 0) {
        printf("negativo: %i", c);
    }
}

void parImpar(int a, int b, int c) {
    if (a % 2 == 0) {
        printf("a = par");
    }

    if (b % 2 == 0) {
        printf("b = par");
    }

    if (c % 2 == 0) {
        printf("c = par");
    }


    if (a % 2 == 1) {
        printf("a = impar");
    }

    if (b % 2 == 1) {
        printf("b = impar");
    }

    if (c % 2 == 1) {
        printf("c = impar");
    }
}

int main()
{
    int num1, num2, num3, maior, menor;

    printf("digitar 3 num: ");
    scanf("%i %i %i", &num1, &num2, &num3);

    maior = maiorF(num1, num2, num3);
    menor = menorF(num1, num2, num3);

    printf("maior: %i\n", maior);
    printf("menor: %i\n", menor);

    posNeg(num1, num2, num3);
    parImpar(num1, num2, num3);

    return 0;
}