#include <stdio.h>
int main(){

 int a,b,c,d;
    printf("informe quatro numeros apertando ENTER: \n");
    scanf("%i %i %i %i",&a,&b,&c,&d);
    
    if((a%2==0) &&  (b%2==0) &&  (c%2==0) &&  (d%2==0))
    {	printf("\nExistem QUATRO PARES e ZERO IMPARES");		}
    else if ((a%2!=0) &&  (b%2!=0) &&  (c%2!=0) &&  (d%2!=0))
    {	printf("\nExistem ZERO PARES e QUATRO IMPARES");		}
    else if
	(((a%2==0) &&  (b%2!=0) &&  (c%2!=0) &&  (d%2!=0)) ||
    ((a%2!=0) &&  (b%2==0) &&  (c%2!=0) &&  (d%2!=0))  ||
    ((a%2!=0) &&  (b%2!=0) &&  (c%2==0) &&  (d%2!=0))  ||
    ((a%2!=0) &&  (b%2!=0) &&  (c%2!=0) &&  (d%2==0)))
     {	printf("\nExiste UM PAR e TRES IMPARES");		}
   
    else if
	(((a%2!=0) &&  (b%2==0) &&  (c%2==0) &&  (d%2==0)) ||
    ((a%2==0) &&  (b%2!=0) &&  (c%2==0) &&  (d%2==0))  ||
    ((a%2==0) &&  (b%2==0) &&  (c%2!=0) &&  (d%2==0))  ||
    ((a%2==0) &&  (b%2==0) &&  (c%2==0) &&  (d%2!=0)))
     {	printf("\nExisteM TRES PARES e UM IMPARES");		}
    
    else
     {	printf("\nExistem DOIS PARES e DOIS IMPARES");		}
}
