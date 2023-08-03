#include <stdio.h>

int main(){ 
 float mi, km;
    printf("digite a distancia entre duas cidades em milhas: ");
    scanf("%f",&mi);
    km=mi*1.61;
    printf("\nA distancia equivalente em quilometros e : %.0f",km);
}