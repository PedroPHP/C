//CONTROLE, REPETICAO E FLUXO\/
//FORMULA COM SOMA, DIVISAO, NUMERO LIDO E COMANDOS FOR (valor de y nao mostra)
#include<stdio.h>
int main()
{
	int n,x,y;
	float a=0,b=0,c=0,d=0,e=0,f=0,g=0;
	
	printf("Digite o numero N: ");
	scanf("%i",&n);
	
	for(x=1;x<=n;x++)
	{
		y=x+1;
		a=a+x;
		b=b+y;
		c=a/b;
		printf("\nSoma dos dividendos = %.3f\nSoma dos Divisores = %.3f",a,b);
	}	printf("\nA divisao de %.0f por %.0f = %.3f\n",a,b,c);
	
	for(x=1;x<=n;x++)
	{
		y=x+1;
		d=x;
		e=y;
		f=d/e;
		g=g+f;
		printf("\nvalor de x = %.0f\tvalor de y = %.0f\nvalor atual de x dividido por y = %.3f",d,e,f);
	}	printf("\nresultado final da soma dos termos = %.3f",g);
}


	