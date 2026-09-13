#include <stdio.h>
#include <conio.h>


void area(float *larg, float *comp){
	float calc;
	calc = *larg * *comp;
	printf("a area eh: %0.2f",calc);
}

void valores(float *larg, float *comp){
	
	
	printf("informe a largura do quadrado/retangulo: ");
	scanf("%f", larg);
	printf("informe o comprimento do quadrado/retangulo: ");
	scanf("%f", comp);
}


int main(){
	float larg, comp;
	
	valores(&larg, &comp);
	area(&larg, &comp);
	return 0;
}
