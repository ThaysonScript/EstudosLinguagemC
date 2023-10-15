# como passar um tipo especifico de compilacao que vc deseja executar no makefile

# use:
%.o: $(ALGUMA_VARIAVEL).c $(OUTRA_VARIAVEL)/%.h
	comando [opcao] $< [opcao] $(PEGAR_A_OUTRA_VARIAVEL) [opcao] $(PASTA_DESTINO_OU_OUTRA_VARIVAL/ARQUIVO)/$@


# % ----> pegar o parametro do arquivo passado no comando make quando executado no terminal

# $() -------> substituir alguma variavel por seu valor

#  $< --------> pegar a primeira condicao ----> $(ALGUMA_VARIAVEL).c

# $@ ----------> pegar o que foi passado em % no comando make quando executado no terminal






# agora voce pode criar diretivas mais otimizadas e eficientes

# por exemplo
# no all chame suas diretivas especificas para serem executadas
all: diretiva_de_includes diretiva_de_src


diretiva_de_includes: algum_arquivo_para_compilar_do_includes

diretiva_de_src: algum_arquivo_para_compilar_do_src


# quando o all executa diretiva_de_includes e diretiva_de_src os ( algum_arquivo_para_compilar_do_includes e algum_arquivo_para_compilar_do_src ) sao chamados, entao o comando abaixo verifica se a condicao e favorecida se true executa o que foi definido senao erro e nao executa o definido
%.o: $(SRC).c $(INCLUDE)/%.h
	comando [opcao] $< [opcao] $(INCLUDE) [opcao] $(OBJ)/$@





# atencao:
# para executar multiplas linhas de dependencias em mesma linha de diretiva fica inviavel de ser feito na mesma linha

# entao use
\	-----> para quebrar a linha e a diretiva entender que vc esta executando na mesma linha

exemplo

novo_all: \
	diretiva1 \
	diretiva2 \
	diretiva3 \
	diretiva_final