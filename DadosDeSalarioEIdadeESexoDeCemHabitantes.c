#include <stdio.h>
int main(){
	char s,s1;
	int	i,i1,x=1,mai,mei,contf=0;
	float sal,sal1,ssal;
	
	printf("Informe o salario: ");	scanf("%f",&sal1);
	printf("Informe a Idade: ");		scanf("%i",&i1);
	printf("Informe o Sexo: ");		scanf("%s",&s1);

	mai=mei=i1;

	while(x<5)
	{	printf("Informe o salario: ");	scanf("%f",&sal);
		ssal=ssal+sal;
		
		printf("Informe a Idade: ");		scanf("%i",&i);
		if(i>mai){mai=i;} else{}
		if(i<mei){mei=i;} else{}
		
		printf("Informe o Sexo: ");		scanf("%s",&s);
		if((s=='f') && (sal<=500))	{	contf=contf+1;	}	else{}
		
		x=x+1;
	}
	printf("\nMedia dos salarios = %.2f",(ssal+sal1)/100);
	printf("\nMaior Idade = %i",mai);	
	printf("\nMenor Idade = %i",mei);
	if((s1=='f') && (sal1<=500))
	{	printf("\nQuantidade de Mulheres com salario ate 500 Reais = %i",contf+1);}
	else	
	{	printf("\nQuantidade de Mulheres com salario ate 500 Reais = %i",contf);}

}
