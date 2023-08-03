#include <stdio.h>
int main(){

	float n1,n2,n3,op;
	
	printf("Digite as tres notas apertando ENTER: \n");
	scanf("%f %f %f", &n1,&n2,&n3);
	printf("\nDigite 1 para media aritimetica OU 2 para media ponderada");
	scanf("%f",&op);
	
	if(op==1)
	{	printf("\nMedia normal das tres notas - %.2f",((n1+n2+n3)/3));}
	else if(op==2)
	{	printf("\nMedia ponderada das tres notas - %.2f",((n1*3)+(n2*3)+(n3*4))/10);}
	else
	{	printf("\nOperacao de media invalida! Digite 1 ou 2!");}
}