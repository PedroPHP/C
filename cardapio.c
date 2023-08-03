#include <stdio.h>
int main(){
float q,i; 
	printf("DIgite o numero do pedido e a sua quantidade apertando ENTER: ");
	scanf("%f %f", &i, &q);
	
	if(i==100)
	{	printf("\nSeu pedido foi o item %.0f com quantidade %.0f e o valor e: %.2f",i,q, 1.20*q);
		}
	else if(i==101)
	{	printf("\nSeu pedido foi o item %.0f com quantidade %.0f e o valor e: %.2f",i,q, 1.30*q);
		}
	else if(i==102)
	{	printf("\nSeu pedido foi o item %.0f com quantidade %.0f e o valor e: %.2f",i,q, 1.50*q);
		}
	else if(i==103)
	{	printf("\nSeu pedido foi o item %.0f com quantidade %.0f e o valor e: %.2f",i,q, 1.20*q);
		}
	else if(i==104)
	{	printf("\nSeu pedido foi o item %.0f com quantidade %.0f e o valor e: %.2f",i,q, 1.30*q);
		}
	else if(i==105)
	{	printf("\nSeu pedido foi o item %.0f com quantidade %.0f e o valor e: %.2f",i,q, 1.00*q);
		}
	else
	{	printf("\nO numero do seu pedido e inexistente");
		}

}