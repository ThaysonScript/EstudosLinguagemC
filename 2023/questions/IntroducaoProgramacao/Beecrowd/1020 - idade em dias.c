#include <stdio.h>

typedef struct
{
    int dia;
    int mes;
    int ano;

} IdadePessoa;


int ConversaoIdade()
{
    IdadePessoa idade;

    scanf("%d", &idade.dia);

    idade.ano = idade.dia / 365;
    idade.dia = idade.dia - (365 * idade.ano);

    idade.mes = idade.dia / 30;

    idade.dia = idade.dia - (30 * idade.mes);

    Imprimir(idade.ano, idade.mes, idade.dia);

}

void Imprimir(int param1, int param2, int param3)
{
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",param1, param2, param3);
}






int main(void)
{
    ConversaoIdade();

    return 0;
}














