// Levanta quantidade e defeitos de mouses do setor de TI

#include <stdio.h>

int main() {

    int contador_total = 0, contador_sit_1 = 0, contador_sit_2 = 0, contador_sit_3 = 0, contador_sit_4 = 0, identificacao, defeito;
    
    printf("Informe a identificação: ");
    scanf("%d", &identificacao);
    
    while(identificacao != 0){
        printf("1 - Necessita de esfera \n");
        printf("2 - Necessita de limpeza \n");
        printf("3 - Necessita de troca de cabo ou conector \n");
        printf("4 - Quebrado ou inutilizado \n");
        printf("Infome o tipo de defeito: \n");
        scanf("%d", &defeito);
        
        if(defeito == 1){
            contador_sit_1++;
        }
        if(defeito == 2){
            contador_sit_2++;
        }
        if(defeito == 3){
            contador_sit_3++;
        }
        if(defeito == 4){
            contador_sit_4++;
        }
        contador_total++;
        printf("Informe a identificação: ");
        scanf("%d", &identificacao);
    }
    
    float p1, p2, p3, p4;
    p1 = ((float)contador_sit_1 / (float)contador_total * 100.0);
    p2 = ((float)contador_sit_2 / (float)contador_total * 100.0);
    p3 = ((float)contador_sit_3 / (float)contador_total * 100.0);
    p4 = ((float)contador_sit_4 / (float)contador_total * 100.0);
    
    printf("Quantidade de mouses: %d \n\n", contador_total);
    printf("Situação \t\t\t Quantidade \t Percentual \n");
    printf("1 - Necessita de esfera \t %d \t %.2f%% \n", contador_sit_1, p1);
    printf("2 - Necessita de limpeza \t %d \t %.2f%% \n", contador_sit_2, p2);
    printf("3 - Necessita de troca de cabo ou conector \t %d \t %.2f%% \n", contador_sit_3, p3);
    printf("4 - Quebrado ou inutilizado \t %d \t %.2f%% \n", contador_sit_4, p4);
}