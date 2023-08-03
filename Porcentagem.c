#include <stdio.h>

int main(){
    float p, d=0.90;
	printf("Informe o valor do produto: ");
	scanf("%f",&p);
	p=p*d;
	printf("\no valor do produto com dez por cento de desconto e: %.2f",p);
}