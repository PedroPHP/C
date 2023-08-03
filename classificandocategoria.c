#include <stdio.h>
int main(){
	int idade;
	printf("Informe a idade do nadador: ");
	scanf("%i",&idade);
	
	if((idade>=5) && (idade<=10))
	{	printf("\nA categoria para a idade %i e infantil",idade);	}
	else if((idade>=11) && (idade<=17))
	{	printf("\nA categoria para a idade %i e juvenil",idade);	}
	else if(idade>=18)
	{	printf("\nA categoria para a idade %i e adulta",idade);		}
	else
	{	printf("\nA idade %i e invalida ",idade);}
}
