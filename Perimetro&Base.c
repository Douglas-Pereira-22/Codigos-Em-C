#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	float base, altura, perimetro, area;
	
	printf("Digite a base:");
	scanf("%f",&base);
	
	printf("Digite a altura:");
	scanf("%f",&altura);
	
	perimetro=base+altura;
	area=base*altura;
	
	printf("Perimetro:%.2f \n", perimetro);
	printf("Area:%.2f \n",area);
	
	system("pause");
	
	return 0;
}
