#include <stdio.h> //biblioteca de comunicação do usuário
#include <stdlib.h> //biblioteca de alocação de espaço de memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável pelas strings

int registrar () //função respon´savel por cadastrar os usuários
{
	//inicio da criação de váriaveis//string (conjunto de variável [])
	char arquivo [40];
	char cpf[40]; 
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da ciação

	printf("Digite o CPF:\t"); //coletando informações
	scanf("%s", cpf); //%s refere-se a string
	
	FILE *file;
	file = fopen(cpf,"r");
	
	{
	strcpy(arquivo, cpf); //copia o valor da string
	file = fopen(arquivo, "w"); //w- cria o arquivo w> escrever
	fprintf(file,cpf); //salva o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //a- atualiza o arquivo
	fprintf(file," | ");
	fclose(file);
	
	printf("Digite o nome:\t");
	scanf("%s", nome); //refere-se a string
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file," ");
	fclose(file);
	
	printf("Digite o sobrenome:\t");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file," | ");
	fclose(file);
	
	printf("Digite o cargo:\t");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	}
}


int consultar ()
{
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF:\t");
	scanf("%s", cpf);
	
	system("cls");
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("Usuário não encontrado.\n\n");
	}
	
	while(fgets(conteudo,200,file) != NULL)
	{
		printf("Consulta de usuário: \n\n");
		printf("%s",conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
}

int deletar ()
{
	char cpf [40];
	
	printf("Digite o CPF a ser deletado:\n");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file ==NULL);
	{
		printf("Usuário deletado.\n");
		system("pause");
	}
}


int main () //menu - tipo(int)+nome+função()
{
	int opcao=0; //definindo variável
		int x=1;
		
		for(x=1;x=1;) //qnd for
		{
		
			system("cls"); //limpa tela
		
			setlocale(LC_ALL, "Portuguese"); //linguagem
	
			printf ("### BANCO DE USUÁRIOS EBAC ###\n\n"); // \n ENTER
			printf ("Escolha uma opção abaixo:\n\n");
			printf ("\t1. Registrar novo usuário\n"); // \t TAB
			printf ("\t2. Consultar usuário\n");
			printf ("\t3. Excluir usuário\n");
			printf ("\n\nOpção: ");
	
			scanf ("%d", &opcao); // armazenamento e escolha do usuário
	
			system("cls"); // limpa tela
	
			switch(opcao) //opção
			{
			case 1:
				registrar(); //chama função
				break; //qnd acaba
				
			case 2:
				consultar();
				break;
				
			case 3:
				deletar();
				break;
				
			default:
				printf("\n\nOpção inexistente.\n");
				system("pause");
				break;
			}
	
	 }
	
	}
