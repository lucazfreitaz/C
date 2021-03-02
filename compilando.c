#include <stdio.h>

int main(){

    int qtd,soma = 0;

    printf("Quantos numero vc quer somar ? ");
    scanf("%d", &qtd);


    for (int i = 0; i < qtd;i++){
        soma = soma + i * 2 + 3;
    }

    printf("A soma é %d",soma);

    return 0;
}