# criar variaveis no makefile
# use somente caracteres maiusculos
SRC=./src
BIN=./bin
INCLUDE=./include
PROGRAM=./program
OBJ=./obj


# passar variavel para algum comando como o gcc
# use $( variavel )
gcc $(SRC)/arquivo_fonte.c ./obj/*.o -I ./include -o ./bin/arquivo_compilado_saida		# sera substituido o $(SRC) por ./src



# colocar todas as compilacoes aqui caso nao desejar criar diretiva personalizada
all:
	echo "compilando algo"

	# gcc ./src/arquivo_fonte.c ./obj/*.o -I ./include -o ./bin/arquivo_compilado_saida

	# gcc -c arquivo.c -I include/ -o obj/arquivo_compilado.o




	# passando as outras diretivas para serem usadas no all ( passe na mesma linha de definicao da all: )
		# all: includes src



# tente usar o all somente para chamar outras diretivas feitas no makefile e crie outras diretivas especificas para cada tipo de compilacao do programa como includes, src e obj
includes:
	echo "compilando includes e jogando saida em obj"


src:
	echo "compilando arquivos src fonte e jogando em bin ou program"






# diretiva destinada para rodar ou executar um programa
run:
	echo "executando algo"

	# exemplo
	./bin/app

	# executando programa
	./program/program_main


# diretiva usada para limpar os arquivos de compilacao
clean:
	echo "limpando algo compilado usando rm"




# retirando o all que quando chamado make no terminal ele e executado os outros tem que passar o nome ( make run ///// make clean )