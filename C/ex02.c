// Estoque médio de uma peça

#include <stdio.h>

int main() {

    int quant_min, quant_max;
    float media;
    
    printf("Informe a quantidade mínima de estoque: ");
    scanf("%d", &quant_min);
    
    printf("Informe a quantidade máxima de estoque: ");
    scanf("%d", &quant_max);
    
    media = (quant_min + quant_max) / 2;
    
    printf("O estoque médio é: %.2f", media);

    return 0;
}