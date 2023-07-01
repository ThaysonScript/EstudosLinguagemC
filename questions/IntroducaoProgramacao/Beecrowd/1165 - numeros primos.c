#include <stdio.h>

typedef struct
{
    int numero;
    int verifica;
} Primo;

int *ponteiro;

int CalcularPrimo()
{
    Primo primo;
    primo.numero = 0;
    primo.verifica = 0;

    scanf("%d", &primo.numero);

    ponteiro = &primo.numero;

    for(int i = 1; i <= primo.numero; i++) {
        if(primo.numero % i == 0) {
            primo.verifica += 1;
        }
    }

    if(primo.verifica == 2) {
        return primo.numero;
    }
    return -1;
}



void Imprimir(int resultado)
{
    Primo primo;
    if( resultado != -1) {
        printf("%d eh primo\n", resultado);
    }
    else {
        printf("%d nao eh primo\n", *ponteiro);
    }
}


int main(void)
{
    int casoTest;
    int i = 1;

    scanf("%d", &casoTest);

    while(i <= casoTest) {
        Imprimir(CalcularPrimo());
        i += 1;
    }

    return 0;
}
