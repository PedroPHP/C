#include <stdio.h>
int main(){

	float i,v;
	
	for(i=1;i<=50;i++)
	{	printf("\nInforme o valor gasto pelo cliente %.0f no ano passado: ",i);
		scanf("%f",&v);
		
		if(v<500000)	{v=v*0.10;}
		else if(v>500000){v=v*0.15;}
		else{}
		
		printf("\nO cliente %.0f pode gasta %.2f de bonus na loja!",i,v);
	}
}