// Cálculo de valor de salário por horas trabalhadas

#include <stdio.h>

int main() {
    
    float c, n, e, extra, salario;
    
    printf("Informe seu código: ");
    scanf("%f", &c);
    
    printf("Horas trabalhadas: ");
    scanf("%f", &n);
    
    if (n > 50){
        e = n - 50;
        salario = n * 10;
        extra = e * 20;
        printf("Trabalhador: %.0f \n", c);
        printf("Horas trabalhadas: %.2f Horas \n", n);
        printf("Salário: R$%.2f \n", salario);
        printf("Extra: R$%.2f \n", extra);
    }else{
        salario = n * 10;
        printf("Trabalhador: %.0f \n", c);
        printf("Horas trabalhadas: %.2f Horas \n", n);
        printf("Salário: R$%.2f \n", salario);
    }
    
}