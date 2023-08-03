#include <stdio.h>
int main(){

    float s,c;
	printf("Digite o salario do funcionario: ");
	scanf("%f",&s);
	printf("\nDigite o codigo do cargo: ");
	scanf("%f", &c);
	
	if(c==1)
	{	printf("\nCargo Diretor\nSalario Antigo - %.2f\nNovo Salario - %.2f\nDiferenca apos aumento - %.2f",s,s*1.10,(s*1.10)-s);}
	else if(c==2)
	{	printf("\nCargo Engenheiro\nSalario Antigo - %.2f\nNovo Salario - %.2f\nDiferenca apos aumento - %.2f",s,s*1.20,(s*1.20)-s);}
	else if(c==3)
	{	printf("\nCargo Tecnico\nSalario Antigo - %.2f\nNovo Salario - %.2f\nDiferenca apos aumento - %.2f",s,s*1.30,(s*1.30)-s);}
	else if(c==4)
	{	printf("\nCargo Gerente\nSalario Antigo - %.2f\nNovo Salario - %.2f\nDiferenca apos aumento - %.2f",s,s*1.10,(s*1.10)-s);}
	else if(c==5)
	{	printf("\nCargo Analista\nSalario Antigo - %.2f\nNovo Salario - %.2f\nDiferenca apos aumento - %.2f",s,s*1.30,(s*1.30)-s);}
	else if(c==6)
	{	printf("\nCargo Coordenador\nSalario Antigo - %.2f\nNovo Salario - %.2f\nDiferenca apos aumento - %.2f",s,s*1.20,(s*1.20)-s);}
	else 
	{printf("\nCargo Alternativo\nSalario Antigo - %.2f\nNovo Salario - %.2f\nDiferenca apos aumento - %.2f",s,s*1.40,(s*1.40)-s);}

}