#include <stdio.h>

void Resto()
{
    int x, y, menor, restoDivisao;

    scanf("%d", &x);
    scanf("%d", &y);

    if(x > y) {
        menor = y + 1;

        while(menor < x) {
            if(menor % 5 == 2 || menor % 5 == 3) {
                printf("%d\n", menor);
            }
            menor ++;
        }
    }
    else if(x < y) {
        menor = x + 1;

        while(menor < y) {
            if(menor % 5 == 2 || menor % 5 == 3) {
                printf("%d\n", menor);
            }
            menor ++;
        }
    }
}

int main()
{
    /*

    Escreva um programa que leia 2 valores X e Y e
    que imprima todos os valores entre eles cujo resto da divisão dele por 5 for igual a 2 ou igual a 3.

    */

    Resto();

    return 0;
}







