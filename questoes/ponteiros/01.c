#include <stdio.h>

/*

Escreva um programa que declare um inteiro, um real e um char, e ponteiros para 
inteiro, real, e char. Associe as variaveis aos ponteiros (use &). 
Modifique os valores de cada variavel usando os ponteiros. 
Imprima os valores das variaveis antes e apos a modificacao.

*/

int main() {
    int inteiro;
    float real;
    char caractere;

    int* pInteiro;
    float* pReal;
    char* pCaractere;

    pInteiro = &inteiro;
    pReal = &real;
    pCaractere = &caractere;

    puts("-------------------------- INTEIRO ---------------------------");
    printf("endereco do inteiro: %p\n", &inteiro);
    printf("endereco atribuido ao pInteiro do inteiro: %p\n", pInteiro);
    puts("--------------------------------------------------------------\n");

    puts("-------------------------- REAL ---------------------------");
    printf("endereco do real: %p\n", &real);
    printf("endereco atribuido ao pReal do real: %p\n", pReal);
    puts("--------------------------------------------------------------\n");

    puts("-------------------------- CARACTERE ---------------------------");
    printf("endereco do caractere: %p\n", &caractere);
    printf("endereco atribuido ao pCaractere do caractere: %p\n", pCaractere);
    puts("--------------------------------------------------------------\n");

    puts("---------- VALORES DAS VARIAVEIS ANTES DE ATRIBUIR VALOR ATRAVES DO PONTEIROS --------------");

    printf("valor do inteiro: %i\n", inteiro);
    printf("valor do real: %f\n", real);
    printf("valor do caractere: %c\n", caractere);
    puts("--------------------------------------------------------------\n");

    puts("Modificando os valores das variaveis atraves do ponteiro");
    *pInteiro = 10;
    printf("valor do inteiro atraves do *pInteiro e: %i\n", *pInteiro);
    printf("valor do inteiro atraves da propria variavel: %i\n", inteiro);
    puts("--------------------------------------------------------------\n");

    *pReal = 10.3349;
    printf("valor do real atraves do *pReal e: %f\n", *pReal);
    printf("valor do real atraves da propria variavel: %f\n", real);
    puts("--------------------------------------------------------------\n");

    *pCaractere = 'B';
    printf("valor do caractere atraves do *pCaractere e: %c\n", *pCaractere);
    printf("valor do caractere atraves da propria variavel: %c\n", caractere);
    puts("--------------------------------------------------------------\n");

    return 0;
}