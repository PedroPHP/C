#include <stdio.h>
int main(){

	float massa, gramas;
	int horas=3600,minutos=60,segundos=0,h,m,s;
	
	printf("digite a quantidade de massa do elemento em gramas: ");
	scanf("%f",&gramas);
	massa=gramas;
	
	while(gramas>=0.5)
	{	
		segundos=segundos+50;
		gramas=gramas/2;
	}
	
	h=segundos/horas;
	m=segundos/minutos;
	while(m>=60){h=h+1;	m=m-60;}
	s=segundos%minutos;
	
	printf("\nMassa inicial = %.2f",massa);
	printf("\nMassa final = %.2f",gramas);
	printf("\nTempo de Processo = %i h %i m %i s",h,m,s);

}