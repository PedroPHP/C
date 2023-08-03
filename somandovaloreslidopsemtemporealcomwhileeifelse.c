#include <stdio.h>
int main(){
	int n=0,s=0;
	
	while(n>-1)
	{	printf("Digite um numero: ");
		scanf("%i",&n);
		
		if(n>=0)	{	s=s+n;	
		printf("Somando = %i\n",s);	}
		else	{	printf("\nPROGRAMA FINALIZADO!");	}
		
	}
	printf("\nRESULTADO FINAL = %i",s);

}