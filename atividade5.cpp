#include <stdio.h>

int main(){
	
	int GrausCelsius,Fahrenheit;
	
	printf("informe graus celsius: ");
	scanf("%d", &GrausCelsius);
	
	Fahrenheit = GrausCelsius * 1.8 + 32;
	
	printf("A temperatura convertida para Fahrenheit: %d",Fahrenheit);
	
	return 0;
}
