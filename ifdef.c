#include <stdio.h>

#ifndef PI
    #define PI  3.14567 //Constante
#endif
//

//ifndef - Diretiva e compilação

int main (){

    int valor = 5;

    printf("O valor é %d\n",valor);
    printf("PI vale %f\n",PI);


    #ifdef PI
        printf("O valor de PI é %f\n", PI);
    #endif

    return 0;
}