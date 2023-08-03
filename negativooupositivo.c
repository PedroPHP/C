#include <stdio.h>
int main(){

int n;
	printf("Informe um numero inteiro: ");
	scanf("%i",&n);
	
	if(n>0)
	{	printf("\nO numero e positivo!");	}
	else if(n<0)
	{	printf("\nO numero e negativo!");	}
	else
	{	printf("\nO numero e zero ou invalido!");	}
}