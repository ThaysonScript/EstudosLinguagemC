#include <stdio.h>
#include <stdbool.h>

typedef struct {

    double x1, y1;
    double x2, y2;

    double numero, raiz;

} Coordenadas;





double CalcularRaizQuadrada(double numero)
{
    bool booleano = true;
    int tempoCalcularRaiz= 0;


    double estimativaAtual = numero / 2;


    while(booleano) {
        double novaEstimativa = (estimativaAtual + (numero / estimativaAtual)) / 2;

        if(estimativaAtual - novaEstimativa < 0.000001) {
            break;
        }
        estimativaAtual = novaEstimativa;

        tempoCalcularRaiz += 1;
    }
    printf("tempo para calcular a raiz: %d segundos", tempoCalcularRaiz);

    printf("\n\n");

    return estimativaAtual;
}








double CalcularDistanciaDoisPontos(double x1, double y1, double x2, double y2)
{
    double distancia;
    double calculos = (((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    distancia = CalcularRaizQuadrada(calculos);

    return distancia;
}









int main(void)
{
    double resultadoDistancia;
    Coordenadas coordenada;


    printf("digite coordenadas x1 y1: ");
    scanf("%lf %lf", &coordenada.x1, &coordenada.y1);

    printf("\n\n");

    printf("digite coordenadas x2 y2: ");
    scanf("%lf %lf", &coordenada.x2, &coordenada.y2);


    resultadoDistancia = CalcularDistanciaDoisPontos(coordenada.x1, coordenada.y1, coordenada.x2, coordenada.y2);

    printf("\n\n");

    printf("distancia = %.4lf", resultadoDistancia);

    return 0;
}
