// Peso ideal

#include <stdio.h>

int main() {
    
    float altura, peso;
    
    printf ("Informe a sua altura em metros: ");
    scanf("%f", &altura);
    
    peso = (altura * 72.7) - 58;
    
    printf("Seu peso ideal é: %.2f kg.", peso);
    
}