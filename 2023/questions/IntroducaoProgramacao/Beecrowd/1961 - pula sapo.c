#include <stdio.h>

void VerificarPartida()
{
    int alturaPuloSapo;
    int numeroCanos;

    scanf("%d %d", &alturaPuloSapo, &numeroCanos);

    int cano[numeroCanos];

    scanf("%d", &cano[0]);

    for(int i = 1; i < numeroCanos; i++) {
        scanf("%d", &cano[i]);

        if(cano[i] >= cano[i - 1]){
             if((cano[i] - cano[i - 1]) > alturaPuloSapo){
                 printf("GAME OVER\n");
                 return 0;
             }
         }
         else if((cano[i - 1] - cano[i]) > alturaPuloSapo){
         	 printf("GAME OVER\n");
             return 0;
         }
    }
    printf("YOU WIN\n");
}

int main()
{
    VerificarPartida();

	 return 0;
}
