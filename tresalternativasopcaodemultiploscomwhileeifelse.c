#include <stdio.h>
int main(){
	int n;
	
	while(n!=-1)
	{	printf("Digite um numero: ");
		scanf("%i",&n);
		
	if((n%2!=0) && (n%3!=0) && (n%5!=0) && (n%7!=0))    	{	printf("Zero\n\n");		}
	else if((n%2==0) || (n%3==0))							{	printf("Um\n\n");	    }
	else if((n%5==0) && (n%7==0))							{	printf("Dois\n\n");   	}
	else{}
	}


}