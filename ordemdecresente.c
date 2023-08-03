#include <stdio.h>
int main(){
int n1,n2;
	printf("informe dois numeros apertando ENTER: \n");
	scanf("%i %i",&n1, &n2);
	
	if(n1>n2)
	{	printf("\n%i %i",n1,n2);	}
	else if(n2>n1)
	{	printf("\n%i %i",n2,n1);	}
	else 
	{	printf("\nOs dois valores sao iguais!");	}

}