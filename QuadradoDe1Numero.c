#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	float num, resultado;
	
	printf("Digite o numero:");
	scanf("%f",&num);
	
	resultado= num*num;
	
	printf("Quadrado do numero: %.2f", resultado)	;
	
	system("pause");
	
	return 0;
}
