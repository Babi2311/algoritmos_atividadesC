#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int horas,segundos,minutos,TotalSegundos;
	
	printf("informe horas: ");
	scanf("%d", &horas);
	
	printf("informe segundos: ");
	scanf("%d", &segundos);
	
	printf("informe minutos: ");
	scanf("%d", &minutos);
	
	TotalSegundos = horas *3600 + minutos * 60 + segundos;
	
	printf("tempo total: %d", TotalSegundos);
	
	system("pause");
	
	return 0;
}
	
	

	
