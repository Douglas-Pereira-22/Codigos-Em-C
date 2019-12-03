#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_NUMERIC,"");
	
	char nome[100],telefone[100],endereco[100];
	
	printf("Digite seu nome:\n");
	scanf("%[^\n]",&nome);
	setbuf(stdin,NULL);
	
	printf("Digite seu telefone:\n");
	scanf("%[^\n]",&telefone);
	setbuf(stdin,NULL);
	
	printf("Digite seu endereco:\n");
	scanf("%[^\n]",&endereco);
	setbuf(stdin,NULL);
	
	printf("\nSeus Dados são:\n Nome: %s \n Telefone: %s \n Endereco: %s \n", nome, telefone,endereco);
	
	system("pause");
	
	return 0;
}
