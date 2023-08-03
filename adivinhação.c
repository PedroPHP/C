#include<stdio.h>
int main()
{
	int numerosecreto,chute,acertoule = ( chute == numerosecreto);

	printf("************************************\n");
	printf("* Bem-Vindo ao Jogo de Adivinhacao *\n");
	printf("************************************\n");

	printf("Qual e o seu chute?\n");
	scanf("%i",&chute);
	printf("Voce chutou o numero %i!\n",chute);

	numerosecreto = 40;
	// printf("%i",42);

	//printf("O Numero %i e secreto!\n",numerosecreto);
	
	if(chute == numerosecreto)
	{	printf("Parabens! voce acertou!\n");	}	
	else	{	printf("Voce errou!\n");
		if	(chute > numerosecreto)
		{	printf("Seu chute foi maior do que o numero secreto!");	}
		else if (chute < numerosecreto)
		{	printf("Seu chute foi menor do que o numero secreto!");	}
	}
	return 0;
}