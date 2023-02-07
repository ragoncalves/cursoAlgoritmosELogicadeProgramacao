// Calcula salário a partir das horas trabalhadas

#include <stdio.h>

int main() {
    
    float valorHora, horasTrabalhadas, salario;
    
    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);
    
    printf("Informe o valor da hora de trabalho: R$");
    scanf("%f", &valorHora);
    
    salario = valorHora * horasTrabalhadas;
    
    printf("Seu salário será R$%.2f", salario);
    
}