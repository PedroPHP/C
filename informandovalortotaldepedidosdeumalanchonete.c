#include <stdio.h>
int main(){
	int cod=1, qt;
	float vlt=0;
	
	while(cod!=0)
	{	printf("Digite o codigo do item: ");
        printf("100,101,102,103,104,105 ");
		scanf("%i",&cod);
		
		switch(cod)
		{
		case 100:
			printf("Digite a quantidade: ");
			scanf("%i",&qt);
				vlt=vlt+(1.20*qt);
			break;
			
		case 101:
			printf("Digite a quantidade: ");
			scanf("%i",&qt);
				vlt=vlt+(1.30*qt);
			break;
	
		case 102:
			printf("Digite a quantidade: ");
			scanf("%i",&qt);
				vlt=vlt+(1.25*qt);
			break;
		
		case 103:
			printf("Digite a quantidade: ");
			scanf("%i",&qt);
				vlt=vlt+(1.20*qt);
			break;
		
		case 104:
			printf("Digite a quantidade: ");
			scanf("%i",&qt);
				vlt=vlt+(1.30*qt);
			break;
			
		case 105:
			printf("Digite a quantidade: ");
			scanf("%i",&qt);
				vlt=vlt+(1.00*qt);
			break;
		
		default:
		printf("\nPEDIDO FINALIZADO!\nVALOR TOTAL DO PEDIDO = %.2f",vlt);
		cod=0;
		break;
		}
	}

}