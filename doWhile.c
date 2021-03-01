#include <stdio.h>
/*
 do ... while ( Faça enquanto)  = Utilizado quando você precisa de um loop onde
não se tenha um número fixo de elementos mas que tenha um critério de 
parada é checada após a primeira execução

-- Problema --
Faça um programa no qual receba e some  números 
inteiros até que o número de entrada seja zero

*/
int main (){
    
    int numero, soma = 0;

    do{
        //Entrada
        printf("Informe um número: ");
        scanf("%d",&numero);

        //Processamento
        soma = soma + numero;
    }
    while(numero != 0);
    


    printf("A soma e %d", soma);
    return 0;
}