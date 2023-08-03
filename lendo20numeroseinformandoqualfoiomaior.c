#include <stdio.h>
int main(){
	int i,n,m=0;
	printf("Informa vinte numeros apertando ENTER: \n");
	for(i=1;i<=20;i++)
	{	scanf("%i",&n);
		if(n>m)	{m=n;}
		else
		{}
	}
	printf("\nO maior numero informado foi: %i",m);

}