#include <stdio.h>

int main (){
    FILE *arq;
    int num, resultado, soma = 0;
    arq = fopen("arquivo.txt","r");
        if(arq){
            while(!feof(arq)){
                resultado = fscanf(arq,"%d", &num);
                //printf("Resultado: %d \n", resultado);
                if(resultado == 1){
                      soma = soma + num;
                }
            }
        }else {
            printf("N funfou");
        }
    printf("A soma dos numeros do arquivo = %d", soma);
    fclose(arq);
    return 0;
}