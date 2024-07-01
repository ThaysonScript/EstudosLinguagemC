#include <stdio.h>

typedef struct {

    char nome[50];
    double vendasMes;
    double salarioFixo;
    double salarioFinal;

} Vendendor;

double SalarioBonus()
{
    Vendendor vendendor;

    fgets(vendendor.nome, sizeof(vendendor.nome), stdin);

    scanf("%lf", &vendendor.salarioFixo);
    scanf("%lf", &vendendor.vendasMes);

    vendendor.salarioFinal = ((vendendor.vendasMes * 15) / 100) + vendendor.salarioFixo;

    return vendendor.salarioFinal;
}

void Imprimir(double result)
{
    printf("TOTAL = R$ %.2lf", result);
}

int main(void)
{
    Imprimir(SalarioBonus());

    return 0;
}
