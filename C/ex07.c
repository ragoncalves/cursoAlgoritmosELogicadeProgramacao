// Imprimir se maior que 100

#include <stdio.h>

int main() {

float n;

printf("Favor informar um número: ");
scanf("%f", &n);

if (n > 100){
    printf("%.2f", n);
}else{
    n = 0;
    printf("%.0f", n);
    }
}