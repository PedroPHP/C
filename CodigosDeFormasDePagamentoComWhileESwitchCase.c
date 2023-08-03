#include <stdio.h>
int main(){
	float pe=1,vt=0;
	int cp=0;
	
	while(pe!=0)
	{	printf("Digite o valor do produto ou zero para encerra: ");
		scanf("%f",&pe);
		vt=vt+pe;
	}	printf("LEITURA DE VALORES ENCERRADA!");
	
	while(cp==0){
	printf("\nInforme a condicao de pagamento: ");
	scanf("%i",&cp);
	switch(cp)
	{
		case 1:
			vt=vt*0.90;
			printf("valores total com dez por cento de desconto = %.2f",vt);
		break;
		
		case 2:
			vt=vt*0.95;
			printf("valores total com cinco por cento de desconto = %.2f",vt);
		break;
		
		case 3:
			printf("valores total parcelado em duas vezes = %.2f",vt);
		break;
		
		case 4:
			vt=vt*1.10;
			printf("valores total parcelado com tres vezes com dez %% de juros = %.2f",vt);
		break;
		
		default:
			printf("CONDICAO DE PAGAMENTO INEXISTENTE!");
			cp=0 ;
		break;
		
	}}

}