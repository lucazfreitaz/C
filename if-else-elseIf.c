// Estrutura de decisão if, else, else if
#include<stdio.h>


int main(){
    // Declaração de variaveis
    int idade;

    //Entrada
    printf("Qual a sua idade? ");
    scanf("%d", &idade);

   

    // Estrtura de decisão
    if (idade < 18){
        printf("Vc e menor de idade.\n ");
    }else if (idade > 18 && idade <60){
        printf("Vc e adulto.\n ");
    }else{
        printf("Vc e um idoso.\n ");
    }

    // Saida
    printf("Sua idade : %d", idade);


    return 0;
}