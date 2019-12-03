#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	float vlrProd, percDesc, vlrDesc;
	
	printf("Digite o valor do produto:");
	scanf("%f",&vlrProd);
	
	printf("Digite o desconto em porcentagem:");
	scanf("%f",&percDesc);
	
	vlrDesc=vlrProd-(vlrProd*(percDesc/100));
	
	printf("Valor do produto com desconto: %.2f\n",vlrDesc);
	
	system("pause");
	return 0;
}
