#include <stdio.h>
int main(){
	int n=1,ma,me,c=0;
	while(n!=0)
	{	printf("Digite um numero: ");
		scanf("%i",&n);
		if(n!=0)
		{	c=c+1;
			if(c==1){	ma=n; me=n;	}
			else{	if(n>ma){	ma=n;	}	else{}
					if(n<me){	me=n;	}	else{}
				}
		}
		else{	printf("\nLEITURA FINALIZADA!");	}		
	}
	if(c==0)	{	printf("\nNAO HOUVE LEITURA DE VALORES!");	}
	else {	printf("\nMaior = %i\nMenor = %i",ma,me); }

}