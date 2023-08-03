#include <stdio.h>
int main(){
	int i,v;
	printf("Digite uma seguencia de dez valores!\n");
	for(i=0;i<10;i++)
	{	scanf("\n%i",&v);	
	if (v<0)
	{	printf("\n%i - Numero Negativo!\n",v);	}
	else if (v>0)
	{	printf("\n%i - Numero Positivo!\n",v);	}
	else
	{	printf("\n%i - Numero Zero!\n",v);	}
	}
	

}