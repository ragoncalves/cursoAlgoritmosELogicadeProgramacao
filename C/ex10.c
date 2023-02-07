// Peso ideal de acordo com sexo

#include <stdio.h>
#include <ctype.h>

int main() {

    float altura, peso_ideal;
    char sexo;

    printf("Informe a sua altura: ");
    scanf("%f", &altura);
    
    gets(stdin); //Em caso de solicitar caracter depois
    
    printf("Informe o seu sexo (M ou F): ");
    scanf("%c", &sexo);
    

    
    if (tolower(sexo) == 'm'){
        peso_ideal = (72.7 * altura) - 58;
        printf("Peso ideal: %.2f kg", peso_ideal);
    }
    if (tolower(sexo) == 'f'){
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Peso ideal: %.2f kg", peso_ideal);
    }
    if (tolower(sexo) != 'm' && tolower(sexo) != 'f'){
        printf("Sexo não reconhecido.");
    }
        
}