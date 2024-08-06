#include <stdio.h>
#include <stdlib.h>
#include "lab06.h"

/*

Crie um código que armazena n valores digitados pelo usuário em um vetor.
Use alocação dinâmica para criar o vetor

 O programa deve ter:

    Uma função que exiba na tela, sem quebra de linha, todos os valores do vetor.
    Uma função que receba o vetor e inverta ele. (Essa função não deve printar).

    As funções devem estar em arquivos separados importados na main.

    A mesma função que exibe o vetor deve ser chamada antes dele ser invertido e novamente logo depois.
    Em ambas as chamadas passando o mesmo vetor para demonstrar que ele foi invertido.

Aviso: Favor lembrar que a linguagem C usa ASCII, assim sendo erros de formatação são frequentes quando tentamos usar acentos. Portanto, sugiro que evitem fazer uso de acentos para melhorar a legibilidade.

Crie um menu para manipular o vetor.

*/

int main()
{
    int *vetor = NULL;
    int tamanhoVetor, escolha;

    while (1)
    {
        escolha = menu();
        
        if (escolha == 1)
        {
            printf("Digitar o tamanho do vetor: ");
            scanf("%i", &tamanhoVetor);

            printf("Sera alocado %i\n", tamanhoVetor);

            vetor = (int *)malloc(tamanhoVetor * sizeof(int));

            for (int i = 0; i < tamanhoVetor; i++)
            {
                printf("Digite o valor para a posicao [ %i ] do vetor: ", i);
                scanf("%i", vetor + i);
            }

            printf("Vetor criado com tamanho de %i\n", tamanhoVetor);
            puts("\nCom valores\n");

            exibirVetor(vetor, tamanhoVetor);
        }
        else if (escolha == 2 && vetor != NULL)
        {
            exibirVetor(vetor, tamanhoVetor);
        }
        else if (escolha == 3 && vetor != NULL)
        {
            puts("Vetor antes de inverter");
            exibirVetor(vetor, tamanhoVetor);

            inverterVetor(vetor, tamanhoVetor);

            puts("Vetor apos ser invertido");
            exibirVetor(vetor, tamanhoVetor);
        }
        else if (escolha == 0)
        {
            puts("Saindo.......");
            break;
        } else {
            puts("Operacao invalida!\n");
            puts("Talves tenha que criar vetor primeiro\n");
        }
    }
    free(vetor);

    puts("programa terminado\n");

    return 0;
}