#include <stdio.h>
int main(){

    int n;
    printf("Digite um numero: ");
    scanf("%i",&n);
    
    if((n<0) || (n>10))
    {	printf("\nEste numero nao esta entre zero e dez!");		}
    else if(n==0)
    {	printf("\nVoce digitou ZERO");		}
    else if(n==1)
    {	printf("\nVoce digitou UM	");	}
    else if(n==2)
    {	printf("\nVoce digitou DOIS");		}
    else if(n==3)
    {	printf("\nVoce digitou TRES");		}
    else if(n==4)
    {	printf("\nVoce digitou QUATRO");	}
    else if(n==5)
    {	printf("\nVoce digitou CINCO");		}
    else if(n==6)
    {	printf("\nVoce digitou SEIS");		}
    else if(n==7)
    {	printf("\nVoce digitou SETE");		}
    else if(n==8)
    {	printf("\nVoce digitou OITO");		}
    else if(n==9)
    {	printf("\nVoce digitou NOVE");		}
    else if(n==10)
    {	printf("\nVoce digitou DEZ");		}
    else {printf("\nvalor nao reconhecido");    } 
}