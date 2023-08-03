#include <stdio.h>
int main(){
	int t1=0,t2=1,r,c=0;
	
	printf("TERMO %i",t1);
	printf("\nDeseja continuar a sequencia?\nDigite ZERO para para SIM ou OUTRO valor para NAO: ");
	scanf("%i",&c);
	if(c==0){printf("TERMO %i",t2);	
	
	printf("\nDeseja continuar a sequencia?\nDigite ZERO para para SIM ou OUTRO valor para NAO: ");
	scanf("%i",&c);}
	else {c=1;}	
	
	if(c==0)	
	{	while(c==0)
		{r=t1+t2;
		printf("TERMO %i",r);
			printf("\nDeseja continuar a sequencia?\nDigite ZERO para para SIM ou OUTRO valor para NAO: ");
			scanf("%i",&c);	
			t1=t2;
			t2=r;
		}
	}
	else {}
	printf("\nSEQUENCIA FINALIZADA!");
	

}