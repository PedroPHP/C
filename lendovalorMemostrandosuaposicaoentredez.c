#include <stdio.h>
int main(){
	int m,i=1,e,p=0;
	printf("Digite um valor M: ");
	scanf("%i",&m);
	
	printf("\nAgora digite dez elementos:\n ");
	while(i<=10)
	{	scanf("%i",&e);
		if(e==m){p=i;}
		else{}
		i=i+1;		
	}
	if(p!=0){	printf("\nO elemento M esta na posicao %i",p);}
	else 	{	printf("\nO Valor M nao existe entre os dez elementos!");}

}