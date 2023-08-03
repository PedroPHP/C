#include <stdio.h>
int main(){

    float p;
    printf("Informe o valor de custo do produto: ");
    scanf("%f",&p);

    if(p<20)
    {	printf("\nO produto podera ser revendido com 45%% de lucro = %.2f",p*1.45);}
    else
    {	printf("\nO produto podera ser revendido com 30%% de lucro = %.2f",p*1.30);}

}