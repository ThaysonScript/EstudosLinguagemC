#include <stdio.h>
#include <string.h>

int LendoStringTeclado()
{
    char cadeiaPalavras[] = {""}; //tem que especificar o tamanho ou uma atribuicao, caso tenha atribuicao definida o scanf vai sobreescrever o valor inicial

    printf("digite letras para a string\n");

    // nao pode referenciar endereco ao  atribuir uma string
    //scanf("%s", cadeiaPalavras);    // por padrao scanf ler ate achar um 1 espaco, caso encontre ele vai atribuir somente o que foi digitado antes desse espaco

    //printf("%s\n", cadeiaPalavras);


    // concertando o scanf para strings
        /*
            coloque [^\n] na leitura
            scanf("%[^\n]", cadeiaPalavras);    isso fara ser digitado tudo ate que vc precione enter

            ! ainda vai ter problema de tamanho caso seja definido, a quantidade ainda passara da especificada

            para isso use scanf("%20[^\n]", cadeiaPalavras);

            a funcao gets() e igual ao scanf com as alteracoes acima, entao nunca a use!
        */


    // leitura segura de string por teclado ( sempre faca desse jeito quando for ler string )

        char frase[20] = {""};

        printf("digite uma string\n");

        // por padrao consome o ultimo caractere como delimitador de final de string, ex: string[15] == valorFinal[14] ,  caracterFinalString == \0
        fgets(frase, 20, stdin);    // param1 == identificador,     param2 == tamanho,  param3 == que tipo de entrada, no caso, teclado

        printf("\n%s\n", frase);
}








int TamanhoString()
{
    int i, tam = 0;

    char palavras[55] = {"oi, vamos aprender a programar com a linguagem c?"};

    //fgets(palavras, 55, stdin);

    i = 0;

    while(palavras[i] != '\0'){
        if(palavras[i] == '\n'){
            palavras[i] = '\0';
        }
        i++;
    }

    i = 0;
    while(palavras[i] != '\0') {
        tam++;
        i++;
    }
    printf("\nTamanho da string e: %d", tam);



    // se desejar usar uma funcao pronta para saber o tamanho de uma string import a lib string.h e use o strlen no printf
        printf("%\nTamanho e: %d\n", strlen(palavras));




    // concatenar strings, importe a lib string.h
        char oi[5] = {"oi."};
        char bomDia[15] = {" bom dia"};     // sempre adicione um spaco no inicio pois a funcao de concatenacao strcat usa o \0 para juntar uma string em outra

        strcat(oi, bomDia);

        printf("\n%s\n", oi);









    // comparar strings

        // use srtcmp()

        // se retorno == 1 entao strings sao iguais
        // se retorno == -1 primeira string vem antes da segunda
        // se retorno == 1 entao string 2 veio antes da string 1


    // copiar strings
        // use strcpy()


    // procurar caracteres em uma string
        // use strchr() e ou strrchr()



    // encontrar uma substring
        // use strstr()


    // converter string para maiusculo ou minusculo
        // strupr() para maiusculo e strlwr() para minusculo




    // dividir uma string em tokens
        // use strtok()





    // matriz de strings
        char nomes[5][25];
        int i;

        for(i = 0; i < 5; i++) {
            printf("digite o nome da posicao %d. ", i);
            scanf("%25[^\n]", nomes[i]);
            scanf("%c");
        }

        for(i = 0; i < 5; i++) {
            printf("\nnome na posicao %d: %s", i, nomes[i]);
        }
}


























int main ()
{
    // Definindo string
    // para definir string sempre use aspas duplas e para imprimir use %s
    // char palavras[] = {"Vamos aprender a programar com a linguagem c?"};

    // imprimindo string
    // printf("%s\n", palavras);


    // LendoStringTeclado();

    TamanhoString();

    return 0;
}
