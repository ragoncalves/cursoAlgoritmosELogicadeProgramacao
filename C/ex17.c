// Determina maior valor até que a entrada seja 0

#include <stdio.h>

int main() {

    int n, maior = 0;
    
    printf("Informe um número inteiro: ");
    scanf("%d", &n);
    
    while (n != 0){
        if (n > maior){
            maior = n;
        }
        printf("Informe um número inteiro: ");
        scanf("%d", &n);
    }
    printf("O maior número digitado foi o %d", maior);

}