#include <stdio.h>
int main(){
	int i=0,a=0,b=0,c=0,d=0,e=0,mip=0,mio=0,mir=0,veze=0,veza=0,vezd=0,s=0,por=0,dif=0;
	char op;
	
	while(i>-1)
	{
		printf("\nInforme a idade: ");
		scanf("%i",&i);
		
		if(i>-1){
		
		printf("\nA-Otimo / B-Bom / C-Regular / D-Ruim / E-Pessimo");
		printf("\nInforme a nota do filme: ");
		getchar();
		scanf("%c",&op);
		
		switch(op)
		{
			case 'a':
				a=a+1;
				veza=veza+1;
				if(veza==1){mio=i;}
				else if(i>mio){mio=i;}
				else{}
			break;
			
			case 'b':
				b=b+1;
			break;
			
			case 'c':
				c=c+1;
			break;
			
			case 'd':
				d=d+1;
				vezd=vezd+1;
				if(vezd==1){mir=i; }
				else if(i>mir){mir=i;}
				else{}
			break;
			
			case 'e':
				e=e+1;
				veze=veze+1;
				if(veze==1){mip=i;}
				else if(i>mip){mip=i;}
				else{}
			break;
			
			default:
				printf("\nESCOLHA INEXESTENTE. COMECE NOVAMENTE!");
			break;
		}}	else{printf("\nPESQUISA ENCERRADA!");}	
	}
	s=a+b+c+d+e;
	por=(e*100)/s;
	
	if(mio>mir){dif=mio-mir;}
	else if(mir>mio){dif=mir-mio;}
	else{dif=0;}
	
	printf("\nA porcentagem de escolhas E-Pessimo = %i%%",por);
	printf("\nMaior idade entre as pessoa que escolheu  E-Pessimo = %i",mip);
	printf("\nA diferenca das maiores idades entre A-Otimo e D-Ruim = %i",dif);

}