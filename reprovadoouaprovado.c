#include <stdio.h>
int main(){
float p1,p2,p3,m;
	printf("Informe as tres notas do aluno: \n");
	scanf("%f %f %f",&p1,&p2,&p3);
	
	m=((p1*2)+(p2*3)+(p3*5))/10;
	
	if(m>=7.0)
	{	printf("\nO aluno esta aprovado! Media = %.2f",m);	}
	else
	{	printf("\nO aluno esta reprovado! Media = %.2f",m);	}


}