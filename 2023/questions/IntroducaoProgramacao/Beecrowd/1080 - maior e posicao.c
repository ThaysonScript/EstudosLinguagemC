#include <stdio.h>

void MaiorValorPosicao()
{
    int valores[101] = {};
    int valorMaior = 0;
    int posicao;

    for(int i = 1; i <= 100; i++) {
        scanf("%d", &valores[i]);

        if(valores[i] > valorMaior) {
            valorMaior = valores[i];
            posicao = i;
        }
    }
    printf("%d\n", valorMaior);
    printf("%d\n", posicao);
}

int main() {
    /*

    Leia 100 valores inteiros.
    Apresente então o maior valor lido e a posição dentre os 100 valores lidos.

    */

    MaiorValorPosicao();


    return 0;
}




