#include <stdio.h>

typedef struct
{

    int a, b, c, d;

} Valor;


void Calcular()
{
    /*
        Leia 4 valores inteiros A, B, C e D.
        A seguir, se B for maior do que C e se D for maior do que A,
        e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a variável A for par
        escrever a mensagem "Valores aceitos",
        senão escrever "Valores nao aceitos".
    */

    Valor v;

    scanf("%d %d %d %d", &v.a, &v.b, &v.c, &v.d);

    if(v.b > v.c && v.d > v.a && (v.c + v.d) > (v.a + v.b) && v.c > 0 && v.d > 0 && v.a % 2 == 0) {
        printf("Valores aceitos\n");
    } else {
        printf("Valores nao aceitos\n");
    }

}

int main(void)
{
    Calcular();


    return 0;
}
