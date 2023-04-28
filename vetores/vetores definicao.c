#include <stdio.h>
#include <time.h>

int main()
{
    // como criar um array/vetor

        //identificar um array  -   tipo identificado[tamanhoArray] = atribuicao;
            int idade[1];
            char sexo[1];
            float n1[1];

        // definir o tamanho do array
            int num1[10];

        // definir array com tamanho dinamico
            int num2[] = {1, 5, 9, 15, 43};

        // se definir tamanho e os valores forem menores que o tamanho, entao completa com 0, se for maior exibe apenas o valor ate o tamanho definido
            int num3[5] = {4, 7, 5}; // preenche com 0 o resto dos indices
            int num4[5] = {1, 2, 3, 4, 5, 6};   // retira o 6 na execucao


        // preechendo array com valor default 0
            int num5[5] = {0}; // resto dos indices iguais a 0



        // definindo array/conjunto de caracteres
            char letras[100];
            char vogais[5] = {'a', 'e', 'i', 'o', 'u'};



        // definindo array float/double
            float nota1[] = {5.5, 3.3, 6.9};

            double nota2[] = {5.5, 3.3, 6.9, 5.5, 3.3, 6.9};



    // imprimindo arrays

        int contador1 = 0;

        while(contador1 < 3) {
            printf("%.1f , ", nota1[contador1]);
            contador1++;
        }

        printf("\n\n");

        for(int contador2 = 0; contador2 < 6; contador2++) {
            printf("%.1f , ", nota2[contador2]);
        }


        printf("\n\n");


        // imprimindo a variavel vogais
        for(int contador3 = 0; contador3 < 6; contador3++) {
            printf("%c ", vogais[contador3]);
        }

        /*
        printf("\n");

        lerArrayTeclado();

        printf("\n\n");

        gerandoValorAleatorioArray();

        */

        printf("\n\n");

        GerandoMatriz();
    return 0;
}


// como preencher um array pelo teclado
int lerArrayTeclado()
{
    //tipo identificador[tamanho];
    int arrayInteiro[10];

    // passar os valores para o array
    for(int contador = 0; contador < 10; contador++) {
        printf("digite valor para a posicao (%d)\n", contador);
        scanf("%d", &arrayInteiro[contador]);
    }


    //imprimir o array
    for(int cont2 = 0; cont2 < 10; cont2++) {
        printf("%d , ", arrayInteiro[cont2]);
    }



    // multiplicando os valores do vetor e jogando novamente nele
    printf("\n\no vetor abaixo e multiplicado por 3");
    for(int cont3 = 0; cont3 < 10; cont3++) {
        arrayInteiro[cont3] = arrayInteiro[cont3] * 3;
    }

    printf("\n\n");

    //imprimir o array multiplicado por 3
    for(int cont4 = 0; cont4 < 10; cont4++) {
        printf("%d , ", arrayInteiro[cont4]);
    }
    printf("\n");
}


int gerandoValorAleatorioArray()
{
    int iterator;

    int numeros[10];

    // inclua a lib time para sempre mudar o valor rand
    srand(time(NULL));    // definir valor aleatorio padrao inicial

    // definir intervalo de valor aleatorio
        // rand() % 100;  -----> sera gerado valores abaixo de 100

    for(iterator = 0; iterator < 10; iterator++) {
        numeros[iterator] = rand(); //pseudoaleatorio, nada gerado do nada, apos algumas execucoes os valores irao se repetir
    }

    printf("\n\n");

    for(iterator = 0; iterator < 10; iterator++) {
        printf("%d , ", numeros[iterator]);
    }
}









int GerandoMatriz()
{
    // recapitulando tudo
        // definir variavel
            // tipo identificado = atribuicao;

        // definir array
            // tipo identificador[tamanho] = {atribuicao};

        // agora...
            // matriz
                // tipo identificador[tamanho-linha][tamanho-coluna] = {atribuicao-linha e coluna};
                // saiba quantas atribuicoes fazer multiplicando o tamanho da linha e coluna
                    // ex: matriz[3][3]
                        // 3 * 3 = 9 , logo as atribuicoes possiveis sao 9 valores adicionais


                // como seria a representacao...

                    /*
                                coluna 0 | coluna 1 | coluna 2
                        linha 0    1          2         3
                        linha 1    4          5         6
                        linha 2    7          8         9
                    */






    // como imprimir uma matriz
    int matriz1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int i, j;

    // imprimir somente as linhas
    for(i = 0; i < 3; i++) {
        printf("%d ", matriz1[i][0]);
    }

    printf("\n\n");

    // imprimir somente as colunas
    for(i = 0; i < 3; i++) {
        printf("%d ", matriz1[0][i]);
    }

    printf("\n\n");

    // imprimir linhas e colunas
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }
}















