// Verifica se número é par ou ímpar e se é positivo ou negativo

#include <stdio.h>

int main() {

    int num;
    
    printf("Informe um número: ");
    scanf("%d", &num);
    
    if (num % 2 == 0){
        printf("Par\n");
    }else{
        printf("Ímpar\n");
    }
    
    if (num < 0){
        printf("Negativo\n");
    }else{
        printf("Positivo");
    }

}