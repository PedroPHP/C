#include <stdio.h>
int main(){

    int n;
	printf("Digite um numero: ");
	scanf("%i",&n);
	
	if(n>0)
	{	printf("\nA metade de %i e: %i",n, n/2);	}
	else if(n<0)
	{	printf("\nO quadrado de %i e: %i",n,n*n);	}
	else
	{	printf("\nO Numero %i e nulo",n);	}
}