#include <stdio.h>

typedef struct
{
    double pi;
    double raio;
    double volume;

} Esfera;

double VolumeEsfera()
{
    Esfera esfera;

    esfera.pi = 3.14159;

    scanf("%lf", &esfera.raio);

    esfera.volume = (4 * esfera.pi * (esfera.raio * esfera.raio * esfera.raio)) / 3;

    return esfera.volume;

}

void Imprimir(double result)
{
    printf("VOLUME = %.3lf\n", result);
}

int main(void)
{
    Imprimir(VolumeEsfera());

    return 0;
}








