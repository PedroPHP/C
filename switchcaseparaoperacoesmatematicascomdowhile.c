#include <stdio.h>
int main(){
	int v1,v2,op,so=0,su,mu,di;
	
	printf("DIgite um primeiro valor: ");
	scanf("%i",&v1);
	printf("DIgite um segundo valor: ");
	scanf("%i",&v2);
	printf("\nencerrar = 0\tsomar = 1\tsubitrair = 2\tmultiplicar = 3\tdividir = 4 ");
	
	do
	{	printf("\nDigite o numero da operacao: ");
		scanf("%i",&op);
		
		switch(op)
		{
			case(0):
				printf("OPERACAO FINALIZADA");
				break;
			case(1):
				so=v1+v2;
				printf("Resultado da soma = %i",so);
				break;
			case(2):
				su=v1-v2;
				printf("Resultado da subtracao = %i",su);
				break;
			case(3):
				mu=v1*v2;
				printf("Resultado da multiplicacao = %i",mu);
				break;
			case(4):
				di=v1/v2;
				printf("Resultado da divisao = %i",di);
				break;
				
			default:
			printf("OPCAO INVALIDA");
			break;	
		}
		
	}
	while(op!=0);

}