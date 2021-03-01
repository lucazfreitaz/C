#include <stdio.h>

// Tipos de dados


// Booleanos ( Verdadeiro/Falso) true/false

/*

Na linguagem C, não existe um tipo de dados boolean

mas.....
A linguagem C, reconhece o valor 0 como falso
e qualquer valor diferente de 0 como verdadeiro
 
 
 */
int main(){
    int booleano = 0;

    if(booleano){
        printf("Verdadeiro...");

    }else{
        printf("Falso...");
    }


    return 0;
}