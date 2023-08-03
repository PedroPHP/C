#include <stdio.h>
int main(){

	float t=0,p=0,m=0;
    int i=1;
	
	while(i!=0)
	{
		printf("\nInforme anota do trabalho: ");
		scanf("%f",&t);
		printf("Informe anota da prova: ");
		scanf("%f",&p);
	
		m=((t*25)+(p*75))/100;
		if(m<=7){	printf("\nPrecisa de Exame! %.2f",m);	}
		else{	printf("\nAprovado com %.2f de Nota",m);	}
		
		printf("\nDeseja continuar?\n 1-SIM ou 0-NAO e aperte ENTER: ");
		scanf("%d",&i);
	}
    return 0;
}