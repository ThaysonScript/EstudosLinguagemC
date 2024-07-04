#include <stdio.h>

int main() {
    float numF;
    double numD;

    printf("digitar float: ");
    scanf("%f", &numF);

    printf("\ndigitar double: ");
    scanf("%lf", &numD);

    printf("num float e: %.10f\n", numF);
    printf("num double e: %.10lf", numD);

    return 0;
}