#include <stdio.h>
#include <math.h>

typedef struct
{
    double A, B, C, delta, R1, R2;

} Valores;

void CalcularRaiz()
{
    Valores valor;

    scanf("%lf %lf %lf", &valor.A, &valor.B, &valor.C);

    valor.delta = (valor.B * valor.B) - (4 * valor.A * valor.C);

    if((2 * valor.A) == 0 || valor.delta < 0) {
        printf("Impossivel calcular\n");
    }
    else {
        valor.R1 = (-valor.B + sqrt(valor.delta)) / (2 * valor.A);

        valor.R2 = (-valor.B - sqrt(valor.delta)) / (2 * valor.A);

        printf("R1 = %.5lf\n", valor.R1);
        printf("R2 = %.5lf\n", valor.R2);
    }
}

int main(void)
{
    /*

    Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara.
    Se não for possível calcular as raízes,
    mostre a mensagem correspondente “Impossivel calcular”,
    caso haja uma divisão por 0 ou raiz de numero negativo.

    */
    CalcularRaiz();

    return 0;
}





