#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_NUMERIC,"");
	
	int n1, n2, subtracao;
	
	printf("Digite o 1° numero:\n");
	scanf("%d",&n1);
	
	printf("Digite o 2° numero:\n");
	scanf("%d",&n2);
	
	subtracao=n1-n2;
	
	printf("Resultado: %d \n",subtracao);
	
	system("pause");
	
	return 0;
}
