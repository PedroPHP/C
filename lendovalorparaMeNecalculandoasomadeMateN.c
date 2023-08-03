#include <stdio.h>
int main(){
	int m,n,i,s=0;
	printf("Informa o valor de M e N apertando ENTER: ");
	scanf("%i %i",&m,&n);
	
	for(i=m;i<=n;i++)
	{	printf("\nSomando %i",i);
		s=s+i;
	}
	printf("\nResultado da soma = %i",s);

}