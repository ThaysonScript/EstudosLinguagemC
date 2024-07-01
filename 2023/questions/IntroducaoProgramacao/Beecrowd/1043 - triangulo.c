#include <stdio.h>

void Triangulo()
{
    double a, b, c, area, perimetro;

    scanf("%lf %lf %lf", &a, &b, &c);

    // forma triangulo ?
    if(((a + b) > c) && ((a + c) > b) && ((b + c) > a)) { //sim
        perimetro = a + b + c;
        printf("Perimetro = %.1lf\n", perimetro);
    }   // nao
    else {
        area = ((a + b) * c) / 2;
        printf("Area = %.1lf\n", area);
    }
}

int main(void)
{
    /*

        Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo.
        Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:

        Perimetro = XX.X

        Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem

        Area = XX.X

    */
    Triangulo();


    return 0;
}
