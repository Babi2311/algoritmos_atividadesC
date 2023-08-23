#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float VotosBrancos, VotosNulos, VotosValidos, TotalVotos;
	
	printf("informe a quantidade de votos brancos: ");
	scanf("%f", &VotosBrancos);
	
	printf("informe a quantidade de votos nulos: ");
	scanf("%f", &VotosNulos);
	
	printf("informe a quantidade de votos validos: ");
	scanf("%f", &VotosValidos);
	
	TotalVotos = VotosBrancos + VotosNulos + VotosValidos;
	
	printf("\n%% de votos brancos: %.2f", VotosBrancos / TotalVotos);
	printf("\n%% de votos nulos: %.2f", VotosNulos / TotalVotos);
	printf("\n%% de votos validos: %.2f", VotosValidos / TotalVotos);
	
	return 0;	
}



	
