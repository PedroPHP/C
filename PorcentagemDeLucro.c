#include <stdio.h>

int main(){
    float s, vc, cc=0.05;
	printf("informe qual e o salario do funcionario, aperte ENTER e informe o valor das vendas: ");
	scanf("%f %f",&s,&vc);
	
	s=s+(vc*cc);
	printf("\no funcionario tera a receber %.2f: ",s);
}