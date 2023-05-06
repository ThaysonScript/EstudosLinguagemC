#include <stdio.h>
#include <stdlib.h>
#include <string.h>




/* DEFINICAO DE FUNCAO

    tipo identificador(parametro(tipo identificado)) {
        bloco de comando
    }

*/



/* DEFINICAO DE PROCEDIMENTOS (executa uma acao, mas nao necessariamente retorna um valor ( parecido com um printf ) pra onde foi chamado)

    praticamente igual ao escopo de funcao so que pode nao retornar nada pra onde foi chamada
*/


// criando funcoes e procedimentos
    // criando uma funcao de strlen()

        int MinhaStrLen(char str[])
        {
            int tamanho = 0;

            while(str[tamanho] != '\0') {
                tamanho++;
            }
            return tamanho;
        }



    // criando um procedimento para imprimir uma string

        void ImprimirString(char str[])
        {
            int i = 0;

            while(str[i] != '\0') {
                printf("%c", str[i]);
                i++;
            }
            printf("\n");
        }


        int main()
        {
            char vetorCaracteres[20] = {"ola"};

            printf("minhastrlen: %d\n", MinhaStrLen(vetorCaracteres));

            ImprimirString(vetorCaracteres);

            return 0;
        }





// escopo de variaveis

    // variaveis globais e escopos( servem para todo o codigo )
        int varGlobal;


    // variaveis locais e escopos ( servem apenas para dentro do bloco de codigo definido )

        int escopoLocal()
        {
            int aquiVariavelLocalNaoAcessadaForaBlocoCodigo;
        }






















