#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num;
	
	printf("Digite um numero\n");
	scanf("%d",&num);
	
	if(num%2 == 0){
		printf("O numero %d � par\n",num);
	}
	else{
		printf("O numero %d � impar\n",num);
	}
	if(num>=0){
		printf("O numero %d � positivo\n",num);
	}
	else{
		printf("O numero %d � negativo\n",num);
	}
	
	system("pause");
	return 0;
}
