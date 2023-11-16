#include <stdio.h>

int main(){
	
int matriz[4][4], i, j, somaDiagonal;

somaDiagonal = matriz[0][0];

	for(i=0; i < 4; i++){
		for(j=0; j < 4; j++){
			printf("alimente com nuemros inteiros a matriz [%d][%d]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			
			if(i == j){
				somaDiagonal += matriz[i][j];
			}
		}
	}
	
	
	printf("\nMatriz informada:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    somaDiagonal = matriz[0][0]+ matriz[1][1]+ matriz[2][2] + matriz[3][3];
	
	
	printf("\nSoma dos elementos da diagonal principal: %d\n", somaDiagonal);
    
   	 if (somaDiagonal < 25) {
   	 	
        printf("A soma dos elementos da diagonal principal e menor que 25.\n"); 
    	}
		 
		else if (somaDiagonal == 25) {
			
       		 printf("A soma dos elementos da diagonal principal e igual a 25.\n");
   			 }
				 else {
				 	
       				printf("A soma dos elementos da diagonal principal e maior que 25.\n");
    				}
	


 return 0;
}
