// Soma o dois números e multiplica a soma pelo primeiro número

#include <stdio.h>

// std = Standard (Padrão)
// io = input/output (Entrada/Saída) 

int main() {
	
	//Declaração de Variáveis
	int num1, num2, soma, multiplicacao;
	
	//Entradas
	printf("Informe o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Informe o segundo número: ");
	scanf("%d", &num2);
	
	//Processamentos
	soma = num1 + num2;
	multiplicacao = soma * num1;
	
	//Saída
	printf("O resultado da multiplicação é: %d", multiplicacao);
	
}