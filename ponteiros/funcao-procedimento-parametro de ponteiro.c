#include <stdio.h>

//        receber endereco idade
void Imprimir(int *num)
{
    // imprimir valor do endereco idade
    printf("antes de alterar a idade: %d\n", *num);

    // alterar o valor apontado pelo endereco idade
    *num = 80;
}

int main(void)
{
    int idade = 35; //  apos passar pelo procedimento o valor e alterado pra 80

    // jogar endereco idade
    Imprimir(&idade);

    printf("depois de alterar a idade: %d\n", idade); //  valor da idade alterada apos passar pelo procedimento

    return 0;

    // ao passar um array como parametro o seu valor sempre sera alterado pois o array sempre sera um ponteiro
}
