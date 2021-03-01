#include <stdio.h>

int main(){

    FILE *arq;
    char c;
    arq = fopen("arquivo.txt","r"); //Leitura

    if (arq){
        while(( c = getc(arq)) != EOF){ //EOF = End Of File ( fim do arquivo)
            printf("%c",c);
        }
    }else{
        printf("N  achei o arquivo");
    }

    return 0;
}