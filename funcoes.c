#include <stdio.h>

// Funções

// main -> principal

// Estutura das funções

/*
    - tipo de retorno
    - Nome
    - Paramentros de entrada (opcional)
    - Implementação
    - retorno ( opcional)
*/
// Void significa vazio, isso quer dizer que essa função não tem retorno

void mensagem(){
    printf("Bem-vindo!");
}

int soma(int num1, int num2){
    int res = num1 + num2;
    return res;
}

void proximo_char(char carctere){
    printf("%c", carctere + 1);
}



int main (){

    printf("Ola...");


    return 0;
}