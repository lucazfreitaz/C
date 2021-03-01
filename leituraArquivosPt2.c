#include <stdio.h>


int main(){
    
    FILE *arq;
    char nome[100], *resultado;

    arq = fopen("arquivo.txt","r"); //Leitura

    if (arq){
        while(!feof(arq)){ // feof - File End Of File
            resultado = fgets(nome,100,arq);
            printf("Resultado:%d \n",resultado);

            if(resultado){
                printf("%s", nome);
            }
            
         }
        
    }else{
        printf("N  achei o arquivo");
    }
    fclose(arq);
    return 0; 
}