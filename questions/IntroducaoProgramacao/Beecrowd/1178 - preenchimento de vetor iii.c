#include <stdio.h>

void PreencherVetor()
{
    double x;
    double n[100];

    scanf("%lf", &x);

    for(int i = 0; i < 100; i++) {
        n[i] = x;
        printf("N[%d] = %.4lf\n", i, n[i]);
        x /= 2;
    }
}

int main()
{
    PreencherVetor();

    return 0;
}
