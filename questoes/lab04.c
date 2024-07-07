#include <stdio.h>

/*

Desenvolva um algoritmo que cumpra os seguintes requisitos:

    Implemente uma struct para Funcionarios: contendo id (inteiro), idade  e salario.   [ FEITO ]
    Uma função para criar novos funcionários: A função deve receber id, idade e salario como parâmetros e retornar uma struct Funcionario contendo esses dados. [ FEITO ]
    Comparar salário: Crie uma função que recebe dois funcionários como parâmetro e indica qual tem o maior salario.    [ FEITO ]
    Comparar idade: Crie uma função que recebe dois funcionários como parâmetro e indica qual tem a maior idade.    [ FEITO ]
    Alterar Salario: Uma função que permita alterar o salário de um funcionário.    [ FEITO ]
    Visualizar Funcionário: Uma função que recebe um funcionário e exiba todas as informações dele. [ FEITO ]

obs 1:  Alguns funcionários não devem ser criados em tempo de execução por entradas de dados do teclado. Ao iniciar o programa os funcionários e suas informações já devem estar implementados, fazendo uso da função de criar novos funcionários.

Obs 2: Crie um menu para as funcionalidades

Obs 3: Possibilite que no meu se possa adicionar funcionários, além dos já preenchidos em tempo de programação

*/

struct Funcionarios
{
    int id;
    int idade;
    float salario;
};

/** CRIAR NOVOS FUNCIONARIOS
 * @param id id do novo funcionario
 * @param idade idade do novo funcionario
 * @param salario salario do novo funcionario
 * 
 * @return struct struct de novo funcionario
 */
struct Funcionarios criarNovosFuncionarios(int id, int idade, float salario) {
    struct Funcionarios novoFuncionario;

    novoFuncionario.id = id;
    novoFuncionario.idade = idade;
    novoFuncionario.salario = salario;

    return novoFuncionario;
}

/** COMPARAR SALARIO DE DOIS FUNCIONARIOS
 * @param struct1 struct de funcionario 1
 * @param struct2 struct de funcionario 2
 * 
 * @return void sem retorno
 */
void compararSalarios(struct Funcionarios func1, struct Funcionarios func2) {
    puts("---------------------- COMPARANDO SALARIOS --------------------------");
    if (func1.salario > func2.salario) {
        puts("Salario do funcionario 1 maior do que funcionario 2\n");
        puts("DETALHES...\n");
        printf("Salario funcionario1: %.3f\n", func1.salario);
        printf("Salario funcionario2: %.3f\n", func2.salario);
    } else {
        puts("Salario do funcionario 2 maior do que funcionario 1\n");
        puts("DETALHES...\n");
        printf("salario funcionario1: %.3f\n", func1.salario);
        printf("salario funcionario2: %.3f\n", func2.salario);
    }
    puts("---------------------------------------------------------------------\n");
}

void compararIdade(struct Funcionarios func1, struct Funcionarios func2) {
    puts("---------------------- COMPARANDO IDADES --------------------------\n");
    if (func1.idade > func2.idade) {
        puts("Funcionario 1 com maior idade\n");
        puts("DETALHES...\n");
        printf("Idade funcionario 1: %i\n", func1.idade);
        printf("Idade funcionario 2: %i\n", func2.idade);
    } else {
        puts("Funcionario 2 com maior idade\n");
        puts("DETALHES...\n");
        printf("Idade funcionario 1: %i\n", func1.idade);
        printf("Idade funcionario 2: %i\n", func2.idade);
    }
    puts("-------------------------------------------------------------------\n");
}

struct Funcionarios alterarSalario(struct Funcionarios func) {
    char carac;

    puts("---------------------- ALTERANDO SALARIO --------------------------\n");
    printf("Deseja realmente alterar salario do funcionario id %i? [ s/n ]: ", func.id);
    scanf(" %c", &carac);

