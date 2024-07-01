#include <stdio.h>

int questao1()
{
    /*
        1) Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.
    */

    float valor1, valor2, valor3, maior, menor;

    printf("digite 3 valores para saber qual e o maior\n\n");

    scanf("%f %f %f", &valor1, &valor2, &valor3);

    if(valor1 > valor2 || valor1 > valor3) {
        maior = valor1;
        if(valor2 > valor3) {
            menor = valor3;
        } else {
            menor = valor2;
        }

    } else if(valor2 > valor1 || valor2 > valor3) {
        maior = valor2;
        if(valor1 > valor3) {
            menor = valor3;
        } else {
            menor = valor1;
        }

    } else if(valor3 > valor1 || valor3 > valor2) {
        maior = valor3;
        if(valor1 > valor2) {
            menor = valor2;
        } else {
            menor = valor1;
        }
    }

    printf("maior valor e: %.2f\ne o menor valor e: %.2f", maior, menor);
}

int questao2()
{
    /*
        2) Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores
        são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos
        e positivos.
    */

    int valor, v1 = 0, v2 = 0, v3 = 0, v4 = 0, v5 = 0, positivo = 0, negativo = 0;

    int i = 1;
    while(i <= 5) {
        printf("digite valores positivos ou negativos\n");
        scanf("%d", &valor);

        if(i == 1) {
            v1 = valor;
            if(v1 > 0) {
                positivo++;
            } else {
                negativo++;
            }

        } else if(i == 2) {
            v2 = valor;
            if(v2 > 0) {
                positivo++;
            } else {
                negativo++;
            }

        } else if(i == 3) {
            v3 = valor;
            if(v3 > 0) {
                positivo++;
            } else {
                negativo++;
            }

        } else if(i == 4) {
            v4 = valor;
            if(v4 > 0) {
                positivo++;
            } else {
                negativo++;
            }

        } else if(i == 5) {
            v5 = valor;
            if(v5 > 0) {
                positivo++;
            } else {
                negativo++;
            }
        }

        printf("valor1:%d\nvalor2:%d\nvalor3:%d\nvalor4:%d\nvalor5:%d\n", v1, v2, v3, v4, v5);
        printf("\n\nquantidade de negativos e positivos: posit: %d; negat: %d", positivo, negativo);
        i++;
    }
    printf("\n\nquantidade de negativos e positivos: posit: %d; negat: %d", positivo, negativo);
}

int questao3()
{
    /*
        3) Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por 5, ou se não é divisível por nenhum deles.
    */


    int numero;

    printf("\ndigite um numero\n");
    scanf("%d", &numero);

    if(numero % 2 == 0 || numero % 5 == 0) {
        if(numero % 2 == 0) {
            printf("divisivel por 2");
        }

        if(numero % 5 == 0) {
            printf("\ndivisivel por 5");
        }

    } else if(numero % 3 == 0) {
        printf("divisivel por 3");

    } else {
        printf("nao e divisivel por 2, 3 e 5");
    }

}

int questao4()
{
    /*
        4) Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
        de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.
    */


    char nota;
    float dollar, real = 5.30, conversao;

    printf("Digite (D para conversao de dolar para real) ou (R de real para dolar)\n");
    scanf(" %c", &nota);

    if(nota == 'D') {
        printf("\nInforme a quantidade de dolares\n");
        scanf("%f", &dollar);

        conversao = dollar * real;

        printf("\nquantidade de reais e: %.2f", conversao);
    }
    else if(nota == 'R') {
        printf("\nInforme a quantidade de reais\n");
        scanf("%f", &real);

        conversao = real / 5.30;

        printf("\nquantidade de dolares e: %.2f", conversao);
    }
}

