#include<stdio.h>

#define TAMPILHA 10


int pilha [TAMPILHA] = {0,0,0,0,0,0,0,0,0};

int topo = 0;



void lista_elementos(){
    printf("\n =========PILHA ATUAL =========== \n");
    for (int i = 0; i < TAMPILHA; i++)
    {
        printf("-");
        printf("|%d",pilha[i]);
        printf("-");
    }
    printf("Topo: %d", topo);
    printf("\n\n");
    
}

void push(){
    int val;
    printf("Informe o valor: ");
    scanf("%d", &val);


    if(topo < TAMPILHA){
        pilha[topo] = val;
        topo = topo + 1;
        lista_elementos();
    }else{
        printf("Pilha cheia.....\n");
    }
}

void pop(){
    if (topo >= 0)
    {
        pilha[topo -1] =0;
        topo - topo -1;
        lista_elementos();
    }else{
        printf("Pilha vazia.....\n");
    }
    
}

void clear(){
    for (int i = 0; i < TAMPILHA; i++){
          pilha[i] = 0;
    }
    topo = 0 ;
}

int main(){

    int opcao = 0;

    do
    {
        printf("Seleciona a opçao: \n\n");
        printf("[1] - Inserir: \n");
        printf("[2] - Remover: \n");
        printf("[3] - Listar: \n");
        printf("[4] - Limpar a fila: \n");
        printf("[0] - Sair: \n");
        printf(" Opção:  ");
        scanf("%d", &opcao);




        switch (opcao)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            lista_elementos();
            break;
        case 4:
            printf("Limpando fila....terminado\n");
            clear();
            break;
        case 0:
            break;
        default:
            printf("Opcao invalida \n");
            break;
        }




    } while (opcao != 0);
    
    lista_elementos();

    return 0;
}