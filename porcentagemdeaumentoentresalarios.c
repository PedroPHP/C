#include <stdio.h>
int main(){
    float salario;
	printf("Informe o valor do salario em reais e centavos : ");
	scanf("%f",&salario);
	
	if((salario>=0) && (salario<=400))
	{	printf("\nO seu aumento e de 15%% e seu novo salario e: %.2f",salario*1.15);	}
	else if((salario>=400.01) && (salario<=700.00))
	{	printf("\nO seu aumento e de 12%% e seu novo salario e: %.2f",salario*1.12);	}
	else if((salario>=700.01) && (salario<=1000.00))
	{	printf("\nO seu aumento e de 10%% e seu novo salario e: %.2f",salario*1.10);	}
	else if((salario>=1000.01) && (salario<=1800.00))
	{	printf("\nO seu aumento e de 7%% e seu novo salario e: %.2f",salario*1.07);	}
	else if((salario>=1800.01) && (salario<=2500.00))
	{	printf("\nO seu aumento e de 4%% e seu novo salario e: %.2f",salario*1.04);	}
	else if(salario>2500.00)
	{	printf("\nNao havera aumento, seu salario e: %.2f",salario);	}

}