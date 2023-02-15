// Conta de 1 a 100 e mostra uma mensagem em cada múltiplo de 10

#include <stdio.h>

int main(){
    for (int i = 1; i <= 100; i++){
        printf("%d\n", i);
        if (i % 10 == 0){
            printf("%d: Múltiplo de 10\n", i);
        }
    }
}