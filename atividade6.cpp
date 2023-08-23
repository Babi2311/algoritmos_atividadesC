#include <stdio.h>

int main(){
	
	float reais,dolar,TaxaDeCambio;
	
	printf("informe a taxa de cambio: ");
	scanf("%f", &TaxaDeCambio);
	
	printf("informe o valor em reais: ");
	scanf("%f", &reais);
	
	dolar = reais / TaxaDeCambio;
	
	printf("o valor do real convertido pra dolar é: %f", dolar);
	
	return 0;
}
