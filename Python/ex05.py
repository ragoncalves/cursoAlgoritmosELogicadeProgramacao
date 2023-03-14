# Calcula salário a partir das horas trabalhadas

valor_hora = float(input('Valor por hora trabalhada: '))
hora_trabalhada = float(input('Horas trabalhadas no mês: '))
salario = valor_hora * hora_trabalhada

print('Salário: R${:.2f}'.format(salario))