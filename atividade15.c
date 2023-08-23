#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int ValorSaque, Cedulas;
	
	printf("informe o valor do saque: ");
	scanf("%d", &ValorSaque);
	
	Cedulas = ValorSaque / 100;
	printf("\nnotas de 100: %d", Cedulas);
	ValorSaque = ValorSaque % 100;
	
	Cedulas = ValorSaque / 50;
	printf("\nnotas de 50: %d", Cedulas);
	ValorSaque= ValorSaque % 50;
	
	Cedulas = ValorSaque / 20;
	printf("\nnotas de 20: %d", Cedulas);
	ValorSaque= ValorSaque % 20;
	
	Cedulas = ValorSaque / 10;
	printf("\nnotas de 10: %d", Cedulas);
	ValorSaque= ValorSaque % 10;
	
	Cedulas = ValorSaque / 5;
	printf("\nnotas de 5: %d", Cedulas);

	printf("\nsaque efetuado com sucesso");	
	
	
	return 0;	
}



	
