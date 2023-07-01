#include <stdio.h>

typedef struct {

    double notaA;
    double notaB;

    float pesoNotaA;
    float pesoNotaB;

    double media;

} Notas;

double CalcularMedia()
{
    Notas nota;

    scanf("%lf", &nota.notaA);
    scanf("%lf", &nota.notaB);

    nota.pesoNotaA = 3.5;
    nota.pesoNotaB = 7.5;

    nota.media = ((nota.notaA * nota.pesoNotaA) + (nota.notaB * nota.pesoNotaB)) / 11;

    return nota.media;
}

void Imprimir(double mediaCalculada)
{

    printf("MEDIA = %.5lf\n", mediaCalculada);
}

int main(void)
{
    Imprimir(CalcularMedia());

    return 0;
}
