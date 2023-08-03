#include <stdio.h>
int main(){
	int i,v,n=0,p=0,z=0;
	printf("Digite dez numeros apertando ENTER: \n");
	for(i=1;i<=10;i++)
	{	scanf("\n%i",&v);
			if(v<0)
			{n=n+1;}
			else if(v>0)
			{p=p+1;}
			else
			{z=z+1;}
	}
	printf("\nNegativos = %i\nPositivos = %i\nZeros = %i",n,p,z);

}
