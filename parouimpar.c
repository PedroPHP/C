#include <stdio.h>
int main(){
int n;
	printf("Informe um numero: ");
	scanf("%i",&n);
	
	if(n==0)
	{	printf("\nO numero e ZERO!");	}
	else if((n%2)==0)
	{	printf("\nO numero e PAR!");	}
	else
	{	printf("\nO numero e IMPAR!");	}

}