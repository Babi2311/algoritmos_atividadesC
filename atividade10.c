#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float SapatosVendidos, VendasDoMes, salario;
	
	printf("informe o valor total das vendas: ");
	scanf("%f", &VendasDoMes);
	
	printf("informe o numero de sapatos vendidos: ");
	scanf("%f", &SapatosVendidos);
	
	salario = (VendasDoMes * 1.20) + (SapatosVendidos * 5.00);
	
	printf("o salario do vendedor naquele mes é: %.2f", salario);
	
	return 0;	
}



	
