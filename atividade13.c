#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float MinhaSombra, SombraPredio, MinhaAltura, AlturaPredio;
	
	printf("minha altura �: ");
	scanf("%f", &MinhaAltura);
	
	printf("minha a sombra do predio: ");
	scanf("%f", &SombraPredio);
	
	printf("minha sombra �: ");
	scanf("%f", &MinhaSombra);
	
	AlturaPredio = (SombraPredio / MinhaSombra) * MinhaAltura;
	
	printf("A altura do predio �: %f", AlturaPredio);
	
	
	return 0;	
}



	
