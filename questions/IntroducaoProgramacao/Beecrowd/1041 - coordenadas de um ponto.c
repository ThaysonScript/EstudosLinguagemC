#include <stdio.h>

typedef struct
{
    float x, y;     // coordenadas de um ponto
} Coordenadas;

void Quadrante()
{
    Coordenadas coordenada;

    scanf("%f %f", &coordenada.x, &coordenada.y);

    if(coordenada.x != 0 && coordenada.y == 0) {
        printf("Eixo X\n");
    }
    else if(coordenada.x == 0 && coordenada.y != 0) {
        printf("Eixo Y\n");
    }
    else if(coordenada.x == 0 && coordenada.y == 0) {
        printf("Origem\n");
    }
    else if(coordenada.x > 0 && coordenada.y > 0) {
        printf("Q1\n");
    }
    else if(coordenada.x < 0 && coordenada.y < 0) {
        printf("Q3\n");
    }
    else if(coordenada.x > 0 && coordenada.y < 0) {
        printf("Q4\n");
    }
    else {
        printf("Q2\n");
    }
}

int main(void)
{
    /*

    Leia 2 valores com uma casa decimal (x e y),
    que devem representar as coordenadas de um ponto em um plano.

    A seguir, determine qual o quadrante ao qual pertence o ponto,
    ou seja, se está sobre um dos eixos cartesianos ou na origem (x = y = 0).

    Se o ponto estiver na origem, escreva a mensagem “Origem”.
    Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”,
    conforme for a situação.

    */
    Quadrante();

    return 0;
}





