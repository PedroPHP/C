#include <stdio.h>
int main(){

	char s;
	float a=0;
	
	printf("Informe seu sexo com M ou F e aperte ENTER: ");
	scanf("%c",&s);
	printf("\nInforme a seu altura como o exemplo >>0.00<<: ");
	scanf("%f",&a);
	
	if(s=='m')
	{	printf("\nMasculino - O seu peso ideal e: %.3f",(a*72.7)-58);	}
	else if(s=='f')
	{	printf("\nFeminino - O seu peso ideal e: %.3f",(a*62.1)-44.7);	}
	else
	{	printf("\nLetra invalida, informe M = Masculino ou F = Feminino");	}

}