#include <stdio.h>
int main(){
    
    int n,l,s=0;
	printf("Digite um numero N: ");
	scanf("%i",&l);
	
	for(n=1;n<l;n++)
	{	printf("\nSomando > %i",n);
		s=s+n;
	}
	
	printf("\nSoma total = %i",s);

}