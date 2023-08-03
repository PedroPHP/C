#include <stdio.h>
int main(){
    int op;
	printf("\nDigite a opcao que deseja de 1 a 4: ");
	scanf("%i", &op);
	
	if (op==1)
	{	printf("\nExecuta a rotina de Inclucao de Alunos");}
	else if (op==2)
	{	printf("\nExecuta a rotina de Alteracao de Alunos");}
	else if (op==3)
	{	printf("\nExecuta a rotina de Exclucao de Alunos");}
	else if (op==4)
	{	printf("\nExecuta a rotina de Conlsulta de Alunos");}
	else
	{	printf("\nOpcao invalida escolha de 1 a 4!");}


}
