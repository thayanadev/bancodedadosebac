#include <stdio.h> //biblioteca de comunica��o do usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o de mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel pelas strings

int registrar () //fun��o respon�savel por cadastrar os usu�rios
{
	//inicio da cria��o de v�riaveis//string (conjunto de vari�vel [])
	char arquivo [40];
	char cpf[40]; 
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da cia��o

	printf("Digite o CPF:\t"); //coletando informa��es
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
		printf("Usu�rio n�o encontrado.\n\n");
	}
	
	while(fgets(conteudo,200,file) != NULL)
	{
		printf("Consulta de usu�rio: \n\n");
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
		printf("Usu�rio deletado.\n");
		system("pause");
	}
}


int main () //menu - tipo(int)+nome+fun��o()
{
	int opcao=0; //definindo vari�vel
		int x=1;
		
		for(x=1;x=1;) //qnd for
		{
		
			system("cls"); //limpa tela
		
			setlocale(LC_ALL, "Portuguese"); //linguagem
	
			printf ("### BANCO DE USU�RIOS EBAC ###\n\n"); // \n ENTER
			printf ("Escolha uma op��o abaixo:\n\n");
			printf ("\t1. Registrar novo usu�rio\n"); // \t TAB
			printf ("\t2. Consultar usu�rio\n");
			printf ("\t3. Excluir usu�rio\n");
			printf ("\n\nOp��o: ");
	
			scanf ("%d", &opcao); // armazenamento e escolha do usu�rio
	
			system("cls"); // limpa tela
	
			switch(opcao) //op��o
			{
			case 1:
				registrar(); //chama fun��o
				break; //qnd acaba
				
			case 2:
				consultar();
				break;
				
			case 3:
				deletar();
				break;
				
			default:
				printf("\n\nOp��o inexistente.\n");
				system("pause");
				break;
			}
	
	 }
	
	}
