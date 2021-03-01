#include <stdio.h>
//Vetores - parte 1


// Array - uni-dimensional
int main(){

    //Vetores e strings
    char nome [50];
    printf("Qual o seu nome? ");
    gets(nome);
    printf("Ola %s \n", nome);

    //Vetores e caracteres
    char letras[26];
    int contador = 0;
    for(int i = 97; i <= 122; i++){
        letras[contador] = i;    
        contador = contador + 1;
        }

    // Imprimindo as letras e seus valroes em decimal
    for (int i = 0; i < 26; i++){
        printf("%d == %c\n", letras[i], letras[i]);
        }

    //Vetores de Inteiros
    int numeros[10];

    //Vetores e reais
    float valores[5];
    return 0;
}