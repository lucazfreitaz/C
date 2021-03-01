#include <stdio.h>
//Matrizes - parte 1

/*
array uni-dimensional (vetores) int numeros[5];
[0][1][2][3][4]

array multi-dimensional (matrizes) int numeros [5][5]; [linhas][colunas]
[00][01][02][03][04]
[10][11][12][13][14]
[20][21][22][23][24]
[30][31][32][33][34]
[40][41][42][43][44]
*/




// char nome[3][50]

int main(){

    //Vetores e strings
    char nome [3][50];
    for (int i = 0; i < 3 ; i ++){
        printf("Qual o seu nome? ");
        gets(nome[i]);
    }
    
    for(int i = 0; i < 3 ; i++){
        printf("Ola %s \n", nome[i]);
    }
    
}