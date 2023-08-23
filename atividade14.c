#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float SalarioMinimo, QuantidadeKwat, ValorKwat, TotalPagar;
	
	printf("informe o valor do salario minimo: ");
	scanf("%f", &SalarioMinimo);
	
	printf("informe a quantidade de kwat: ");
	scanf("%f", &QuantidadeKwat);
	
	ValorKwat = SalarioMinimo / 7 / 100;
	TotalPagar = QuantidadeKwat * ValorKwat;
	
	printf("o valor em reais de cada kwat é: %f, o total a pagar é: %f", ValorKwat, TotalPagar);
	
	
	return 0;	
}



	
