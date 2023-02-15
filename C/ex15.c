// Lê um determinado índice de poluição e notifica ou não um grupo de empresa

#include <stdio.h>

int main() {

    float n;
    
    printf("Informe o índice de poluição entre 0.05 e 0.25: ");
    scanf("%f", &n);
    
    if (n >= 0.3 && n < 0.4){
        printf("GRUPO 1, SUSPENDER ATIVIDADES!");
    }else if (n >= 0.4 && n < 0.5){
        printf("GRUPO 2, SUSPENDER ATIVIDADES!");
    }else if (n >= 0.5){
        printf("TODOS OS GRUPOS, SUSPENDER ATIVIDADES!!!");
    }else{
        printf("Níveis aceitaveis.");
        }
}