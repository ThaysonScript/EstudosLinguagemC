#include <stdio.h>

int questao2()
{
    /*
        2) Elabore um algoritmo que receba, por meio do teclado, dois valores,
        um para a variável “a” e um
        para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final,
        a variável “a” possua o valor que inicialmente estava em “b”
        e a variável “b” possua o valor que inicialmente estava em “a”.
        Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
    */

    int a, b, c;

    printf("digite valores pra a e b\n\n");
    scanf("%d %d", &a, &b);


    /*  se: a = 10; b = 50

        c = a = 10
        a = b = 50
        b = c = 10

        entao:
        a = 50; b = 10
    */
    c = a;
    a = b;
    b = c;

    printf("valor de a: %d; valor de b: %d\n", a, b);
}


int questao3()
{
    /*
        3) Faça um programa em C para trocar o valor de
        duas variáveis inteiras sem utilizar nenhuma variável auxiliar
    */

    int val1, val2;

    printf("digite valores pra a e b\n\n");
    scanf("%d %d", &val1, &val2);

    val1 = val1 + val2;
    val2 = val1 - val2;
    val1 = val1 - val2;

    printf("\nvalor1:%d; valor2:%d\n", val1, val2);
}


int questao4()
{
    /*
        4) Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
        porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
        Assuma que a conta será dividida igualmente.

    */

    float DespesaRestaurante;
    float Gorjeta;
    int PessoasConta;
    float TotalPagar;

    printf("digite a conta do restaurante, a gorjeta e a quant pessoas\n");
    scanf("%f %f %d", &DespesaRestaurante, &Gorjeta, &PessoasConta);

    Gorjeta = Gorjeta / 100;

    TotalPagar = ((DespesaRestaurante * Gorjeta) + DespesaRestaurante)/PessoasConta;

    printf("total a pagar por pessoa: %.2f", TotalPagar);
}

int questao5()
{
    /*
        5) Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
        número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
        sabendo que são descontados 8% para imposto de renda.

    */

    float GanhaEncanador = 45.00;
    int DiasTrabalhados;
    float Imposto = 0.08;
    float GanhoDias;
    float quantLiquidaGanho;

    printf("\n\ndigite dias trabalhados\n\n");
    scanf("%d", &DiasTrabalhados);

    // qtd do imposto
    GanhoDias = (GanhaEncanador * DiasTrabalhados) * Imposto;

    //
    quantLiquidaGanho = (GanhaEncanador * DiasTrabalhados) - GanhoDias;

    printf("quantidade total ganha depois do imposto: %.2f", quantLiquidaGanho);
}

int questao6()
{
    /*
        6) Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
        como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
        Dólares.
    */

    float CambioDollarReal = 5.30;
    float Real;
    float ValorFinalDollar;

    printf("digite seus reais para serem convertidos em dolares\n");
    scanf("%f", &Real);

    ValorFinalDollar = Real / CambioDollarReal;

    printf("dolares finais que tem: %.2f", ValorFinalDollar);
}

int questao7()
{
    /*
        Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
        conversão para horas, minutos e segundos.
        Exemplo:
        Entrada: 3672
        Saída: 1:1:12
    */

    int Segundos, Minuto, Hora, resto, segundoFinal;

    printf("digite segundos para converter em hora, minuto e segundo\n\n");
    scanf("%d", &Segundos);

    Hora = Segundos / 3600;
    resto = Segundos % 3600;
    Minuto = resto / 60;
    segundoFinal = resto % 60;

    printf("\nhoras:minutos:segundos --->  %d:%d:%d\n", Hora, Minuto, segundoFinal);
}

























int main(void)
{
    int num;

    printf("\ndigite 2, 3, 4, 5, 6 ou 7 para exibir cada questao\n");
    scanf("%d", &num);

    while(num >= 2 && num <= 7) {
        if(num == 2) {
            printf("questao 2\n\n");
            questao2();

            printf("\n\ndigite qualquer numero diferente de 2 a 7 para parar\n\n");
            scanf("%d", &num);

        } else if(num == 3) {
            printf("\n\nquestao 3\n\n");
            questao3();

            printf("\n\ndigite qualquer numero diferente de 2 a 7 para parar\n\n");
            scanf("%d", &num);

        } else if(num == 4) {
            printf("\n\nquestao 4\n\n");
            questao4();

            printf("\n\ndigite qualquer numero diferente de 2 a 7 para parar\n\n");
            scanf("%d", &num);

        } else if(num == 5) {
            printf("\n\nquestao 5\n\n");
            questao5();

        } else if(num == 6) {
            printf("\n\nquestao 6\n\n");
            questao6();

            printf("\n\ndigite qualquer numero diferente de 2 a 7 para parar\n\n");
            scanf("%d", &num);

        } else if(num == 7) {
            printf("\n\nquestao 7\n\n");
            questao7();

            printf("\n\ndigite qualquer numero diferente de 2 a 7 para parar\n\n");
            scanf("%d", &num);

        }
    }
    printf("\n\nfinalizando.........\n\n");


    return 0;
}
