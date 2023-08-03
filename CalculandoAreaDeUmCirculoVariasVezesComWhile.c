#include <stdio.h>
int main(){
	float a,pi=3.14,r=1;
	
	while(r!=0)
	{	printf("\nInforme o raio, se informa 0 ira sair: ");
		scanf("%f",&r);
		
		if(r!=0)
		{	a=pi*(r*r);	
			printf("Area do circulo = %.2f",a);	}
		else{printf("\nPROGRAMA FINALIZADO!\nArea zero!\n Byebye!");
		}	
	}


}