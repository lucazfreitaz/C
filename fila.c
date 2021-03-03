#include <stdio.h>

#define TAMFILA  10

// Fila / Queue
int fila[TAMFILA] = {0,0,0,0,0,0,0,0,0};
int head = 0; // Proximo a set atendido
int tail = 0; // Ultimo da fila

void lista_elementos(){

    printf("\n ========== FILA ATUAL ===========\n");

    for (int i = 0; i < TAMFILA; i++)
    {
        printf("-");
        printf("|%d",fila[i]);
        printf("-");
    }

    printf("\nHead : %d\n", head);
    printf("Tail: %d\n", tail);
    printf("\n\n");
    

};


void enqueue(){
    int val;
    if(tail < TAMFILA){
        printf("Enforme o elemento para adicionar na fila: ");
        scanf("%d",&val);
        fila[tail] = val;
        tail = + tail + 1;
        lista_elementos();
    }else{
        printf("A fila está cheia...\n");
    }
};


void dequeue(){
    if(head < tail){
        fila[head] = 0;
        head = head + 1;
        lista_elementos();
    }else{
        printf("A fila está vazia");
    }
};


void clear(){
    for (int i = 0; i < TAMFILA; i++)
    {
        fila[i] =0;
    }
    head =0;
    tail = 0;
    

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
            enqueue();
            break;
        case 2:
            dequeue();
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
            printf("Opcao invalida");
            break;
        }




    } while (opcao != 0);
    
    lista_elementos();
    return 0 ;
}