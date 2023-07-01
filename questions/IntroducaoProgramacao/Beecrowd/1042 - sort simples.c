#include <stdio.h>

typedef struct
{   int valor1;
    int valor2;
    int valor3;

    int valorTemporario;

} Ordenar;


int LerCalcularOrdenacao()
{
    Ordenar ordenar;

    scanf("%d %d %d", &ordenar.valor1, &ordenar.valor2, &ordenar.valor3);

    Crescentes(ordenar.valor1, ordenar.valor2, ordenar.valor3);
    Imprimir(ordenar.valor1, ordenar.valor2, ordenar.valor3);
}


// enor ao maior
void Crescentes(int valor1, int valor2, int valor3)
{
    Ordenar temporario;

    if (valor1 > valor2) {
        temporario.valorTemporario = valor1;
        valor1 = valor2;
        valor2 = temporario.valorTemporario;
    }

    if (valor1 > valor3) {
        temporario.valorTemporario = valor1;
        valor1 = valor3;
        valor3 = temporario.valorTemporario;
    }

    if (valor2 > valor3) {
        temporario.valorTemporario = valor2;
        valor2 = valor3;
        valor3 = temporario.valorTemporario;
    }

    printf("%d\n%d\n%d\n\n", valor1, valor2, valor3);
}


void Imprimir(int valor1, int valor2, int valor3)
{
    printf("%d\n%d\n%d\n", valor1, valor2, valor3);
}

int main() {

    LerCalcularOrdenacao();

    return 0;
}
