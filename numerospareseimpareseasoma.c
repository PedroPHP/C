#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g1,g2,g3,g4,h1,h2,h3,h4,i1,i2,i3,i4,i5,i6;
    printf("informe quatro numeros apertando ENTER: \n");
    scanf("%i %i %i %i",&a,&b,&c,&d);
    
    if(e=(a%2==0) &&  (b%2==0) &&  (c%2==0) &&  (d%2==0))
    {	printf("\nExistem QUATRO PARES e ZERO IMPARES");
	if(e==1){	printf("\nSOMA-PAR = %i\nSOMA-IMPAR = %i",a+b+c+d,0);}	
	else {} }
    
    else if (f=(a%2!=0) &&  (b%2!=0) &&  (c%2!=0) &&  (d%2!=0))
    {	printf("\nExistem ZERO PARES e QUATRO IMPARES");	
	if(f==1){	printf("\nSOMA-PAR = %i\nSOMA-IMPAR = %i",0,a+b+c+d);}	
	else {} }
    
    else if
	((g1=((a%2==0) &&  (b%2!=0) &&  (c%2!=0) &&  (d%2!=0))) ||
    (g2=((a%2!=0) &&  (b%2==0) &&  (c%2!=0) &&  (d%2!=0)))  ||
    (g3=((a%2!=0) &&  (b%2!=0) &&  (c%2==0) &&  (d%2!=0)))  ||
    (g4=((a%2!=0) &&  (b%2!=0) &&  (c%2!=0) &&  (d%2==0))))
     {	printf("\nExiste UM PAR e TRES IMPARES");	
	 if     (g1==1){	printf("\nSOMA-PAR = %i\nSOMA-IMPAR = %i",a,b+c+d);}	
	else if (g2==1){	printf("\nSOMA-PAR = %i\nSOMA-IMPAR = %i",b,a+c+d);}
	else if (g3==1){	printf("\nSOMA-PAR = %i\nSOMA-IMPAR = %i",c,a+b+d);}
	else if (g4==1){	printf("\nSOMA-PAR = %i\nSOMA-IMPAR = %i",d,a+b+c);}
	else{} }
   
    else if
     ((h1=((a%2!=0) &&  (b%2==0) &&  (c%2==0) &&  (d%2==0)))  ||
    (h2=((a%2==0) &&  (b%2!=0) &&  (c%2==0) &&  (d%2==0)))  ||
    (h3=((a%2==0) &&  (b%2==0) &&  (c%2!=0) &&  (d%2==0)))  ||
    (h4=((a%2==0) &&  (b%2==0) &&  (c%2==0) &&  (d%2!=0))))
    
    {	printf("\nExisteM TRES PARES e UM IMPARES");		


	if     (h1==1){	printf("\nSOMA-PAR = %i\nSOMA-IMPAR = %i",b+c+d,a);}	
	else if (h2==1){	printf("\nSOMA-PAR = %i\nSOMA-IMPAR = %i",a+c+d,b);}
	else if (h3==1){	printf("\nSOMA-PAR = %i\nSOMA-IMPAR = %i",a+b+d,c);}
	else if (h4==1){	printf("\nSOMA-PAR = %i\nSOMA-IMPAR = %i",a+b+c,d);}
	else{} }
    
    else if
	((i1=((a%2!=0) &&  (b%2!=0) &&  (c%2==0) &&  (d%2==0)))  ||
    (i2=((a%2==0) &&  (b%2==0) &&  (c%2!=0) &&  (d%2!=0)))  ||
    (i3=((a%2!=0) &&  (b%2==0) &&  (c%2==0) &&  (d%2!=0)))  ||
	(i4=((a%2==0) &&  (b%2!=0) &&  (c%2!=0) &&  (d%2==0)))  ||
	(i5=((a%2==0) &&  (b%2!=0) &&  (c%2==0) &&  (d%2!=0)))  ||
    (i6=((a%2!=0) &&  (b%2==0) &&  (c%2!=0) &&  (d%2==0))))
    {	printf("\nExistem DOIS PARES e DOIS IMPARES");		
	if (i1==1){	printf("\nSOMA-PAR = %i\nSOMA-IMPAR = %i",c+d,a+b);}	
	else if (i2==1){	printf("\nSOMA-PAR = %i\nSOMA-IMPAR = %i",a+b,c+d);}
	else if (i3==1){	printf("\nSOMA-PAR = %i\nSOMA-IMPAR = %i",b+c,a+d);}
	else if (i4==1){	printf("\nSOMA-PAR = %i\nSOMA-IMPAR = %i",a+d,d+c);}
	else if (i5==1){	printf("\nSOMA-PAR = %i\nSOMA-IMPAR = %i",a+c,b+d);}
	else if (i6==1){	printf("\nSOMA-PAR = %i\nSOMA-IMPAR = %i",b+d,a+c);}
	else{} }
     
    else
    {	printf("\nPROGRAMA COM DEFEITO");	}

}