#include <stdio.h>

/*
    Questão 1
    Escreva um código em linguagem C que recebe um número inteiro e indica se aquele é um número primo.
    Isto é, um número que possui apenas dois divisores: o 1 e ele mesmo.
*/

typedef struct {
    int num;

} Primo;




int LerNumero()
{
    Primo primo;

    int numero = primo.num;

    printf("digite um valor primo\n");
    scanf("%d", &numero);

    return numero;
}



int CalcularPrimo(int funcao)
{
    int divisoesAceitas = 0;

    for(int i = 1; i <= funcao; i++) {
        if(funcao % i == 0) {
            divisoesAceitas += 1;
        }
    }
    if(divisoesAceitas == 2) {
        return funcao;   // se e primo
    }
    return 0;   // se nao primo
}


void ImprimirResultado(int result)
{
    if(result == 0) {
        printf("nao e primo");
    }
    else {
        printf("e primo o valor: %d\n", result);
    }
}

int main(void)
{
    ImprimirResultado(CalcularPrimo(LerNumero()));

    return 0;
}











