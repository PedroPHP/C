#include <stdio.h>
int main(){
	int v=1, c1=0,c2=0,c3=0,c4=0,vn=0,vb=0;
	printf("BEM-VINDO! INICIE AS VOTACOES!");
	
	while(v!=0)
	{
		printf("\n1-fulano\n2-sicrano\n3-beltrano\n4-candango\n5-voto nulo\n6-voto em branco\n0-finalizar");
		printf("\nDigite o numero correspondendo ao seu voto e aperta ENTER:");
		scanf("%i",&v);
		
		switch(v)
		{
		case 0:
			printf("\nVOTACAO ENCERRADA!");
			break;
			
		case 1:
			c1=c1+1;
			printf("fulano - voto registrado! obrigado por exerce a democracia!");
			break;
		case 2:
			c2=c2+1;
			printf("sicrano - voto registrado! obrigado por exerce a democracia!");
			break;	
		case 3:
			c3=c3+1;
			printf("beltrano - voto registrado! obrigado por exerce a democracia!");
			break;	
		case 4:
			c4=c4+1;
			printf("candango - voto registrado! obrigado por exerce a democracia!");
			break;	
		case 5:
			vn=vn+1;
			printf("voto nulo - voto registrado! obrigado por exerce a democracia!");
			break;	
		case 6:
			vb=vb+1;
			printf("voto em branco - voto registrado! obrigado por exerce a democracia!");
			break;
			
		default:
		printf("opcao invalida!");
		break;	
		}
	}
	
	printf("resultados:\nfulano\t\t%i\nsicrano\t\t%i\nbeltrano\t%i\ncandango\t%i\nvoto nulo\t%i\nvoto em branco\t%i\n",c1,c2,c3,c4,vn,vb);	


}