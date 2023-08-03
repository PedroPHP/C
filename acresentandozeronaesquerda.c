#include <stdio.h>
int main(){

    float c;
	printf("Digite o codigo do produto: ");
	scanf("%f",&c);
	
	if(c==001)	
	{	printf("\nParafuso - codigo %03.f",c);}
	else if(c==002)
	{ printf("\nPorca - codigo %03.f",c);}
	else if(c==003)	
	{ printf("\nPrego - codigo %03.f",c);}
	else	
	{ printf("\nDiversos - codigo %03.f",c);}	
}