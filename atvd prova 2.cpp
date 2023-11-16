#include <stdio.h>


struct Fruta {
    char nome[50];
    float precoPorQuilo;
};

int main() {
    
    struct Fruta frutas[5];
    int i;
    float valorEmReais, quantidade;

    
    for (i = 0; i < 5; i++) {
        printf("Informe o nome da fruta %d: ", i + 1);
        scanf("%s", frutas[i].nome);

        printf("Informe o preco por quilo da fruta %d: ", i + 1);
        scanf("%f", &frutas[i].precoPorQuilo);
    }

    
    printf("\nInforme um valor em reais: ");
    scanf("%f", &valorEmReais);

    
    printf("\nQuantidade de cada fruta que pode ser adquirida:\n");
    for (i = 0; i < 5; i++) {
        quantidade = valorEmReais / frutas[i].precoPorQuilo;
        printf("%s: %.2f quilos\n", frutas[i].nome, quantidade);
    }

    return 0;
}

