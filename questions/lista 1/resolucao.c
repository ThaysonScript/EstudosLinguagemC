#include <stdio.h>

int questao2()
{
    int a, b;
    int a2, b2;

    printf("digite valores pra a e b\n\n");
    scanf("%d %d", &a, &b);

    a2 = b;
    b2 = a;

    printf("valor de a: %d; valor de b: %d\n", a2, b2);
}


int questao3()
{
    int val1, val2;

    printf("digite valores pra a e b\n\n");
    scanf("%d %d", &val1, &val2);

    printf("\nvalor1:%d; valor2:%d\n", val2, val1);
}


int questao4()
{
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

    int Segundos, Minuto, Hora;
    Minuto = 60; //60 segundos === 1 minuto
    Hora = 3600; // 3600 segundos === 1 hora

    printf("digite segundos para converter em hora, minuto e segundo");
    scanf("%d", &Segundos);

    Minuto = Minuto / Segundos;
    Hora = Hora / (Minuto * Segundos);

    printf("horas:minutos:segundos --->  %d:%d:%d", Hora, Minuto, Segundos);
}












int main(void)
{
    int num;

    printf("\ndigite 2, 3, 4, 5, 6 ou 7 para exibir cada questao\n");
    scanf("%d", &num);

    if(num == 2) {
        printf("questao 2\n\n");
        questao2();
    } else if(num == 3) {
        printf("\n\nquestao 3\n\n");
        questao3();
    } else if(num == 4) {
        printf("\n\nquestao 4\n\n");
        questao4();
    } else if(num == 5) {
        printf("\n\nquestao 5\n\n");
        questao5();
    } else if(num == 6) {
        printf("\n\nquestao 6\n\n");
        questao6();
    } else if(num == 7) {
        printf("\n\nquestao 7\n\n");
        questao7();
    } else {
        printf("digite somente valores de 2 a 7");
    }


    return 0;
}
