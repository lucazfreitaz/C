#include <stdio.h>

/*
    Tipos de Dados


Tipos Alfanumericos:
    - Caracteres
    - Strigs
    ** Na linguagem C, não existe o tipo de dados String.
    Ex: String
    " asdasdsadasdas"

    Ex: caractere
    's'
*/

int main(){

    //Tipo char
    char opcao;
    printf("Informe uma opcao:\n");
    printf("a - Saldo da conta: \n");
    printf("b - Extrato da conta: \n");
    printf("c - Limite da conta: \n");

    // Para receber um caractere usamos %c
    scanf("%c", &opcao);

    if (opcao == 'a'){
        printf("Seu daldo  .....");
    }else if (opcao == 'b'){
        printf("Extrato da conta ...");
    }else if(opcao == 'c'){
          printf("Seu limite e ...");
    }else{
        printf("Opcao invalida");
    }

    
    return 0;
}