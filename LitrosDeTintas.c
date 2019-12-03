#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float altura,raio,areaCilindro,qtdadeLitros,qtdadeLatas,custo;
	
	printf("Digite o valor da altura em metros:");
	scanf("%f",&altura);
	
	printf("Digite o valor do raio em metros:");
	scanf("%f",&raio);
	
	areaCilindro=(3.14*raio*raio)+(2*3.14*raio*altura);
	printf("\n A area do cilindro é de: %.2f metros quadrados.\n",areaCilindro);
	
	qtdadeLitros=areaCilindro/3;
	printf("\n A quantidade de litros necessarios é de: %.2f\n",qtdadeLitros);
	
	qtdadeLatas=qtdadeLitros/5;
	printf("\n A quantidade de latas necessarias é de: %.2f\n",qtdadeLatas);
	
	custo=qtdadeLatas*20;
	printf("\n O valor total das tintas é de: R$ %.2f\n",custo);
	
	system("pause");
	return 0;
}
