#include <stdio.h>

int main(){
    float peso,engordou, emagreceu;
	printf("informe o peso: ");
	scanf("%f",&peso);
	
	engordou=peso*1.15;
	emagreceu=engordou*0.80; // (mostra o valor a menos tem que por ao contrario)
	
	printf("\nPeso informado: %.3f \n Engordando 15%% = %.3f \nEmagrecendo 20%% = %.3f",peso,engordou,emagreceu);

}