#include <stdio.h> // Funções de entrada e saida 

/*
Principais funções

fopen() -  Abrir arquivos
fclose() - Fechar arquivos
fffush() - Limpa o buffer do windows no windows 

// Entrada e saida formtadas
fscanf()  - Pegar dados de algum documento aberto e alocar para uma variavel
printf() - Imprimir dados na tela
scanf() - Receber dados do teclao


//Entrada e saida de carecteres


*/

int main (){
    int num1, num2, soma;

    printf("INform o n1: ");
    scanf("%d", &num1);

    printf("INform o n2: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    printf (" A soma de %d com %d é %d", num1,num2, soma);
    return 0;
}