/*

1 - Declaração e Inicialização de Ponteiros:
Escreva um programa em C que declare um ponteiro para um inteiro, 
inicialize-o com o endereço de uma variável inteira e depois imprima o valor da variável usando o ponteiro.

2 - Aritmética de Ponteiros:
Crie um programa que declare um array de inteiros e um ponteiro para inteiros. 
Use aritmética de ponteiros para percorrer o array e imprimir seus elementos.

3 - Ponteiros e Arrays:
Escreva uma função que receba um array de inteiros e seu tamanho e retorne o maior valor no array. 
Use ponteiros para acessar os elementos do array.

4 - Alocação Dinâmica de Memória:
Escreva um programa que use malloc para alocar memória para um array de 10 inteiros. 
Preencha o array com valores e depois imprima esses valores. Não se esqueça de liberar a memória alocada com free.

5 - Ponteiros para Funções:
Escreva um programa que declare uma função que recebe dois inteiros e retorna a soma deles. 
Declare um ponteiro para essa função e use-o para chamar a função.

6 - Ponteiros para Estruturas:
Defina uma estrutura Pessoa com campos para nome e idade. Declare um ponteiro para essa estrutura, 
aloque memória para ele usando malloc, preencha os campos e imprima os valores.

7 - Passagem de Ponteiros para Funções:
Escreva uma função que receba um ponteiro para um inteiro e modifique o valor do inteiro. 
No programa principal, declare uma variável inteira, passe seu endereço para a função e depois imprima o valor modificado.

8 - Ponteiros Duplos (Ponteiros para Ponteiros):
Escreva um programa que declare um ponteiro para um ponteiro para um inteiro. 
Alocque memória dinamicamente para o inteiro, atribua um valor a ele e imprima o valor usando o ponteiro duplo.

9 - Strings e Ponteiros:
Escreva uma função que receba uma string e retorne seu comprimento. 
Use ponteiros para percorrer a string.

10 - Ponteiros Constantes e Ponteiros para Constantes:
Explique a diferença entre um ponteiro constante e um ponteiro para um constante, e escreva exemplos de ambos em um programa.

*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    puts("----------------------- QUESTAO 01 --------------------------");
    int inteiro = 10;
    int* pInteiro;
    pInteiro = &inteiro;
    printf("valor apontado pelo endereco inteiro: %i\n", *pInteiro);
    puts("-------------------------------------------------------------\n");

    puts("----------------------- QUESTAO 02 --------------------------");
    puts("Sem alocar dinamicamente, somente com array estatico");
    int arrayInt[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* pArrayInt = &arrayInt;

    for (int i = 0; i < 10; i++) {
        printf("valor de [ %i ] = %i\n", i, *(pArrayInt + i));
    }

    puts("\nAlocando dinamicamente com ponteiros");
    int* arrayPont;
    arrayPont = (int*)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++) {
        printf("endereco alocado ao ponteiro de vetor: [ %p ]\n", (arrayPont + i));

        *(arrayPont + i) = i;
        printf("valor adicionado ao ponteiro de vetor no endereco [ %p ] = %i\n\n", (arrayPont + i), *(arrayPont + i));
    }

    for (int i = 0; i < 10; i++) {
        printf("valor de [ %i ] = %i\n", i, *(arrayPont + i));
    }
    puts("-------------------------------------------------------------\n");

    return 0;
}