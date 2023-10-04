#include <stdio.h>

int main() {

    int a = 10;
    int b, c;

    printf("endereco de a: %p || valor de a: %d\n", &a, a);
    printf("endereco de b: %p || valor de a: %d\n", &b, b);
    printf("endereco de c: %p || valor de a: %d\n", &c, c);

    b = 20;

    c = a + b;

    printf("\n\nendereco de a: %p || valor de a: %d\n", &a, a);
    printf("endereco de b: %p || valor de a: %d\n", &b, b);
    printf("endereco de c: %p || valor de a: %d\n", &c, c);


    return 0;
}