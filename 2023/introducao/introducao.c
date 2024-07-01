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

    // outra forma de ler um char do teclado
    char letra;
    letra = getchar();

    // mais uma forma de ler char pelo teclado
    char outraLetra;
    outraLetra = getc(stdin);   //stdin == entrada padrao do teclado

    // ler um arquivo com char ou cadeia de caracteres
    char maisLetras;
    maisLetras = fgetc(arquivoLeitura/teclado);


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
    scanf("%c", &UmUnicoCaracterLeitura);

    //printar valor char de teclado ou valor definido em codigo
    printf("%c", UmUnicoCaracterLeitura);


    /* limitar decimais
    printf("%.quantosDecimaisTipoVariavel", Variavel em questao);
    */

    //pular linha
    // \n

    /*entendendo buffer de teclado
        antes dos valores serem atribuidos as variaveis tera uma especie de lixo de memoria
        quando o valor e atribuido a variavel esse lixo e removido
        sempre use espaco nos %c para remover esse buffer
        quando feito isso na leitura o tab, espace e enter sera removido, limpando o buffer
        sempre que tiver erro na leitura do tipo char tente colocar o space
    */

    return 0;
}
