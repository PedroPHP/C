#include <stdio.h>
int main(){
	int i;
	float n1,n2,n3,m;
	printf("Informe as notas dos alunos apertando ENTER: ");
	
	for(i=1;i<=25;i++)
	{	printf("\nNotas do aluno %i = ", i);
		scanf("%f %f %f",&n1,&n2,&n3);
			m=(n1+n2+n3)/3;
				if(m<7)
				{	printf("\nAluno reprovado - Media %.2f",m);}
				else
				{	printf("\nAluno aprovado - Media %.2f",m);}
				
	}


}