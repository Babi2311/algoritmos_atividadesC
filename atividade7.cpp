#include <stdio.h>

int main(){
	
	float CapacidadeDoTanque,LitrosAbastecidos,QuilometragemPercorrida,ConsumoMedio,Autonomia;
	
	printf("informe a capacidade do tanque: ");
	scanf("%f", &CapacidadeDoTanque);
	
	printf("informe a quilometragem percorrida: ");
	scanf("%f", &QuilometragemPercorrida);
	
	printf("informe a quantidade de litros abastecidos: ");
	scanf("%f", &LitrosAbastecidos);
	
	ConsumoMedio = (QuilometragemPercorrida/LitrosAbastecidos);
	
	printf("o consumo m�dio do veiculo �: %f",ConsumoMedio);
	
	Autonomia = (CapacidadeDoTanque - LitrosAbastecidos)*ConsumoMedio;
	
	printf("a autonomia que o veiculo ainda teria �: %f",Autonomia);
	
	
	
	
	return 0;
}
