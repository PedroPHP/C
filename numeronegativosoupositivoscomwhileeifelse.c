#include <stdio.h>
int main(){

	int n=1;
	
	while(n!=0)
	{	printf("Digite um numero: ");
		scanf("%i",&n);
		 if(n>0)	{	printf("O numero e Positivo!\n");	}
	else if(n<0)	{	printf("O numero e Negativo!\n");	}
	else			{	printf("PROGRAMA FINALIZADO!\n");	}
	}
}