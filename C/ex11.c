// Rendimento da pescaria

#include <stdio.h>

int main() {

    float peso, e = 0, m = 0;
    
    printf("Digite o peso: ");
    scanf("%f", &peso);
    
    if (peso > 50){
        e = peso - 50;
        m = e * 4;
        
        printf("Peso: %.2f kg \n", peso);
        printf("Peso excedido: %.2f kg \n", e);
        printf("Multa: R$ %.2f \n", m);
        
    }else{
        printf("Peso: %.2f kg \n", peso);
        printf("Peso excedido: %.2f kg \n", e);
        printf("Multa: R$ %.2f \n", m);
    }

}