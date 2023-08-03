#include <stdio.h>
int main(){
	char nome[20];
	float i=0,sb,sl;
	
	while(i<=5){
		printf("Nome: ");		scanf("%s",nome);
		printf("Salario: ");	scanf("%f",&sb);
		if(sb<=3000)	    				{	sl=(sb*0.77);	}
		else if((sb>3000) && (sb<=4500))	{	sl=(sb*0.71);	}	
		else if(sb>4500)					{	sl=(sb*0.65);	}
		else                                {}
		
		printf("O salario Liquido do funcionaio %s e: %.2f",nome,sl);
		printf("\n\n");
    }
}
