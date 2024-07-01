#include <stdio.h>

int main(void)
{
    // Conversao de tipos
        int a = 10, b = 20;

        printf("soma: %d\n", a + b);
        printf("subtracao: %d\n", a - b);
        printf("multiplicacao: %d\n", a * b);
        printf("divisao: %f\n\n", (float)a / b);  //usa-se essa nomenclatura === (tipoPrimitivo)Variavel


        //cuidado com as conversoes
        float pi = 3.1415;
        a = (int)pi;    //perde decimal ao ser convertido para inteiro

        printf("valor de a e: %d\n", a);

        /*tipos de operadores

            SOMA = +
            SUBTR = -
            MULT = *
            DIV = /
            RESTO DE DIV = %
            .
            .
            .

        */

        /*tipos de incremento

            pos incremento
            i++ , i-- === i + 1
            i+= 1, i-= 1
            i*= , i/=, i%=

            pre incremento
            ++i ...........

        */








    return 0;
}
