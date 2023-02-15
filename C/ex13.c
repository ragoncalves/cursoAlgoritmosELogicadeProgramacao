// Calcula o quadrado de 4 números e imprime o terceiro caso seja maior que 1000

#include <stdio.h>

int main() {

    float n1, n2, n3, n4, r1, r2, r3, r4;
    
    printf("Entre com o primeiro número: ");
    scanf("%f", &n1);
    printf("Entre com o segundo número: ");
    scanf("%f", &n2);
    printf("Entre com o terceiro número: ");
    scanf("%f", &n3);
    printf("Entre com o quarto número: ");
    scanf("%f", &n4);
    
    r1 = n1 * n1;
    r2 = n2 * n2;
    r3 = n3 * n3;
    r4 = n4 * n4;
    
    if (r3 >= 1000){
        printf("%.2f", r3);
    }else{
        printf("%.2f² = %.2f \n", n1, r1);
        printf("%.2f² = %.2f \n", n2, r2);
        printf("%.2f² = %.2f \n", n3, r3);
        printf("%.2f² = %.2f \n", n4, r4);
    }

}