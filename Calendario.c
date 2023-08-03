#include <stdio.h>

int main(){
    int dias, meses=30, anos=365, qtanos, sdias, qtmeses, qtdias;
	printf("Digite a quantidade de dias: ");
	scanf("%i",&dias);
	
	qtanos=dias/anos; // Obtemos a quantidade de anos.
	sdias=dias%anos; // sobra de dias apos obter quantos anos.
	
	qtmeses=sdias/meses; //Obtemos a quantidade de meses.
	qtdias=sdias%meses; //Obtemos a quantidade de dias.
	
	printf("\nEm %i dias, temos %i Anos, %i Meses e %i Dias.",dias,qtanos,qtmeses,qtdias);
}
