#include <stdio.h>

int main(){
    int qleite,qpao;
	float spao, sleite, valor;
	
	printf("informe a qunatidade de paes, aperte ENTER a quantidade de leites: \n");
	scanf("%i %i",&qpao, &qleite);
	
	spao=qpao*0.25;
	sleite=qleite*2.50;
	valor=spao+sleite;
	
	printf("valo total da compra e de: R$ %.2f",valor);
}