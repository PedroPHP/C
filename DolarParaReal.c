#include <stdio.h>

int main(){
    float cot,dol, real;
	printf("informe a cotacao atual do Dolar: ");
	scanf("%f",&cot);
	printf("\ninforme a quantidade de dolares a serem convertidos: ");
	scanf("%f",&dol);
	
	real=cot*dol;
	printf("\nAquantidade convertidade em reais brasileiros e: %.2f",real);

}