// Converte metros em centímetros

#include <stdio.h>

int main() {
    
    float metros, centimetros;
    
    printf("Informe o valor em metros: ");
    scanf("%f", &metros);
    
    centimetros = metros * 100;
    
    printf("%.2f metros são %.2f centímetros.", metros, centimetros);
    
}