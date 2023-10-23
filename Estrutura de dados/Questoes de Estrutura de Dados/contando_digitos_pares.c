#include <stdio.h>

/*
Escreva uma função recursiva chamada ContaDigitosPares que receba como entrada um número e retorne a quantidade de dígitos pares que o compõem.

Ex: 234 tem 3 dígitos, mas apenas 2 são pares
*/

int ContaDigitosPares(int numero) {
    if (numero <= 0) {
        return 0;
    } else {
        int resto_numero = numero % 10;

        if (resto_numero % 2 == 0) {
            return 1 + ContaDigitosPares(numero / 10);
        } else {
            return ContaDigitosPares(numero / 10);
        }
    }
}

int main(void) {
    int num;

    scanf("%d", &num);

    int quantidadeDigitosPares = ContaDigitosPares(num);

    printf("%d\n", quantidadeDigitosPares);

    return 0;
}