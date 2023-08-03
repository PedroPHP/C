#include <stdio.h>
int main(){
	int n=1,s=0;
	
	while(n!=0)
	{	printf("Digite numeros para zero e digite 0 para finalizar: ");
		scanf("%i",&n);
		
		if(n>0)	{	s=s+n;	}
		else{}
		
	}
	printf("\nRESULTADO FINAL = %i",s);

}