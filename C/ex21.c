// Lê usuário e senha e não aceita as entradas iguais

#include <stdio.h>
#include <string.h>

int main() {
    
    char nome[100], senha[100];
    
    printf("Informe o nome: ");
    gets(nome);
    
    printf("Informe a senha: ");
    gets(senha);
    
    while(!strcmp(nome, senha)){
        printf("Nome de usuário e senha devem ser diferentes.\n");
        printf("Informe o nome: ");
        gets(nome);
        printf("Informe a senha: ");
        gets(senha);
    }
    
}