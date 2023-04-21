/*UM BIT
    01
*/

/*UM BYTE
    8 BIT
*/

/*UM KILOBYTE
    1024 BYTES
*/

/*UM MEGABYTE
    1024 KILOBYTES
*/

/*UM GIGABYTE
    1024 MEGABYTE
*/

/*UM TERABYTE
    1024 GIGABYTE
*/

/*UM PETABYTE
    1024 TERABYTE
*/

/*UM EXABYTE
    1024 PETABYTE
*/

/*UM ZETTABYTE
    1024 EXABYTE
*/

/*UM YOTTABYTE
    1024 ZETTABYTE
*/

#include <stdio.h>

int main(void)
{
    //tamanho em memoria de cada tipo
        //tipo int
            int inteiro;
            printf("tamanho em memoria do tipo inteiro e de %d bytes \n", sizeof(inteiro));

        //tipo float
            float flutuante1;
            printf("tamanho em memoria do tipo float e de %d bytes \n", sizeof(flutuante1));

        //tipo double
            double flutuante2;
            printf("tamanho em memoria do tipo double e de %d bytes \n", sizeof(flutuante2));

        //tipo char
            char caractere;
            printf("tamanho em memoria do tipo caractere e de %d bytes \n", sizeof(caractere));

    //--------------------------------------------------------------------------------------------------
    printf("\n\n\n");

    //economizando memoria
        //tipo int  maximo de atribuicao === -32767 ate +32767
            short int inteiro2 = 32767;
            printf("tamanho em memoria do tipo inteiro e de %d bytes \n", sizeof(inteiro2));
            printf("valor atribuido ao tipo inteiro e de %d \n", inteiro2);

            inteiro2++;
            printf("tamanho em memoria do tipo inteiro e de %d bytes \n", inteiro2); //estouro de memoria


    //maior e menor valor inteiro que pode ser atribuido
        int max = 2147483647;
        int min = -2147483648;

        printf("\n\n");

    //aumentando uma variavel do tipo inteira   ld para resgatar o valor, cada l e um long a mais na variavel
        long int x = 2147483647;    //por padrao ocupa 4 bytes
        long long int x1 = 2147483647;
        printf("tamanho em memoria do tipo inteiro e de: %ld bytes \n", sizeof(x));
        printf("tamanho em memoria do tipo inteiro e de: %lld bytes \n", sizeof(x1));

    return 0;
}
