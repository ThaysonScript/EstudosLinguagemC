// Implemente uma FUNÇÃO RECURSIVA para fazer uma busca binária em um vetor.

// O Vetor pode ser previamente preenchido, mas os valores devem ser mostrados para o usuário.
// Caso o Vetor seja preenchido pelo usuário, lembre-se que é necessário que o vetor esteja ordenado para fazer a busca binária.
// O programa deve buscar o valor selecionado pelo usuário, e caso não esteja na lista ele deve indicar isso.

#include <stdio.h>

int buscaBinaria(int ini, int fim, int *vetor, int busca) {
    int meio = (ini + fim) / 2;

    if (ini > fim)
        return -1;                                              // inicio maior que fim, elemento nao encontrado

    else if (busca == vetor[meio])
        return meio;                                            // busca igual ao meio

    else if (busca > vetor[meio])
        return buscaBinaria((meio + 1), fim, vetor, busca);     // busca maior que meio

    else if (busca < vetor[meio])
        return buscaBinaria(ini, (meio - 1), vetor, busca);     // busca menor que meio
}

int main() {

    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int busca = 3;
    int tam_array = sizeof(vetor) / sizeof(vetor[0]);

    puts("Vetor previamente preenchido:");
    for (int i = 0; i < tam_array; i++)
        printf("[ %i ] ", vetor[i]);

    puts("");
    printf("item de busca: %i\n", busca);

    int indice = buscaBinaria(0, (tam_array - 1), vetor, busca);

    if (indice != -1)
        printf("\nValor %d encontrado na posição %d.\n", busca, indice);
    else
        printf("\nValor %d não encontrado.\n", busca);

    return 0;
}