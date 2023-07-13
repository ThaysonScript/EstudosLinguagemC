#include <stdio.h>

void TrocarVetor()
{
    int n[20];

    for(int i = 19; i >= 0; i--) {
        scanf("%d", &n[i]);
    }

    for(int j = 0; j < 20; j++) {
        printf("N[%d] = %d\n", j, n[j]);
    }
}

int main(void)
{
    TrocarVetor();

    return 0;
}
