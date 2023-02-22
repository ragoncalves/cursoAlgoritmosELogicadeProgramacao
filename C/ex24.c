// Carrega vetor de 5 elementos e imprime os pares

#include <stdio.h>

int main() {

    int vetor[5], pares[5], cont_p = 0;
    
    for(int i = 0; i <5; i++){
        printf("Informe um valor: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            if(vetor[i] > 0){
            pares[cont_p] = vetor[i];
            cont_p = cont_p + 1;
            }
        }
    }
    for(int i = 0; i < cont_p; i++){
        printf("%d\n", pares[i]);
    }
}