// Mostra um vetor de 20 elementos e a soma deles

#include<stdio.h>

int main(){
    
    int vetor[20], soma = 0;
    
    for (int i = 0; i < 20; i++){
        
        printf("Informe o valor para o vetor %d/20: ", (i+1));
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
        
    }
    
    printf("A soma do vetor é %d.", soma);
    
}