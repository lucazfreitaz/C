#include <stdio.h>

int main(){

    int num1, num2, res = 0;

    printf("Informe o numero 1: ");
    scanf("%d", &num1);

    printf("Informe o numero 2: ");
    scanf("%d", &num2);

    //Soma +
    res = num1 + num2;
    printf("Soma =  %d \n", res);

    //Subtrair -
    res = num1 - num2;
    printf("Subtracao = %d \n", res);

    //Multiplicação -
    res = num1 * num2;
    printf("Multiplicacao = %d \n", res);

    //Divisao / 
    res = (float)num1 / (float)num2; // cast
    printf("Divisao = %f \n", (float)res);

     //Quadrado **
    res = num1 * num1;
    printf("Quadrado = %d \n", res);

    //Modulo (Verificando se o num1 é par ou impar)
    if(num1 % 2 ==0){
        printf("%d e par", num1);
    }else{
        printf("%d e impar",num1);
    }
    return 0;
}