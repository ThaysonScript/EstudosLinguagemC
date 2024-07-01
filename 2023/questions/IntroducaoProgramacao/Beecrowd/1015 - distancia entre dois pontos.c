#include <stdio.h>
#include <math.h>

typedef struct
{
    float x1, y1;
    float x2, y2;
    float distancia;
} Coordenadas;

float CalcularDistancia()
{
    Coordenadas coordenada;

    scanf("%f %f", &coordenada.x1, &coordenada.y1);
    scanf("%f %f", &coordenada.x2, &coordenada.y2);

    coordenada.distancia = sqrt(pow((coordenada.x2 - coordenada.x1), 2) + pow((coordenada.y2 - coordenada.y1), 2));

    return coordenada.distancia;
}

void Imprimir(float distancia)
{
    printf("%.4f\n", distancia);
}

int main(void)
{
    Imprimir(CalcularDistancia());

    return 0;
}
