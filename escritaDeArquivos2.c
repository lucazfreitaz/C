#include <stdio.h>

int main (){

    FILE *arq;
    char fruta[10];

    arq = fopen("nomes.txt","a"); // write -> escrita - a de appende ( adicionar)


    if (arq){
        printf("Inform um nome , ou 0 para sair\n");
        fgets(fruta,10,stdin); // stdin = stard input -> entrada padrão

        while (fruta[0] != '0'){
            fputs(fruta, arq);
            printf("Inform um nome , ou 0 para sair\n");
            fgets(fruta,10,stdin);
        }
    }else{
        printf("N foi possivel criar o arquivo");
    }

    return 0;
}