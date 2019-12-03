#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float x1,x2,y1,y2;
	float distancia;
	
	printf("Por gentileza, digite o valor de x1: ");
	scanf("%f",&x1);
	printf("\nPor gentileza, digite o valor de x1: ");
	scanf("%f",&x2);
	printf("\nPor gentileza, digite o valor de y2: ");
	scanf("%f",&y1);
	printf("\nPor gentileza, digite o valor de y2: ");
	scanf("%f",&y2);
	
	distancia=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("\n A distancia entre os pontos é: %.6f \n",distancia);
	
	system("pause");
	
	return 0;
}
