#include <stdio.h>
#include <math.h>
//apenas nao informa os centavos
int main(){
    float vl, a1, a2, a3, r1, r2;
	printf("Informe o valor da conta: ");
	scanf("%f",&vl);
	
	a1=vl/3;
	a2=vl/3;
	a3=vl/3;
	
	r1=a1-floor(a1);
	a1=a1-r1;
	
	r2=a2-floor(a2);
	a2=a2-r2;
	
	a3=a3+r1+r2;
	
	printf("\nConta Amigo 1 = %.2f",a1);
	printf("\nConta Amigo 2 = %.2f",a2);
	printf("\nConta Amigo 3 = %.2f",a3);
}