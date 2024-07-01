#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i, tam;

    printf("digite o tamanho do vetor: ");
    scanf("%d", &tam);
    srand(time(NULL));

    int *vet = (int *) malloc(tam * sizeof(int));

    if(vet) {
        printf("memoria alocada com sucesso!\n");
        for(i = 0; i < tam; i++) {
            *(vet + i) = rand() % 100;
        }
        for(i = 0; i < tam; i++) {
            printf("%d ", *(vet + i));
        }
        printf("\n");
    }
    else {
        printf("erro ao alocar memoria!\n");
    }

    return 0;
}
