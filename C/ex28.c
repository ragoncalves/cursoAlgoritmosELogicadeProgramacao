// Carrega um vetor com 10 números inteiros, calcula e mostra os superiores a 50 e suas respectivas posições. Mostra mensagem caso não haja número nesta condição

#include <stdio.h>

int main(){
    
    int vetor[10];
    char tem_maior_50 = 0;
    
    for(int i = 0; i < 10; i++){
        printf("Informe o valor para o vetor %d/10: ", (i+1));
        scanf("%d", &vetor[i]);
    }
    
    for(int i = 0; i < 10; i++){
        if(vetor[i] > 50){
            printf("O número %d está na posição %d\n", vetor[i], i);
            tem_maior_50 = 1;
        }
    }
    
    if(tem_maior_50 < 1){
        printf("Não existe nenhum número maior que 50.");
    }
    
}