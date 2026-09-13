#include <stdio.h>
#include <conio.h>


float menorNum(float a, float b, float c){
	float menor;
	
	menor = a;
	
	if (b < menor){
		menor = b;
	}
	if (c < menor){
		menor = c;
	}
	return menor;
}

float maiorNum(float a, float b, float c){
	float maior;
	
	maior = a;
	
	if (b > maior){
		maior = b;
	}
	if (c > maior){
		maior = c;
	}
	return maior;
}


float mediaNum(float a, float b, float c){
	float media;
	media = (a + b + c) / 3;
	return media;
}

float adicaoNum(float a, float b, float c){
	float soma;
	soma = a + b + c;
	return soma;
}

int main(){
	float a, b, c;
	float resultado, resultadoMedia, resultadoMaior, resultadoMenor;
	
	printf("informe o valor de A: ");
	scanf("%f", &a);
	printf("informe o valor de B: ");
	scanf("%f", &b);
	printf("informe o valor de C: ");
	scanf("%f", &c);
	
	resultado = adicaoNum(a,b,c);
	printf("a soma eh: %0.2f",resultado);
	
	resultadoMedia = mediaNum(a,b,c);
	printf("\na media eh: %0.2f",resultadoMedia);
	
	resultadoMaior = maiorNum(a,b,c);
	printf("\no maior numero eh: %0.2f",resultadoMaior);
	
	resultadoMenor = menorNum(a,b,c);
	printf("\no menor numero eh: %0.2f",resultadoMenor);
	return 0;
	}
