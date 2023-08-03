#include <stdio.h>

int main(){
float normal=60.00, extra=75.00, qtn, qte, sl, sb;
	printf("Informe quantas horas normais: ");
	scanf("%f",&qtn);
	printf("Informe quantas horas extras: ");
	scanf("%f",&qte);

	qtn=qtn*normal;
	qte=qte*extra;
	sb=qtn+qte;
	sl=sb*0.90;

	printf("\n%.2f e o salario bruto!",sb);
	printf("\n%.2f e o salario liquido!",sl);
}
