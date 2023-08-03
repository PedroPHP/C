#include <stdio.h>

int main(){
    float piso, salario;
	int quantidade;

	printf("Digite qual e o valor do salario minimo: ");
	scanf("\n%f",&piso);
	printf("\nDigite qual e o valor do salario do funcionario: ");
	scanf("%f",&salario);

	quantidade=salario/piso;

	printf("\nO funcionario recebe %i salario(s) minimo(s)!",quantidade);
}
