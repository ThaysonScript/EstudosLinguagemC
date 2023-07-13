#include <stdio.h>
#include <stdlib.h>

// ponteiro ocupa 8 bytes de memoria

int main()
{
    int num = 10;

    // DEFININDO UM PONTEIRO
    int *p;

    // atribuindo valor a um ponteiro
    p = &num;   // ponteiro recebe somente endereco de memoria de uma variavel ( nesse caso a de num )

    // imprimindo uma variavel normal
    printf("o valor da variavel num e: %d\n", num);

    // imprimindo o endereco de memoria dessa variavel
    printf("\nendereco de memoria da variavel num e: %p\n", &num);

    // imprimindo o valor de p( ponteiro ) ou seja, recebe o valor do endereco de memoria a ele atribuido, no caso o endereco de num
    printf("\no valor atribuido a p e: %p\n", p);   // recebe o endereco de memoria de num

    // imprimindo o valor que foi apontado por p ( ja que o endereco de memoria guarda um valor de um tipo de variavel, vamos obte-lo abaixo ), no caso o valor de num
    printf("\no valor que foi apontado por p e: %d\n", *p);


    // NAO CONFUNDIR COM O ENDERECO EM SI DO TIPO PONTEIRO
    // O PONTEIRO RECEBE ATRIBUICOES SOMENTE DE ENDERECOS DE MEMORIA
    // MAS CADA TIPO DE DADOS TEM TAMBEM EM SI O SEU ENDERECO DE MEMORIA COMO O PONTEIRO
    // MAIS ESPECIFICO, EXEMPLO:
        // INT *PONTEIRO;
        // PONTEIRO === A UM ENDERECO DE MEMORIA PROPRIO
        // PONTEIRO = 000000000000000000SF35G;  VALOR QUE FOI ATRIBUIDO AO PONTEIRO
        // PRINT NO PONTEIRO === 000000000000000000SF35G PEGAR O QUE FOI ATRIBUIDO
        // PRINT NO ENDERECO DO PONTEIRO %P, &P ======== UM ENDERECO ONDE A MEMORIA GUARDA O TIPO PONTEIRO EM SUA MEMORIA
    printf("\no endereco de memoria do tipo ponteiro p e: %p\n", &p);


    // tamanho em bytes de um tipo ponteiro
    int *pont;
    printf("ponteiro tamanho em bytes: %d\n", sizeof(pont));    // no caso sempre vai ser 8 bytes que e o tamanho do endereco do tipo ponteiro

    return 0;
}