int questao5()
{
    /*
        5) O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg)
        pela altura (h em metros) elevada ao quadrado (IMC= m/h2). Escreva um programa que leia o peso
        e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de acordo
        com a tabela abaixo:

            IMC                          Interpretação
        Menor que 18,5                  Abaixo do peso
        Entre 18,5 e menor que 25           Peso normal
        Entre 25 e menor que 30             Sobrepeso
        Entre 30 e menor que 35         Obesidade grau 1
        Entre 35 e menor que 40         Obesidade grau 2
        Maior ou igual a 40             Obesidade grau 3
    */

    float peso, altura;
    float imc;

    printf("\ndigite seu peso e altura\n");
    scanf("%f %f", &peso, &altura);

    imc = peso / (altura * altura);

    printf("\nseu imc e: %.2f\n", imc);

    if(imc < 18.5) {
        printf("\nesta Abaixo do peso\n");
    }
    else if(imc >= 18.5 && imc < 25) {
        printf("\nesta Peso normal\n");
    }
    else if(imc >= 25 && imc < 30) {
        printf("\nesta Sobrepeso\n");
    }
    else if(imc >= 30 && imc < 35) {
        printf("\nesta Obesidade grau 1\n");
    }
    else if(imc >= 35 && imc < 40) {
        printf("\nesta Obesidade grau 2\n");
    }
    else if(imc >= 40) {
        printf("\nesta Obesidade grau 3\n");
    }


}

int questao6()
{
    /*
        6) Faça um programa para ler um número inteiro e verificar se corresponde a um mês válido no
        calendário. Caso corresponda, escrever o nome do mês, caso contrário, escrever a mensagem ‘Mês
        Inválido’.
    */
}

int questao7()
{
    /*
        7) Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.
    */
}

int questao8()
{
    /*
        8) Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para
        isso a estrutura de seleção switch.
        Obs.: Considere fevereiro como tendo 28 dias.
    */
}

int questao9()
{
    /*
        9) Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
        de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
        a apresente a média:
        Opções:
        • ‘a’ - Aritmética.
        • ‘p’ - Ponderada (pesos: 3,3,4).
    */
}

int questao10()
{
    /*
        10) Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
        dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
        equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não
        formam um triângulo”.
    */
}























int main(void)
{
    int Consulta;

    printf("digite 1 a 7 para escolher a questao, digite qualquer outro para finalizar a consulta\n");
    scanf("%d", &Consulta);

    while(Consulta >= 1 && Consulta <= 7) {
        if(Consulta == 1) {
            questao1();

            printf("\ndeseja continuar? digite valor 1 a 7, senao, digite qualquer valor diferente\n\n");
            scanf("%d", &Consulta);
        } else if(Consulta == 2) {
            questao2();

            printf("\ndeseja continuar? digite valor 1 a 7, senao, digite qualquer valor diferente\n\n");
            scanf("%d", &Consulta);

        } else if(Consulta == 3) {
            questao3();

            printf("\ndeseja continuar? digite valor 1 a 7, senao, digite qualquer valor diferente\n\n");
            scanf("%d", &Consulta);

        } else if(Consulta == 4) {
            questao4();

            printf("\ndeseja continuar? digite valor 1 a 7, senao, digite qualquer valor diferente\n\n");
            scanf("%d", &Consulta);

        } else if(Consulta == 5) {
            questao5();

            printf("\ndeseja continuar? digite valor 1 a 7, senao, digite qualquer valor diferente\n\n");
            scanf("%d", &Consulta);

        } else if(Consulta == 6) {
            questao6();

            printf("\ndeseja continuar? digite valor 1 a 7, senao, digite qualquer valor diferente\n\n");
            scanf("%d", &Consulta);

        } else if(Consulta == 7) {
            questao7();

            printf("\ndeseja continuar? digite valor 1 a 7, senao, digite qualquer valor diferente\n\n");
            scanf("%d", &Consulta);

        } else if(Consulta == 8) {
            questao8();

            printf("\ndeseja continuar? digite valor 1 a 7, senao, digite qualquer valor diferente\n\n");
            scanf("%d", &Consulta);

        } else if(Consulta == 9) {
            questao9();

            printf("\ndeseja continuar? digite valor 1 a 7, senao, digite qualquer valor diferente\n\n");
            scanf("%d", &Consulta);

        } else if(Consulta == 10) {
            questao10();

            printf("\ndeseja continuar? digite valor 1 a 7, senao, digite qualquer valor diferente\n\n");
            scanf("%d", &Consulta);
        }
    }
    printf("finalizando...\n");

    return 0;
}
