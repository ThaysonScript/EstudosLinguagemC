#include <stdio.h>

void SomaConsecutiva()
{
    int casoTeste;
    int x, y;
    int somaConsecutiva;

    scanf("%d", &casoTeste);    // 2

    for(int i = 0; i < casoTeste; i++) {
        scanf("%d %d", &x, &y); // 4, 3

        if(x % 2 == 0) {
            somaConsecutiva = 0;
            x += 1;     // 4 + 1 = 5
            for(int j = 0; j < y; j++) {
                somaConsecutiva += x;   // 5
                x += 2;     // 5 + 2 = 7
            }
            printf("%d\n", somaConsecutiva);
        }
        else {
            somaConsecutiva = 0;
            for(int z = 0; z < y; z++) {
                somaConsecutiva += x;
                x += 2;
            }
            printf("%d\n", somaConsecutiva);
        }
    }
}

int main()
{
    /*

    Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir.

    Cada caso de teste consiste de dois inteiros X e Y.

    Você deve apresentar a soma de Y ímpares consecutivos a partir de X
    inclusive o próprio X se ele for ímpar.

    Por exemplo:
    para a entrada 4 5, a saída deve ser 45, que é equivalente à: 5 + 7 + 9 + 11 + 13
    para a entrada 7 4, a saída deve ser 40, que é equivalente à: 7 + 9 + 11 + 13

    */

    SomaConsecutiva();

    return 0;
}















