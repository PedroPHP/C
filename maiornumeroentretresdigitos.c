#include <stdio.h>
int main(){
    int a,b,c;
    printf("Digite tres numeros apertando ENTER: \n");
    scanf("%i %i %i",&a,&b,&c);
    
    if((a>b) && (a>c))
    {	printf("\nMaior valor e o A: %i",a);	}
    else if((b>a) && (b>c))
    {	printf("\nMaior valor e o B: %i",b);	}
    else if((c>b) && (c>a))
    {	printf("\nMaior valor e o C: %i",c);	}
    else
    {	printf("\nHa dois ou tres numeros iguais: \nA = %i \nB = %i \nC= %i",a,b,c);	}

}