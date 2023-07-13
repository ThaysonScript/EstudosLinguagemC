#include <stdio.h>

void Imprimir(int vet[], int tam)
{
    int i;
    for(i = 0; i < tam; i++) {
        printf("%d ", *(vet + i));  // vet == endereco do vetor no indice 0 somado ao i e depois pegar o endereco dessa soma que e igual a impressao sequencial do vetor
    }
    printf("\n");
}

int main(void)
{
    int vet[10] = {45, 89, 68, 25, 17, 76, 34, 29, 57, 44};

    Imprimir(vet, 10);

    return 0;
}
