#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	float  n,resultado;
	
	printf("Digite um numero:\n");
	scanf("%f",&n);
	
	resultado=n/4;
	
	printf("Resultado: %.2f\n",resultado);
	
	system("pause");
	
	return 0;
}
