// Positivo ou negativo

#include <stdio.h>

int main() {

    float a, b, n;
    
    printf("Inform um número: ");
    scanf("%f", &n);
    
    if (n > 0){
        a = n;
        printf("Valor positvo");
        printf("\n");
        printf("%.2f", a);
    }else{
        b = n;
        printf("Valor negativo");
        printf("\n");
        printf("%.2f", b);
    }
    
}