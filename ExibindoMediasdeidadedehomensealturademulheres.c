#include <stdio.h>
int main(){

	int s=0;
	float i=0,a=0,si=0,sa=0,mi=0,mam=0,mih=0,cf=0,cm=0;
	
	while((s==0) || (s==1))
	{	printf("Digite altura com . exemplo: 1.50\n");
        printf("Digite o sexo: 0 Feminino OU 1 Masculino: ");
		scanf("%i",&s);
		
		switch(s)
		{
			case 0:
				cf=cf+1;
			printf("Informe a idade da mulher: ");
				scanf("%f",&i);
			printf("Informe a altura da mulher: ");
				scanf("%f",&a);
				si=si+i;
				sa=sa+a;
			break;
			
			case 1:
				cm=cm+1;
			printf("Informe a idade do homem: ");
				scanf("%f",&i);
			printf("Informe a altura do homem: ");
				scanf("%f",&a);
				si=si+i;
				mih=mih+i;
			break;
			
			default:
			mi=si/(cf+cm);
			mam=sa/cf;
			mih=mih/cm;
		
			printf("\nPESQUISA FINALIZADA!\nMedia de Idade dos Entrevistados = %.0f\nMeidia de Altura das Mulheres = %.0f\nMedia de idade dos homens = %.0f",mi,mam,mih);
		}
	}
}
