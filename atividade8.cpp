#include <stdio.h>

int main(){
	
	float KmPercorrido,DiasAlugado,ValorAPagar;
	
	printf("informe a quantidade de km percorridos: ");
	scanf("%f", &KmPercorrido);
	
	printf("informe por quantos dias o carro foi alugado: ");
	scanf("%f", &DiasAlugado);
	
	ValorAPagar = (0,15 * KmPercorrido) + (70,00 * DiasAlugado);
	
	printf("O valor total a pagar é: %f", ValorAPagar);
	
	
	return 0;
}
