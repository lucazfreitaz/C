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
int main (){
    // Declaracao de uma String em C
    char nome[50];

    printf("Qual o seu nome ?");
    gets(nome);

    printf("Seu nome e %s", nome);

}