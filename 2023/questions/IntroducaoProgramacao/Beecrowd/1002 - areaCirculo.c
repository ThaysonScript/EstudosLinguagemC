#include <stdio.h>

typedef struct {
    double pi;
} PI;

typedef struct {
    PI pi;
    double area;
    double raio;

} CalcAreaCirculo;

double CalcularAreaCircunferencia()
{
    CalcAreaCirculo calculoAreaCirculo;

    calculoAreaCirculo.pi.pi = 3.14159;

    scanf("%lf", &calculoAreaCirculo.raio);

    calculoAreaCirculo.area = calculoAreaCirculo.pi.pi * (calculoAreaCirculo.raio * calculoAreaCirculo.raio);

    return calculoAreaCirculo.area;
}


void Imprimir(double valorImprimir)
{
    printf("A=%.4lf\n", valorImprimir);
}


int main(void)
{
    CalcAreaCirculo calculoAreaCirculo;

    Imprimir(CalcularAreaCircunferencia());

    return 0;
}






