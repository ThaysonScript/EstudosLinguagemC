#include <stdio.h>
#include <stdlib.h>

// CRIANDO PROCEDIMENTO QUE RECEBE STRUCT
typedef struct {

    int dia, mes, ano;

} Nascimento;


typedef struct {

    char nome[100];
    char sobrenome[100];
    short int idade;
    char sexo;

    Nascimento dataNascimento;

} Pessoa;


// PROCEDIMENTO QUE RECEBE UM STRUCT
void ImprimirPessoa(Pessoa p)
{
    printf("\n\tNome: %s", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tDataNascimento: %d/%d/%d\n\n", p.dataNascimento.dia, p.dataNascimento.mes, p.dataNascimento.ano);
}



// FUNCAO QUE RETORNA UM STRUCT
Pessoa LerPessoa()
{
    // instanciando struct Pessoa na variavel pessoa
    Pessoa pessoa;

    // lendo valores para a nova instancia
        printf("\nDigite o seu nome: ");
        fgets(pessoa.nome, 100, stdin);

        printf("Digite a sua Idade: ");
        scanf("%d", &pessoa.idade);
        scanf("%c");

        printf("Digite f ou m para o sexo: ");
        scanf("%c", &pessoa.sexo);

        printf("Digite a sua data de nascimento no formato dd mm aaaa");
        scanf("%d%d%d", &pessoa.dataNascimento.dia, &pessoa.dataNascimento.mes, &pessoa.dataNascimento.ano);

        // limpando buffer
        scanf("%c");

    // retornando a instancia do struct com todos os dados atribuidos para a funcao chamadora
    return pessoa;

}

int main()
{
    // instanciando o struct Pessoa
    // criando um array de struct
    Pessoa pessoas[3];

    int i;

    for(i = 0; i < 3; i++) {
        // para receber o retorno declara-se o tipo de dado que ta sendo retornado ( no caso tipo struct instanciado em pessoa )
        // essa variavel recebe ( atribuicao ) o retorno de todos os dados da funcao LerPessoa
        pessoas[i] = LerPessoa();
    }


    for(i = 0; i < 3; i++) {
        // PASSANDO STRUCT pessoa COMO PARAMETRO PARA UM PROCEDIMENTO
        // esse procedimento vai imprimir os dados que foram atribuidos a variavel pessoa
        ImprimirPessoa(pessoas[i]);
    }

    return 0;
}















