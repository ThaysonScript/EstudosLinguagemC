#include <stdio.h>

void DuracaoJogo()
{
    int horaInicial, horaFinal, duracaoTotalJogo;
    int duracaoMaxima = 24;

    scanf("%d %d", &horaInicial, &horaFinal);

    if(horaInicial > horaFinal) {
        duracaoTotalJogo = (duracaoMaxima - horaInicial) + horaFinal;
        printf("O JOGO DUROU %d HORA(S)\n", duracaoTotalJogo);
    }
    else if(horaInicial == horaFinal) {
        duracaoTotalJogo = duracaoMaxima;
        printf("O JOGO DUROU %d HORA(S)\n", duracaoTotalJogo);
    }
    else if(horaInicial < horaFinal) {
        duracaoTotalJogo = horaFinal - horaInicial;
        printf("O JOGO DUROU %d HORA(S)\n", duracaoTotalJogo);
    }
}

int main(void)
{
   /*

   Leia a hora inicial e a hora final de um jogo.
   A seguir calcule a duração do jogo,
   sabendo que o jogo pode começar em um dia e terminar em outro,
   tendo uma duração mínima de 1 hora e máxima de 24 horas.

   */

   DuracaoJogo();

    return 0;
}