    if (carac == 's') {
        puts("Alterando...\n");

        printf("Salario atual e: %.3f\n", func.salario);

        printf("Digite o novo salario: ");
        scanf("%f", &func.salario);

        printf("Novo salario definido para: %.3f\n", func.salario);
    } else {
        puts("SAINDO POR DIGITO ERRADO OU PELA NAO ESCOLHA DE ALTERAR SALARIO!\n");
    }
    puts("-------------------------------------------------------------------\n");

    return func;
}

void verFuncionario(struct Funcionarios func) {
    printf("--------------- VISUALIZANDO DADOS DO FUNCIONARIO %i -------------------\n", func.id);
    printf("Id do funcionario: %i\n", func.id);
    printf("Idade do funcionario: %i\n", func.idade);
    printf("Salario do funcionario: %.3f\n", func.salario);
    puts("---------------------------------------------------------------------\n");
    puts("VOLTANDO AO MENU .......");
}

int menu() {
    int escolha;

    puts("---------------------- MENU PRINCIPAL -------------------------\n");
    puts("[ 1 ] - Criar novo funcionario");
    puts("[ 2 ] - Comparar salarios de funcionario");
    puts("[ 3 ] - Comparar idade de funcionario");
    puts("[ 4 ] - Alterar salarios de funcionario");
    puts("[ 5 ] - Ver funcionario");
    puts("[ 6 ] - Sair do Programa?");
    puts("---------------------------------------------------------------");
    printf("Escolha opcao: ");
    scanf("%i", &escolha);

    return escolha;
}

