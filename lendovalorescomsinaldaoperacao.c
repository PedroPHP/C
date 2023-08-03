#include <stdio.h>
int main(){

	char s;
	float a,b;
	
	printf("Digite dois numeros e o sinal da operacao apertando ENTER: ");
	scanf("%f %f %c", &a, &b, &s);	
	
	if(s=='+')
	{ printf("\nValor %.2f somado com %.2f e %.2f",a,b,a+b);}
	else if(s=='-')
	{ printf("\nValor %.2f somado com %.2f e %.2f",a,b,a-b);}
	else if(s=='/')
	{ printf("\nValor %.2f somado com %.2f e %.2f",a,b,a/b);}
	else if(s=='*')
	{ printf("\nValor %.2f somado com %.2f e %.2f",a,b,a*b);}
	else 
	{ 	printf("\nSinal de operacao invalido! Digite ""+"" ou ""-"" ou ""/"" ou ""*"" ");}

}