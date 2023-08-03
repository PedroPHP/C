#include <stdio.h>
int main(){
	float s=0,i=0,ss=0,si=0,c=0,ms,mi;
	
	while(s>-1)
	{	printf("Digite o salario, numeros negativos iram finalizar o programa: ");
		scanf("%f",&s);
		if(s>-1){	ss=ss+s;	
		printf("Digite a idade: ");
		scanf("%f",&i);
		si=si+i;	c=c+1;}
		else	{	printf("\nLEITURA FINALIZADA!");	}
		
	}
	ms=ss/c; mi=si/c;
	printf("\nMedia de salario = %.2f\nMedia de Idade = %.0f",ms,mi);

}