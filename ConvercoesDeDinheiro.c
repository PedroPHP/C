#include <stdio.h>

int main(){
    float d=3.17, e=3.47, l=4.74, r;
	printf("Informe a quantidade em Reais Brasileiro: ");
	scanf("%f",&r);
	
	d=d*r;
	e=e*r;
	l=l*r;
	
	printf("\n%.2f = Valor em Reais!",r);
	printf("\n%.2f = Valor em Dolar!",d);
	printf("\n%.2f = Valor em Euro!",e);
	printf("\n%.2f = Valor em Libra!",l);
}