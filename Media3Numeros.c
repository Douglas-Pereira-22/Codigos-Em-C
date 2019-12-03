#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	float n1,n2,n3,media;
	
	printf("Digite o 1° numero:\n");
	scanf("%f",&n1);
	
	printf("Digite o 2° numero:\n");
	scanf("%f",&n2);
	
	printf("Digite o 3° numero:\n");
	scanf("%f",&n3);	
	
	media=(n1+n2+n3)/3;
	
	printf("Media: %.2f \n",media);
	
	system("pause");
	
	return 0;
}
