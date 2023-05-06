#include <stdio.h>
#include <string.h>


// DEFINICAO DE TYPEDEF STRUCT
typedef struct {

    int num1;
    // float num2;
    // double num3;

    // char letras1;
    // char letras2[];
} UmaStruct;



// EXEMPLO ELABORADO DE STRUCT ( se parece muito com uma classe )

// AQUI ABAIXO VAI UM EXEMPLO DE STRUCT DE STRUCT
typedef struct {

    int dia, mes, ano;

} Nascimento;   // essa struct vai ser instanciada para a struct Pessoa

// VARIAS STRUCTS PODEM SER CHAMADAS PARA OUTRAS, ASSIM ORGANIZANDO MAIS AS STRUCTS E SEPARANDO CADA TIPO DE DADO, EXEMPLO: TENHO TIPO PESSOA E ESSA PESSOA TEM STRUCT NASCIMENTO, ENDERECO.........
// TODAS DENTRO DE UM TIPO PESSOA QUE PODE SER CHAMADA PARA FORMA-LA

typedef struct {

    char nome[100];
    char sobrenome[100];
    short int idade;
    char sexo;

    Nascimento dataNascimento;  // instanciando a struct Nascimento

} Pessoa;  // struct para gerar pessoas



int main()
{

    /*

    // CHAMANDO A STRUCT - UmaStruct - ( ASSOCIE ELA A UM IDENTIFICADOR E GERALMENTE COLOQUE O MESMO NOME DA VARIAVEL DEFINIDA NO STRUCT )
    UmaStruct num1 = num1;

    scanf("%d", &num1);

    printf("%d", num1);

    */

    // INSTANCIANDO A STRUCT PESSOA
        // COMO INSTANCIAR?
            //CHAME O STRUCT DESEJADO E DER UM IDENTIFICADOR A ELE
               // EXEMPLO: STRUCT = Pessoa       identificador = GerarPessoa

    // como vai ser chamado o struct, exemplo
    Pessoa GerarPessoa;
    Pessoa OutraPessoa;


    // ATRIBUINDO VALORES A STRUCT INSTANCIADA
    strcpy(GerarPessoa.nome, "Aroudo");     // PARA UMA STRING, SEMPRE TEM QUE COPIAR A STRING
    strcpy(GerarPessoa.sobrenome, "Silva");     // // PARA UMA STRING, SEMPRE TEM QUE COPIAR A STRING
    GerarPessoa.idade = 15;
    GerarPessoa.sexo = 'M';

    // IMPRIMINDO VALORES
    printf("nome: %s\n", GerarPessoa.nome);
    printf("\nsobrenome: %s\n", GerarPessoa.sobrenome);
    printf("\nidade: %d\n", GerarPessoa.idade);
    printf("\nsexo: %c\n", GerarPessoa.sexo);

    printf("\n\n");



    // lendo o valor da struct pelo teclado
    printf("digite nome\n");
    fgets(OutraPessoa.nome, 100, stdin);

    printf("\ndigite sobrenome\n");
    fgets(OutraPessoa.sobrenome, 100, stdin);

    printf("\ndigite idade\n");
    scanf("%d", &OutraPessoa.idade);

    printf("\ndigite sexo\n");
    scanf(" %c", &OutraPessoa.sexo);

    // RECEBENDO NASCIMENTO DA STRUCT Nascimento DE STRUCT Pessoa
    printf("\ndigite a sua data de nascimento: dd mm aaaa\n");
    scanf("%d", &OutraPessoa.dataNascimento.dia);
    scanf("%d", &OutraPessoa.dataNascimento.mes);
    scanf("%d", &OutraPessoa.dataNascimento.ano);

    // IMPRIMINDO VALORES DO TECLADO
    printf("\nnome: %s\n", OutraPessoa.nome);
    printf("sobrenome: %s\n", OutraPessoa.sobrenome);
    printf("idade: %d\n\n", OutraPessoa.idade);
    printf("sexo: %c\n", OutraPessoa.sexo);

    // IMPRIMINDO A DATA DE NASCIMENTO
    printf("\nsua data de nascimento e: %d/%d/%d\n", OutraPessoa.dataNascimento.dia, OutraPessoa.dataNascimento.mes, OutraPessoa.dataNascimento.ano);

    return 0;
}




// GERALMENTE O STRUCT PRECISA DE MAIS MEMORIA PARA GERENCIAR TIPOS DIFERENTES DE DADOS, CASO SEU STRUCT TENHA APENAS UM TIPO DE DADO COMO INT, ELE VAI USAR APENAS A QTD PARA ARMAZENAR INTEIROS
// POR DUVIDA USE SIZEOF NO STRUCT PARA VER A DIFERENCA
