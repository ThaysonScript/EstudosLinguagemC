#include <stdio.h>

typedef struct
{
    int segundos;
    int minutos;
    int horas;

} Tempo;

void ConversaoTempo()
{
    Tempo tempo;

    scanf("%d", &tempo.segundos);

    tempo.horas = tempo.segundos / 3600;
    tempo.segundos = tempo.segundos - (tempo.horas * 3600);

    tempo.minutos = tempo.segundos / 60;
    tempo.segundos = tempo.segundos - (tempo.minutos * 60);

    ImprimirConversao(tempo.horas, tempo.minutos, tempo.segundos);
}

void ImprimirConversao(int hora, int minuto, int segundo)
{
    printf("%d:%d:%d", hora, minuto, segundo);
}

int main(void)
{
    ConversaoTempo();

    return 0;
}
