#include <stdio.h>

//Matrizes - pt2

int main(){

    //Matrizes de inteiros
    int numeros[2][2];
    /*
    [00][01]
    [10][11]
    */
    numeros [0][0] = 1;
    numeros [0][1] = 2;
    numeros [1][0] = 3;
    numeros [1][1] = 4;

    for ( int i = 0; i < 2; i++){
        for (int c = 0; c < 2; c++){
            printf("numeros[%d][%d] vale %d\n", i,c,numeros[i][c]);
        }
    }

    //Vetores e reais
    float valores[5];



    return 0;
}