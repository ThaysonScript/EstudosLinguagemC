#include <stdio.h>
#include <stdbool.h>

void ValsCrescDecresc()
{
    int *valorX;
    int *valorY;

    int x, y;

    while(true) {
        scanf("%d %d", &x, &y);

        if(x > y) {
            valorX = &x;
            valorY = &y;
            printf("Decrescente\n");
        }
        else if(x < y) {
            valorX = &x;
            valorY = &y;
            printf("Crescente\n");
        }
        else {
            break;
        }
    }
}

int main()
{
    ValsCrescDecresc();

    return 0;
}
