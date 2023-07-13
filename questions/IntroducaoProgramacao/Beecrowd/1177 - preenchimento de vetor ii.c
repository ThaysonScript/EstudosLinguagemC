#include <stdio.h>

void PreencherVetor()
{
    int t;
    int x = 0;
    int n[1000];

    scanf("%d", &t);

    for(int i = 0; i < 1000; i++) {
        n[i] = x;
        x++;

        if(x == t) {
            x = 0;
        }
        printf("N[%d] = %d\n", i, n[i]);
    }
}

int main()
{
    PreencherVetor();

    return 0;
}









