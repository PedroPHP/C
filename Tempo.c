#include <stdio.h>

int main(){
int h, m, sm;
    printf("Digite as horas e os minutos com dois digitos cada: \n");
    scanf("%i",&h);
    scanf("%i",&m);
    
    sm=(h*60)+m;
	printf("\nDesde as 00:00 Hs obtivemos um total de %i minutos!",sm);
}