int main() {
    struct Funcionarios func[3] = {0};            // funcionarios de exemplo ja criados
    struct Funcionarios arrayFuncs[100];    // limite maximo de novos funcionarios que podem ser criados em tempo de execucao

    func[0] = criarNovosFuncionarios(1, 20, 1.200);     // id: 1, idade: 20, salario: 1.200
    func[1] = criarNovosFuncionarios(2, 21, 1.500);     // id: 2, idade: 21, salario: 1.500
    func[2] = criarNovosFuncionarios(3, 25, 1.700);     // id: 3, idade: 25, salario: 1.700

    int id, idade, escolha, newFuncs;
    float salario;

    puts("---------------------- [ NAO CONSULTAR VALORES QUE NAO FORAM INSERIDOS ANTERIORMENTE EM TEMPO DE EXECUCAO ] ------------------------");

    while (1)
    {
        escolha = menu();

        if (escolha == 1) {
            puts("------------------- CRIANDO NOVOS FUNCIONARIOS -------------------\n");
            puts("LIMITE MAXIMO DE NOVOS FUNCIONARIOS QUE PODEM SER CRIADOS = 100");
            puts("A PILHA SERA RECRIADA\n");
            printf("Deseja criar quantos novos funcionarios? ");
            scanf("%i", &newFuncs);

            if (newFuncs <= 100) {
                struct Funcionarios nvFuncionario[newFuncs];

                for (int i = 1; i <= newFuncs; i++) {
                    printf("Digite novo id para funcionario %i: ", i);
                    scanf("%i", &id);

                    printf("Digite novo idade para funcionario %i: ", i);
                    scanf("%i", &idade);
                    
                    printf("Digite novo salario para funcionario %i: ", i);
                    scanf("%f", &salario);

                    nvFuncionario[i] = criarNovosFuncionarios(id, idade, salario);
                    arrayFuncs[i] = nvFuncionario[i];
                    printf("funcionario %i criado\n", i);
                }

                printf("foram criados %i funcionarios\n", newFuncs);
            } else {
                puts("POR FAVOR, CRIE SOMENTE NO MAXIMO 100 NOVOS FUNCIONARIOS\n");
                puts("CASO DESEJAR AUMENTAR O LIMITE ALTERE O ARRAY DE NOVOS FUNCIONARIOS QUE PODEM SER CRIADOS EM:\n");
                puts("struct Funcionarios arrayFuncs[100];\n");
            }
            puts("-------------------------------------------------------------------\n");

        } else if (escolha == 2) {
            int id1, id2;
            struct Funcionarios func1;
            struct Funcionarios func2;

            puts("Digite o id dos funcionarios");
            puts("id do funcionario 1: ");
            scanf("%i", &id1);

            puts("\nid do funcionario 2: ");
            scanf("%i", &id2);

            char carac;
            printf("Comparar salario de funcionarios pre gravados [ s / n ]: ");
            scanf(" %c", &carac);

            if (carac == 's') {
                for (int i = 0; i < 3; i++) {
                    if (id1 == func[i].id) {
                        func1 = func[i];
                    }
                }

                for (int i = 0; i < 3; i++) {
                    if (id2 == func[i].id) {
                        func2 = func[i];
                    }
                }

            } else {
                for (int i = 1; i <= newFuncs; i++) {
                    if (id1 == arrayFuncs[i].id) {
                        func1 = arrayFuncs[i];
                    }
                }

                for (int i = 1; i <= newFuncs; i++) {
                    if (id2 == arrayFuncs[i].id) {
                        func2 = arrayFuncs[i];
                    }
                }
            }

            compararSalarios(func1, func2);

        } else if (escolha == 3) {
            struct Funcionarios func1;
            struct Funcionarios func2;
            int id1, id2;

            puts("Digite o id dos funcionarios");
            puts("id do funcionario 1: ");
            scanf("%i", &id1);

            puts("\nid do funcionario 2: ");
            scanf("%i", &id2);

            char carac;
            printf("Comparar idade de funcionarios pre gravados [ s / n ]: ");
            scanf(" %c", &carac);

            if (carac == 's') {
                for (int i = 0; i < 3; i++) {
                    if (id1 == func[i].id) {
                        func1 = func[i];
                    }
                }

                for (int i = 0; i < 3; i++) {
                    if (id2 == func[i].id) {
                        func2 = func[i];
                    }
                }

            } else {
                for (int i = 1; i <= newFuncs; i++) {
                    if (id1 == arrayFuncs[i].id) {
                        func1 = arrayFuncs[i];
                    }
                }

                for (int i = 1; i <= newFuncs; i++) {
                    if (id2 == arrayFuncs[i].id) {
                        func2 = arrayFuncs[i];
                    }
                }
            }

            compararIdade(func1, func2);

        } else if (escolha == 4) {
            struct Funcionarios func1;
            char carac;

            printf("Alterar salario de funcionarios pre gravados [ s / n ]: ");
            scanf(" %c", &carac);

            if (carac == 's') {
                printf("Digite o id do funcionario: ");
                scanf("%i", &id);
                for (int i = 0; i < 3; i++) {
                    if (id == func[i].id) {
                        func1 = func[i];
                        func[i] = alterarSalario(func1);
                    }
                }


            } else {
                puts("Digite o id do funcionario: ");
                scanf("%i", &id);
                for (int i = 1; i <= newFuncs; i++) {
                    if (id == arrayFuncs[i].id) {
                        func1 = arrayFuncs[i];
                        arrayFuncs[i] = alterarSalario(func1);
                    }
                }

            }

        } else if (escolha == 5) {
            struct Funcionarios func1;
            char carac;

            puts("Ver funcionarios pre gravados [ s / n ]: ");
            scanf(" %c", &carac);

            if (carac == 's') {
                for (int i = 0; i < 3; i++) {
                    verFuncionario(func[i]);
                }

            } else {
                puts("Digite o id do funcionario: ");
                scanf("%i", &id);
                for (int i = 1; i <= newFuncs; i++) {
                    if (id == arrayFuncs[i].id) {
                        func1 = arrayFuncs[i];
                    }
                }

                verFuncionario(func1);
            }

        } else if (escolha == 6) {
            puts("\nSAINDO DO PROGRAMA....!");
            break;

        }
        else {
            puts("\nSaindo ou saindo por comando invalido");
            break;
        }
    }

    puts("\ncodigo encerrado\n");

    return 0;
}