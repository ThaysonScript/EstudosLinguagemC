#include <stdio.h>

int main(void)
{
    // a = variavel, b = ponteiro, c = ponteiro de ponteiro
    int a = 100, *b, **c;

    // c aponta para um ponteiro e nao para uma variavel comum
    b = &a;
    c = &b;

    printf("endereco de a: %p\tconteudo de a: %d\n\n", &a, a);

    printf("endereco de b: %p\tconteudo de b: %p\n\n", &b, b);

    printf("conteudo apontado por b: %d\n\n", *b);

    printf("endereco de c: %p\tconteudo de c: %p\n\n", &c, c);

    printf("conteudo apontado por c: %d\n", **c);

    return 0;
}
