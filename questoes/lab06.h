#ifndef LAB06_H
#define LAB06_H

/*

Crie um código que armazena n valores digitados pelo usuário em um vetor. 
Use alocação dinâmica para criar o vetor

 O programa deve ter:

    Uma função que exiba na tela, sem quebra de linha, todos os valores do vetor.
    Uma função que receba o vetor e inverta ele. (Essa função não deve printar).

    As funções devem estar em arquivos separados importados na main.

    A mesma função que exibe o vetor deve ser chamada antes dele ser invertido e novamente logo depois. 
    Em ambas as chamadas passando o mesmo vetor para demonstrar que ele foi invertido.

Aviso: Favor lembrar que a linguagem C usa ASCII, assim sendo erros de formatação são frequentes quando tentamos usar acentos. 
Portanto, sugiro que evitem fazer uso de acentos para melhorar a legibilidade.

Crie um menu para manipular o vetor.

*/

void exibirVetor(int* v, int t);
void inverterVetor(int* v, int t);
int menu();

#endif