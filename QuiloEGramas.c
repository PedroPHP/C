#include <stdio.h>

int main(){
    float quilos, gramas;
        printf("Digite o valor em quilos: ");
        scanf("%f",&quilos);
    
        gramas=quilos*1000;
        printf("\nO valor %3.3f em quilos e %.0f gramas!",quilos,gramas);

}