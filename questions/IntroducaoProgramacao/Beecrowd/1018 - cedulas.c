#include<stdio.h>

void CalcularNotas()
{
    int cedula;
    int nota100, nota50, nota20, nota10, nota5, nota2, nota1;
    int notaNula;

    scanf("%d",&cedula);

    notaNula = cedula;
    nota100 = notaNula / 100;
    cedula = cedula - (nota100 * 100);

    nota50 = cedula / 50;
    cedula = cedula - (nota50 * 50);

    nota20 = cedula / 20;
    cedula = cedula - (nota20 * 20);

    nota10 = cedula / 10;
    cedula = cedula - (nota10 * 10);

    nota5 = cedula / 5;
    cedula = cedula - (nota5 * 5);

    nota2 = cedula / 2;
    cedula = cedula - (nota2 * 2);

    nota1 = cedula / 1;
    cedula = cedula - (nota1 * 1);

    Imprimir(notaNula, nota100, nota50, nota20, nota10, nota5, nota2, nota1);
}


void Imprimir(int notaNula, int nota100, int nota50, int nota20, int nota10, int nota5, int nota2, int nota1)
{
    printf("%d\n", notaNula);
    printf("%d nota(s) de R$ 100,00\n", nota100);
    printf("%d nota(s) de R$ 50,00\n", nota50);
    printf("%d nota(s) de R$ 20,00\n", nota20);
    printf("%d nota(s) de R$ 10,00\n", nota10);
    printf("%d nota(s) de R$ 5,00\n", nota5);
    printf("%d nota(s) de R$ 2,00\n", nota2);
    printf("%d nota(s) de R$ 1,00\n", nota1);
}

int main(void)
{
    CalcularNotas();

    return 0;
}
