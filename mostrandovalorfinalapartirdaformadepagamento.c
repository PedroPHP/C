#include <stdio.h>
int main(){

float p,f;
	printf("Digite o preco do produto: ");
	scanf("%f",&p);
	printf("\nEscolha a forma de pagamento!\n1 - A vista em dinheiro ou cheque, com 10%% de desconto\n2 - A vista com cartao de credito, com 5%% de desconto\n3 - Em 2 vezes, preco normal de etiqueta sem juros\n4 - Em 3 vezes, preco de etiqueta com acrecimo de 10%%");
	scanf("%f",&f);
	
	if(f==1)
	{	printf("\nA vista em Dinheiro ou Cheque = %.2f",p*0.90);}
	else if(f==2)
	{	printf("\nA vista cartao de credito = %.2f",p*0.95);}
	else if(f==3)
	{	printf("\nParcelado Duas vezes sem juros = %.2f",p);}
	else if(f==4)
	{	printf("\nParcelado tres vezes com juros = %.2f",p*1.10);}
	else
	{	printf("\nA formade pagamento e inexistente ou alternativa chame o gerente!");}
}