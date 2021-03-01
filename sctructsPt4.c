#include <stdio.h>
#include <string.h>

// Struct -> Estrutura

struct st_contato{
    char nome[100];
    int ano_nascimento;
    char telefone[20];
    char email[100];
};


struct st_agenda{
  struct st_contato contatos[100];
}agenda;


int main (){

    // struct st_aluno alunos [5];
   
    for(int i = 0; i < 2; i++){
        printf("Informe o nome do contato: ");
        fgets(agenda.contatos[i].nome, 100, stdin);

        printf("Informe a ano de nascimento  do contato: ");
        scanf("%d",&agenda.contatos[i].ano_nascimento);
        getchar();


        printf("Informe o telefone: ");
        scanf(agenda.contatos[i].telefone, 50, stdin);
   

        printf("Informe o e-mail do contato:  ");
        fgets(agenda.contatos[i].email, 100, stdin);
        
    }
   
    printf(" ========== Agenda de Contato ========= \n");
    for( int i = 0; i < 2; i++ ){
    printf(" ========== Contato ========= %d \n", (i + 1));
        printf("Nome : %s\n", agenda.contatos[i].nome);
        printf("Telefone : %s\n",agenda.contatos[i].telefone);
        printf("Ano de Nascimento : %d\n", agenda.contatos[i].email); 
        printf("Ano nascimento : %s\n", agenda.contatos[i].ano_nascimento);

    }
   


    return 0;
}