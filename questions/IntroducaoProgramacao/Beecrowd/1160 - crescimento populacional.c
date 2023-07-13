#include <stdio.h>

void CrescimentoPopulacional()
{
    int casoTeste;
    int populacaoA, populacaoB;
    double taxaA, taxaB;

    scanf("%d", &casoTeste);

    for (int i = 0; i < casoTeste; i++) {
        scanf("%d %d %lf %lf", &populacaoA, &populacaoB, &taxaA, &taxaB);

        int count = 0;

        for(count; populacaoA <= populacaoB; count++) {
            if(count > 100) {
                break;
            }
            else {
                populacaoA += (int)(populacaoA * (taxaA / 100));
                populacaoB += (int)(populacaoB * (taxaB / 100));
            }
        }

        if (count > 100) {
            printf("Mais de 1 seculo.\n");
        }
        else {
            printf("%d anos.\n", count);
        }
    }
}

int main()
{
    CrescimentoPopulacional();

    return 0;
}
