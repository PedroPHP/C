#include <stdio.h>
int main(){
	int n,i=0;
	
	printf("Digite um numero: ");
	scanf("%i",&n);
	
	if(n>0){
	
	while(i!=n)
	{	printf("\nO quadrado de %i e %i",i,i*i);
		i=i+1;
	}
		printf("\nO quadrado de %i e %i",i,i*i);	}
		
	else {	printf("\nO numero tem que ser maior que 0!"); 	}

}