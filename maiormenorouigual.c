#include <stdio.h>
int main(){
	int n1, n2;
	printf("Digite dois numeros apertando ENTER: ");
	scanf("%i %i",&n1, &n2);
	
	if(n1>n2)
	{	printf("\nNumero maior = %i\nNumero menor = %i",n1,n2);	}
	else if(n1<n2)
	{	printf("\nNumero maior = %i\nNumero menor = %i",n2,n1);	}
	else
	{	printf("\n%i e %i tem o mesmo valor",n1,n2);	}

}