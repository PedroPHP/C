#include <stdio.h>
int main(){
    int i,n,s = 0;
	printf("Digite dez valores seguidos!\n");
	for(i=0;i<10;i++){
        printf("Valor: ");
		scanf("%i",&n);
		s += n;
	}
	
	printf("\nA soma dos dez valores e : %i\nA media dos dez valores e: %i",s,s/10);
    

}