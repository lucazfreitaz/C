#include <stdio.h>
// Estruturas de repetição for, while, do...while
//                         para, enquanto, faça..enquanto

/*
utilizando o For (para) -- O for é usado quando sabemos quando
quantas vezes vamos fazer o loop


Faça um programa no qual receba e some 5 números 
inteiros e apresente a soma no final
*/

int main(){
    //Variaveis
    int numero, soma = 0;

    // Para o int i inicinado em 0; enquanto i < 5; incremente o i em 1
    //Inicialização, critério de parada, forma de incremento
    for(int i = 0; i < 5; i++){
         //Entrada
        printf("Informe um numero: ");
        scanf("%d",&numero);

        //Processamento
        soma = soma + numero;

    };
    
    //Saida
    printf("A soma e %d", soma);


    return 0;
}