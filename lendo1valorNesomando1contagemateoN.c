#include <stdio.h>
int main(){
	int i,n,s=0;
	printf("Digite um numero N para comecar e aperte ENTER: ");
	scanf("%i",&n);
	
	for(i=1;i<=n;i++)
	{	printf("\nSomando %i",i);
		s=s+i;
		}
		printf("\nValor final da soma = %i",s);	

}
