#include <stdio.h>


void Fibonacci()
{
    int casoTeste, valores;

    unsigned long long int fibo[64];

    fibo[0] = 0;
    fibo[1] = 1;

    for(int i = 2; i <= 62; i++) {
        // calculo completo da sequencia de fibonacci
        fibo[i] = fibo[i - 2] + fibo[i - 1];
    }

    // quantidade de casos
    scanf("%d", &casoTeste);

    // ler somente fibonacci de determinado numero
    for(int j = 0; j < casoTeste; j++) {
        scanf("%d", &valores);  // fibonacci desejado para obter

        printf("Fib(%d) = %llu\n", valores, fibo[valores]);

        // fib(%d) == numero fibonacci lido
        // fibo[valores] == obter o resultado do fibonacci do indice[valores]
    }
}



int main(void)
{
    /*

    Faça um programa que leia um valor e
    apresente o número de Fibonacci correspondente a este valor lido.

    Lembre que os 2 primeiros elementos da série de Fibonacci são 0 e 1 e
    que cada próximo termo é a soma dos 2 anteriores a ele.

    Todos os valores de Fibonacci calculados neste problema
    devem caber em um inteiro de 64 bits sem sinal.

    -----------------ENTRADAS DE TESTE------------------

                    3   caso teste

                    0   fibo do indide 0
                    4   fibo do indice 4
                    2   fibo do indice 2

    */

    Fibonacci();

    return 0;
}














