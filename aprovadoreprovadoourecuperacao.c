#include <stdio.h>
int main(){
float m, n1, n2, n3, n4,ma;
	printf("Digite a matricula do aluno seguido das quatro notas do ano: ");
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	
	m=(n1+n2+n3+n4)/4;
	
	if(m>7.0)
	{	printf("\nA sua media foi %.2f e voce esta APROVADO!",m);	}
	else if((m>=3.5) && (m<7.0))
	{	printf("\nA sua media foi %.2f e voce esta de RECUPERACAO!",m);	}
	else
	{	printf("\nA sua media foi %.2f e voce esta REPROVADO!",m);	}

}