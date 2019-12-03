#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	float n1,n2,resultado;
	
	printf("Digite o 1° numero:\n");
	scanf("%f",&n1);
	
	printf("Digite o 2° numero:\n");
	scanf("%f",&n2);
	
	resultado=n1 + n2;	
	printf("\nSoma: %.2f",resultado);
	
	resultado=n1 - n2;	
	printf("\nSubtracao: %.2f",resultado);
	
	resultado=n1 * n2;	
	printf("\nMultiplicacao: %.2f",resultado);
	
	resultado=n1 / n2;	
	printf("\nDivisao: %.2f \n",resultado);
	
	system("pause");
	
	return 0;
}
