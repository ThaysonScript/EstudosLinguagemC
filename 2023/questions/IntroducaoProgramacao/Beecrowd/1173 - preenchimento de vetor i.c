#include <stdio.h>

void PreencherVetor()
{
    int n[10];
    int valor;

    scanf("%d", &valor);
    for(int i = 0; i < 10; i++) {
        if(n[0] >= 1) {
            n[i] = valor;

            printf("N[%d] = %d\n", i, n[i]);
            valor *= 2;
        }
        else if(n[0] <= 0) {
            n[i] = valor;
            printf("N[%d] = %d\n", i, n[i]);
            valor *= 2;
        }
        else {
            printf("N[%d] = %d\n", i, n[i]);
        }
    }
}

int main()
{
    /*

    Leia um valor e faça um programa que coloque o valor lido na primeira posição de um vetor N[10].
    Em cada posição subsequente, coloque o dobro do valor da posição anterior.
    Por exemplo, se o valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o vetor em seguida.

    */

    PreencherVetor();

    return 0;
}
