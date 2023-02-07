// Soma de dois números

#include <stdio.h>

int main() {
    
    int num1, num2, soma;
    
    printf("Informe o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Informe o segundo número: ");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    
    printf("%d + %d = %d", num1, num2, soma);
    
}