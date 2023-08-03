#include <stdio.h>
int main(){

	int n=1,p=0,i=0,po=0,ne=0;
	
	while(n!=0)
	{	printf("Digite um numero, programa ira finalizar digitando 0: ");
		scanf("%i",&n);
		
		if((n%2==0) && (n!=0))	{	p=p+1;	}
		else if((n%2!=0) && (n!=0))	{	i=i+1;	}
		else{}
		
		if(n>0)			{	po=po+1;	}
		else if(n<0)	{	ne=ne+1;	}
		else{}
	}
	printf("Pares = %i\nImpares = %i\nPositivos = %i\nNegativos = %i",p,i,po,ne);


}