#include <stdio.h>
int main(){
float media;
    printf("Digite a media do aluno: ");
    scanf("%f",&media);
    
    if(media>=9.0)
    {	printf("\nConceito A - "); }
    else if((media>=7.5) && (media<9.0))
    {	printf("\nConceito B - "); }
    else if((media>=6.0) && (media<7.5))
    {	printf("\nConceito C - "); }
    else if((media>=4.0) && (media<6.0))
    {	printf("\nConceito D - "); }
    else
    {	printf("\nConceito E - "); }
    
    
    if(((media>=9.0)) || ((media>=7.5) && (media<9.0)) || ((media>=6.0) && (media<7.5))) 
    {	printf("APROVADO!");	}
    else
    {	printf("REPROVADO!");	}

}