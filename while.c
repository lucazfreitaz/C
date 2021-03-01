#include <stdio.h>
//Estrutura de repetição 
/*
While ( enquanto) - Utilizado quando você precisa de um loop onde
não se tenha um número fixo de elementos mas que tenha um critério de 
para e antes de iniciar o loop a condição é checada

-- Problema --
Faça um programa no qual receba e some  números 
inteiros até que o número de entrada seja zero
*/
int main(){
    int numero, soma = 0;

    //Entrada 
    printf("Informe um numero: ");
    scanf("%d", &numero);

    while(numero != 0){
        soma = soma + numero;
        //Entrada
        printf("Informe um numero: ");
        scanf("%d", &numero);
    }
    
    printf("A soma e %d", soma);


    return 0;
}