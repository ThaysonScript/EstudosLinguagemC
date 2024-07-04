#include <stdio.h>

/*

Faça um programa em C que receba 3 números
inteiros retorne:
 -> Os 3 números ordenados

 - Pode-se usar vetores ou não
  - Pode-se usar funções ou não
  - Observe os casos de teste da rubrica

rubrica:

{3, 2, 1}; { 8, 0, -2} ; {1, 2, 3}; {2 2 2}

*/

void ordenarVetor(int array[])
{
    int aux;

     
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
    }

    printf("{%i, %i, %i}", array[0], array[1], array[2]);
}

int main()
{
    int arrayNums[3];

    printf("digite 3 inteiro: ");
    scanf("%i %i %i", (arrayNums + 0), (arrayNums + 1), (arrayNums + 2));

    ordenarVetor(arrayNums);

    printf("\n\nvalores: 0[ %i ] 1[ %i ] 2[ %i ]\n", *(arrayNums + 0), *(arrayNums + 1), *(arrayNums + 2));

    return 0;
}