#include <stdio.h>

// FUNCOES E PROCEDIMENTOS RECURSIVOS SAO FUNCOES/PROCEDIMENTOS QUE CHAMAM A SI MSM

int Imprimir(int numero)
{
    if(numero == 0) {
        printf("%d ", numero);
    }
    else {
        printf("%d ", numero);  // imprima numero
        Imprimir(numero - 1);   // chamar funcao novamente com -1 ate ser == 0, entao termina chamadas e desembrulha valores armazenados em pilha
    }
}



int main(void)
{
    int n;

    printf("digite numero maior que zero\n\n");
    scanf("%d", &n);

    Imprimir(n);

    return 0;
}
