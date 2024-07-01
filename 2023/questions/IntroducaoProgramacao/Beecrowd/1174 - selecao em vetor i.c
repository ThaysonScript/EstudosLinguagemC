#include <stdio.h>

void SeletorVetor()
{
    double a[100];

    for(int i = 0; i < 100; i++) {
        scanf("%lf", &a[i]);
    }

    for(int j = 0; j < 100; j++) {
        if(a[j] <= 10) {
            printf("A[%d] = %.1lf\n", j, a[j]);
        }
    }
}

int main(void)
{
    SeletorVetor();

    return 0;
}
