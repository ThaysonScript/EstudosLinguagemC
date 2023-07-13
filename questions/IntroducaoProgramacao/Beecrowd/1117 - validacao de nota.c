#include <stdio.h>
#include <stdbool.h>

void MediaSemestral()
{
    do {
        float avaliacao, media, avaliacaoTotal;
        avaliacaoTotal = 0;

        scanf("%f", &avaliacao);

        if(avaliacao < 0 || avaliacao > 10) {
            printf("nota invalida\n");
        }
        else {
            avaliacaoTotal += avaliacao;

            scanf("%f", &avaliacao);

            if(avaliacao < 0 || avaliacao > 10) {
                printf("nota invalida\n");

                while(avaliacao < 0 || avaliacao > 10) {
                    scanf("%f", &avaliacao);

                    if(avaliacao >= 0 && avaliacao <= 10) {
                        avaliacaoTotal += avaliacao;

                        media = avaliacaoTotal / 2;

                        printf("media = %.2f\n", media);
                        break;
                    }
                    else {
                        printf("nota invalida\n");
                    }
                }
                if(avaliacao >= 0 && avaliacao <= 10) {
                    break;
                }
                // printf("escopo do if");
            }
            else {
                avaliacaoTotal += avaliacao;

                media = avaliacaoTotal / 2;

                printf("media = %.2f\n", media);
                break;
            }
        }

    } while(true);
}

int main()
{
    /*

    Faça um programa que leia as notas referentes às duas avaliações de um aluno.
    Calcule e imprima a média semestral. Faça com que o algoritmo só aceite notas válidas
    (uma nota válida deve pertencer ao intervalo [0,10]).
    Cada nota deve ser validada separadamente.

    Entrada
    A entrada contém vários valores reais, positivos ou negativos.
    O programa deve ser encerrado quando forem lidas duas notas válidas.

    Saída
    Se uma nota inválida  for lida,
    deve ser impressa a mensagem "nota invalida".
    Quando duas notas válidas forem lidas,
    deve ser impressa a mensagem "media = " seguido do valor do cálculo.
    O valor deve ser apresentado com duas casas após o ponto decimal.

    */

    MediaSemestral();

    return 0;
}



