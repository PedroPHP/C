#include <stdio.h>
int main(){
	int v,f=1,n;	
	printf("Digite um numero N para ver seu fatorial: ");
	scanf("%i",&v);
	
	if(v>=0){
	    n=v;
	    while(n>0){	
            f=f*n;
		    n--;
	    }
	printf("\nO fatorial de %i e: %i",v,f);}
	else{
	printf("\nO valor N digitado nao e Positivo ou inteiro!");}
}
