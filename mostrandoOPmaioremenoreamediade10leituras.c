#include <stdio.h>
int main(){

	int i,ma=0,me,v,s=0,b;
	printf("Digite dez numero apertando ENTER: \n");
	scanf("\n%i",&b);
	me=b;	ma=b;
	for(i=1;i<=9;i++)
	{	scanf("\n%i", &v);
			if(ma<v)	{ma=v;}
			else {}
			
			if(me>v){me=v;}
			else {}
			
			s=s+v;
	}
	printf("\nMaior valor = %i\nMenor valor = %i\nMedia = %i",ma,me,s/10);

}
