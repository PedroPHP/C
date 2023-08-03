#include <stdio.h>
int main(){


	float sal,ms,ssal=0,ma,me,qtm=0,i,c=0,s;
	
	while(i>-1)
	{	printf("\nDigite a idade, digite numero negativo para sair do programa: ");
		scanf("%f",&i);
		
		if(i>-1)
		{	c=c+1;
			if(c==1){	ma=i; me=i;	}
			else{	if(i>ma){ma=i;}	else {}
					if(i<me){me=i;}	else {}
			}
				printf("Digite o salario: ");
				scanf("%f",&sal);
				ssal=ssal+sal;
				
				printf("Digite a Idade, 0 Masculino OU 1 Feminino: ");
				scanf("%f",&s);
				
				if((s==1) && (sal<=1000))	{	qtm=qtm+1;	} else{}}
		else{	printf("\nPESQUISA FINALIZADA!");	}		
	}
	
	ms=ssal/c;
	printf("\nMedia salarial = %.2f\nMaior idade = %.0f\nMenor idade = %.0f\nMulheres que receberam ate mil reais sao: %.0f",ms,ma,me,qtm);
}