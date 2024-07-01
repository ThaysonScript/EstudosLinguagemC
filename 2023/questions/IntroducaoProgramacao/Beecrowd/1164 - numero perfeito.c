#include <stdio.h>

void Perfeito()
{
    int casoTeste;

    scanf("%d", &casoTeste);

    for(int i = 0; i < casoTeste; i++) {
        int numeroPerfeito;
        int j = 1;
        int verificarPerfeito = 0;

        scanf("%d", &numeroPerfeito);

        while(j < numeroPerfeito) {
            if(verificarPerfeito < numeroPerfeito) {
                verificarPerfeito += j;
            }
            j ++;
        }
        if(verificarPerfeito == numeroPerfeito) {
            printf("%d eh perfeito\n", numeroPerfeito);
        }
        else {
            printf("%d nao eh perfeito\n", numeroPerfeito);
        }
    }
}

int main()
{
    Perfeito();

    return 0;
}
