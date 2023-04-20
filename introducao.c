#include <stdio.h>

int main(void)
{
    //variavel inteiro
    int ValorInteiro;

    //variavel de 1 ponto flutuante
    float Valor1PontoFlutuante;

    //variavel de 2 ponto flutuante
    double Valor2PontoFlutuante;

    //variavel de caractere
    char UmUnicoCaracterLeitura = 'A';  //sempre aspas simples



    //ler valor inteiro de teclado
    scanf("%d", &ValorInteiro);

    //printar valor inteiro de teclado ou valor definido em codigo
    printf("%d", ValorInteiro);



    //ler valor float de teclado
    scanf("%f", &Valor1PontoFlutuante);

    //printar valor float de teclado ou valor definido em codigo
    printf("%f", Valor1PontoFlutuante);




    //ler valor double de teclado
    scanf("%lf", &Valor2PontoFlutuante);

    //printar valor double de teclado ou valor definido em codigo
    printf("%lf", Valor2PontoFlutuante);



    //ler valor char de teclado
    scanf("%d", &UmUnicoCaracterLeitura);

    //printar valor char de teclado ou valor definido em codigo
    printf("%d", UmUnicoCaracterLeitura);

    return 0;
}
