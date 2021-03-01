#include <stdio.h>

int main(){

    int valor;

    printf("Digite um valor de 1 a 7: ");
    scanf("%d", &valor);

    switch (valor){
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda\n");
        break;
    case 3:
        printf("Terça\n");
        break;
    case 4:
        printf("Quarta\n");
        break;
    case 5:
        printf("Quinta\n");
        break;
    case 6:
        printf("Sexa\n");
    case 7:
        printf("Sábado\n");
        break;
    default:
        printf("Valor invalido");
    }

}