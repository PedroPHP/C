#include <stdio.h>
int main(){

	int m;
	printf("digite o numero do mes de 1 a 12: ");
	scanf("%i",&m);
	
	if((m<1) || (m>12))
	{ printf("\nNumero digitado nao faz parte de um dos douze meses!"); }
	else if(m==2)
	{ printf("\nMes com 28 dias.Verifique se o ano e bissexto, se for, tem 29 dias!"); }
	else if((m==4) || (m==6) || (m==9) || (m==11))
	{ printf("\nMes com 30 dias!"); }
	else if ((m==1) || (m==3) || (m==5) || (m==7) || (m==8) || (m==10) || (m==12))
	{ printf("\nMes com 31 dias!"); }
}