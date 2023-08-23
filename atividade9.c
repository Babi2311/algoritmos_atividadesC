#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float ValorGasto, gorjeta;
	
	printf("informe o valor gasto: ");
	scanf("%f", &ValorGasto);
	
	gorjeta = ValorGasto * 1.10;
	
	printf("o total a ser pago é: %.2f", gorjeta);
	
	
	return 0;	
}



	
