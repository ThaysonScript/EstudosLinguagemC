#include <stdio.h>

typedef struct
{
    int dia, mes, ano;

} Data;

void ImprimirData(Data *x)
{
    printf("%d/%d/%d\n", x->dia, x->mes, x->ano);
}

int main(void)
{
    Data data;
    Data *p;

    p = &data;

    printf("data: %p\tp: %p\n", &data, p);

    data.dia = 29;
    data.mes = 2;
    data.ano = 2021;

    ImprimirData(p);

    printf("%d/%d/%d\n", data.dia, data.mes, data.ano);

    return 0;
}
