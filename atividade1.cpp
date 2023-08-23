#include <stdio.h>

int main(){
	
	float base,altura,area;
	
	printf("informe a base:");
    scanf("%f", &base);
	
	printf("informe a altura:");
    scanf("%f", &altura);
    
    area = base * altura /2;
    
    printf("a area é: %f", area);
	
	return 0;
}

