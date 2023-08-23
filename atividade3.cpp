#include <stdio.h>

int main(){
	
	int numero;
	
	printf("informe um numero; ");
	scanf("%d", &numero);
	
	printf("numero: %2d. antecessor: %2d. sucessor: %2d.\n", numero, numero-1, numero+1);

	return 0;
}
