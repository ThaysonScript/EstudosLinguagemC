#include <stdio.h>

typedef struct
{
    float valores[6];
    int positivos;
    float soma;

} Valores;

int *ponteiro;

float LerCalcularPositivosMedia()
{
    Valores v;
    v.positivos = 0;

    // ler 6 valores
    for(int i = 0; i < 6; i++) {

        scanf("%f", &v.valores[i]);

        if(v.valores[i] >= 0) {

            v.positivos++;
            v.soma += v.valores[i];
        }
    }

    ponteiro = v.positivos;

    v.soma = v.soma / v.positivos;

    return v.soma;
}

void Imprimir(float soma)
{
    printf("%d valores positivos\n", ponteiro);
    printf("%.1f\n", soma);
}

int main(void)
{
    Imprimir(LerCalcularPositivosMedia());


    return 0;
}
