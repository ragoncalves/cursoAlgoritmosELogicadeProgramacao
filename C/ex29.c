// Recebe um inteiro e um vetor de 5 posições de reais, Se o código for 0, termina o programa, se for 1, mostra o valor na ordem direta, se for 2, mostra na ordem invertida

#include <stdio.h>

int main(){
    
    float vetor[5];
    int codigo;
    
    printf("Informe o código: ");
    scanf("%d", &codigo);
    
    if (codigo != 0){
        for (int i = 0; i < 5; i++){
            printf("Informe um número real: ");
            scanf("%f", &vetor[i]);
        }
    }
    
    if (codigo == 1){
        for (int i = 0; i < 5; i++){
            printf("%.2f\n", vetor[i]);
        }
    }
    
    if (codigo == 2){
        for (int i = 4; i >= 0; i--){
            printf("%.2f\n", vetor[i]);
        }
    }
    
}