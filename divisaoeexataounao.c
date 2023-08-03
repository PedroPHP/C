#include <stdio.h>
int main(){
int n1,n2;
	printf("Informe dois numeros apertando ENTER: \n");
	scanf("%i %i",&n1, &n2);
	
	if(n1%n2==0)
	{	printf("\nA divisao de %i por %i e exata",n1,n2);	}
	else 
	{	printf("\nA divisao de %i por %i NAO e exata",n1,n2);		}


}
