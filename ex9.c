#include <stdio.h>
#include <conio.h>


void categoriaNadador(int *idade){
	
	switch(*idade){
		case 5 ... 7:
			printf("Categoria A");
			break;
		case 8 ... 10:
			printf("Categoria B");
			break;
		case 11 ... 13:
			printf("Categoria C");
			break;
		case 14 ... 17:
			printf("Categoria D");
			break;
		case 18 ... 100:
			printf("Categoria E");
			break;
		default:
			printf("Sem categoria");
			break;
	}
	
}

void valorIdade(int *idade){
	printf("informe sua idade: ");
	scanf("%d", idade);
}

int main(){
	int idade;
	
	valorIdade(&idade);
	categoriaNadador(&idade);
	return 0;
}
