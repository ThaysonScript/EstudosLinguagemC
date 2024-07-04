#include <stdio.h>

int main() {
    int num1, num2, num3, soma;

    printf("digitar 3 num int: ");
    scanf("%i %i %i", &num1, &num2, &num3);

    soma = num1 + num2 + num3;

    printf("soma e: %i", soma);

    return 0;
}