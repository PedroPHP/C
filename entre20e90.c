#include <stdio.h>
int main(){
    int n;
    printf("Informe um numero: ");
    scanf("%i",&n);
    
    if((n<20) || (n>90))
    {	printf("\no valor %i NAO esta compreendido entre 20 e 90",n);	}
    else
    {	printf("\no valor %i SIM esta compreendido entre 20 e 90",n);	}

}