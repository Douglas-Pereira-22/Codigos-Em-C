#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	float saldo,novoSaldo;
	
	printf("Digite o saldo:");
	scanf("%f",&saldo);
	
	novoSaldo= saldo+saldo * 0.02;
	
	printf("Saldo com reajuste: %.2f \n",novoSaldo);
	
	system("pause");
	
	return 0;
}
