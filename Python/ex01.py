#Soma o dois números e multiplica a soma pelo primeiro número

num1 = int(input("Informe o primeiro número: "))
num2 = int(input("Informe o segundo número: "))

soma = num1 + num2
multiplicacao = soma * num1

print("O resultado da multplicação entre a soma dos números e o primeiro número é o {0}".format(multiplicacao))