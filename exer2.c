#include <conio.h>
#include <stdio.h>

//exer 2

int soma(int num1, int num2)
{
	int soma;
	
	soma = num1 + num2;
	return soma;
}

int subt(int num1, int num2)
{
	int subt;
	
	subt = num1 - num2;
	return subt;
}

int mult(int num1, int num2)
{
	int mult;
	
	mult = num1 * num2;
	return mult;
}

int div(int num1, int num2)
{
	int div;
	
	div = num1 / num2;
	return div;
}

void main()
{
	int num1, num2, result1, result2, result3, result4;
	
	printf("\nDigite o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("\nDigite o segundo numero: ");
	scanf("%d", &num2);
	
	result1 = soma(num1, num2);
	printf("\n\nA soma dos numeros eh: %d", result1);
	
	result2 = subt(num1, num2);
	printf("\nA subtracao dos numeros eh: %d", result2);
	
	result3 = mult(num1, num2);
	printf("\nA multiplicacao dos numero eh: %d", result3);
	
	result4 = div(num1, num2);
	printf("\nA divisao dos numeros eh: %d", result4);
	
	printf("\n\nFim do programa :D !");
}

