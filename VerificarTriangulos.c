#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float a,b,c;
	
	printf("Digite o valor do lado A \n");
	scanf("%f",&a);
   if(a==0)
    {
    	printf("n�o � um triangulo\n");
	}
	else
    printf("Digite o valor do lado B\n");
    scanf("%f",&b);
    
   if(b==0)
    {
		printf("n�o � um triangulo\n");
	}
	else
    printf("Digite o valor do lado C\n");
    scanf("%f",&c);
   if(c==0)
    {
    	printf("n�o � um triangulo\n");
	}	
	
	if(a+b<c || b+c<a || c+a<b)
	{
    	printf("Nao � um triangulo\n");
	}
	
	else
	if(a==b && a==c && b==c)
	{
		printf("o triangulo � Equilatero\n");
	}

	if((a==b && a!=c&& b!=c)||(b==c&& c!=a)||(c==a && c!=b)){
		printf("o triangulo � Isoceles\n");
}
	else
	if(a!=b && a!=b && b!=c)
	{
    	printf(" o triangulo � Escaleno\n");
	}
	
	system("pause");
	return 0;
}
