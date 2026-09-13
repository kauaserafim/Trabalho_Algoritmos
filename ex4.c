#include <stdio.h>
#include <conio.h>

float SalarioLiquido(float SalarioTotal, float descontos){
	float salario;
	salario = SalarioTotal - descontos;
	return salario;
}


float SalarioBrutoTotal(float SalarioB, float TotalHoras){
	float totalSalario;
	totalSalario = SalarioB + TotalHoras;
	return totalSalario;
}

float TotalHorasExtras(int horasEx){
	float total;
	total = horasEx * 20;
	return total;
}

float descontosFolha(){
	float descontos;
	
	printf("\ninforme o total de descontos: ");
	scanf("%f", &descontos);
	return descontos;
	}

int horasExtras(){
	int horasextras;
	printf("\ninforme o total de horas extras (em horas inteiras, exemplo: 1 - 1 hora, 2 - horas): ");
	scanf("%d", &horasextras);
	return horasextras;
}

float salarioBruto(){
	float salario;
	printf("informe o seu salario bruto: ");
	scanf("%f", &salario);
	return salario;
}

int main(){
	float SalarioB, descontos, TotalHoras, SalarioTotal, SalarioLiq;
	int horasEx;
	
	SalarioB = salarioBruto();
	printf("o seu salario bruto eh: %0.2f",SalarioB);
	
	horasEx = horasExtras();
	printf("o total de horas extras eh: %d",horasEx);
	
	descontos = descontosFolha();
	printf("o total de descontos eh: %0.2f",descontos);
	
	TotalHoras = TotalHorasExtras(horasEx);
	printf("\no valor total de horas extras eh: %0.2f",TotalHoras);
	
	SalarioTotal = SalarioBrutoTotal(SalarioB, TotalHoras);
	printf("\no salario total eh: %0.2f",SalarioTotal);
	
	SalarioLiq = SalarioLiquido(SalarioTotal, descontos);
	printf("\no salario liquido eh: %0.2f",SalarioLiq);
	
	return 0;
	
}
