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


    //Para tipos inteiros:
        //economizando memoria aceita apenas um short
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

        //aumentando uma variavel do tipo inteira   ld para resgatar o valor, cada l e um long a mais na variavel aceita somente dois longs
            long int x = 2147483647;    //por padrao ocupa 4 bytes
            long long int x1 = 2147483647;
            printf("tamanho em memoria do tipo inteiro e de: %ld bytes \n", sizeof(x));
            printf("tamanho em memoria do tipo inteiro e de: %lld bytes \n", sizeof(x1));

            printf("\n\n");

    //Para tipos float e double:
        //tipos short e long nao sao aceitos
        float xt = 3.1415;
        printf("o tipo float precisa de: %d bytes", sizeof(xt));

        printf("\n\n");

        double yy = 3.1415559853975;
        printf("o tipo double precisa de: %d bytes", sizeof(yy));

        //por isso o float nao precisa de um long pois pra isso tem o double que e o dobro do float
        //por padrao os dois imprimem apenas 6 digitos apos a virgula

        printf("\n\n");


        //usando um long no double
        long double doubAlongado = 3.1415733533422649634;

        __mingw_printf("valor do long double: %.15Lf \n\n", doubAlongado);  //use esse tipo de print pra windows pois o long double e muito grande (16 bytes == 128 bits)

        printf("tipo long double precisa de: %d bytes", sizeof(doubAlongado));














    return 0;
}
