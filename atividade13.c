#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float MinhaSombra, SombraPredio, MinhaAltura, AlturaPredio;
	
	printf("minha altura é: ");
	scanf("%f", &MinhaAltura);
	
	printf("minha a sombra do predio: ");
	scanf("%f", &SombraPredio);
	
	printf("minha sombra é: ");
	scanf("%f", &MinhaSombra);
	
	AlturaPredio = (SombraPredio / MinhaSombra) * MinhaAltura;
	
	printf("A altura do predio é: %f", AlturaPredio);
	
	
	return 0;	
}



	
