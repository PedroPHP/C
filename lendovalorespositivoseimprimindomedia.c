#include <stdio.h>
int main(){
	int n=0,s=0,c=0,m;
	
	while(n>-1)
	{	printf("Informe numeros positivos, caso seja negativo, o mesmo ira finalizar: ");
		scanf("%i",&n);
		if(n>-1){
		s=s+n;
		c=c+1;}
		else{}
	}
	m=s/c;
	printf("Media = %i",m);

}