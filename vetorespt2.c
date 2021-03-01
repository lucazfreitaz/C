#include <stdio.h>
//Vetores parte 2

int main (){

     //Vetores de Inteiros
    int numeros[10]; // 0...9
    numeros [0] = 1;
    numeros [1] = 2;
    numeros [2] = 3;
    numeros [3] = 5;
    numeros [4] = 7;


    //Vetores e reais
    float valores[5]; // 0...4
    for( int i = 0; i< 5; i++){
        valores[i] = (float)numeros[i] / (float)2; 
    }

    for (int i = 4; i >= 0; i--){
        printf("%.2f \n", valores[i]);
    }

    return 0;
}