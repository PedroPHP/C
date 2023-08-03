#include <stdio.h>
int main(){
	int n,i=1,r=0;
	printf("Digite um numero: \n");
	scanf("%i",&n);
	
	while(i<=n)
	{	if(n%i==0){r=r+1;}
		else {}
		i=i+1;
	}
	if(r==2)	
	{	printf("\nO numero e primo!");}
	else
	{	printf("\nO numero nao e primo!");}

}