#include <stdio.h>

int main(){
    int n,c,d,u;
	printf("Digite um valor inteiro de tres digitos: ");
	scanf("%i",&n);
	
	c=n/100;
	d=n%100;
	u=d%10;
	d=d/10;
	
	printf("\n%i = CENTENA\n%i = DEZENA\n%i = UNIDADE",c,d,u);
}