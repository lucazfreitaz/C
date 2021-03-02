#include <stdio.h>
#include <stdlib.h>

int main (){

    int qtd, *p;


    printf("Informe a quantidade de elemtnos para o vetor");
    scanf("%d", &qtd);

    //p = (int*)malloc (qtd * sizeof(int));   -> Não remove o lixo da memória

    p = (int*)calloc(qtd,sizeof(int)); // -> zera o espaço em memória

    for (int i = 0; i < qtd;i++){
        printf("Informe o valor para a posição %d do vetor: ",i);
        scanf("%d", &p[i]);
    };

    for(int i = 0; i < qtd; i++){
        printf("No vetor numeros[%d] está o valor: %d \n",i, p[i]);
    }

    printf("A variavel 'p' ocupa %ld bytes em memória.",qtd * sizeof(int));

    //LIberar memoria (desalocar)
    free(p);

    p = NULL; //Medida de segurança


    return 0;
}