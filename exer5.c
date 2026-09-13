#include<stdio.h>
#include<conio.h>

//exer 5

void invert(int *a,int *b)
{
	int invert;
	
	invert = *a;
	*a = *b;
	*b = invert;
}

void main()
{
	int a, b;
	
	printf("\nDigite o valor de A: ");
	scanf("%d", &a);
	
	printf("\ndigite o valor B: ");
	scanf("%d", &b);
	
	invert(&a, &b);
	
	printf("\n\nSeus valores:");
	printf("\nValor de A: %d", a);
	printf("\nValor de B: %d", b);
	
	printf("\n\nFim do programa :D !");
}
