//Tipos de dados
#include <stdio.h>
/*
Tipos númericos
    - Inteiros
    - Reais (Números com casas Decimais)
  
*/

int main (){

    //inteiro
    //int numero_inteiro; // 7, 45, 30 .....
    
    //Reais
    float media; // 23.4, 1.23...
    //double outra_media; //23.4, 1.23( Suporta uma quantidade maior de dados)

    float nota1, nota2;

    printf("Qual a primeira nota ?: ");
    scanf("%f",&nota1);

    // Quando estamos recebendo um valor int devemos colocar %d ou %i 
    // Quando estamos recebendo um valor float devemos colocar %f 
    // Quando estamos recebendo um valor double devemos colocar %lf 
    printf("Qual a segunda nota ?:  ");
    scanf("%f",&nota2);

    media = (nota1 + nota2 )  / 2 ;

    printf("Sua media e %.1f", media);
    

    return 0;
}
