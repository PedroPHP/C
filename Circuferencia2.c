#include <stdio.h>
#include <math.h>

int main(){

    float d=4.0/3.0, pi=3.14, r, e=3, re, v;

	printf("Informe o valor do raio: ");
	scanf("%f",&r);

	re=pow(r,e);
	v=(d*pi*re);

	printf("\nDivisao = %.2f \nPI = %.2f \nR = %.2f \nE = %.2f \n RE = %.2f",d,pi,r,e,re);
	printf("\nO volume da esfera e: %.2f",v);
}
