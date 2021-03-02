#include <stdio.h>
#include <string.h>

// A union separa e utiliza apenas o espaço da maior variavel.
union pessoa{
    char nome [100];
    int idade;
};

int main (){

    union  pessoa pes;
    
    strcpy(pes.nome, "Lucas");
    printf("Dados de %s", pes.nome);

    pes.idade = 39;
    printf("Ela tem %d", pes.idade);


    printf("A variavel 'pes' está ocupando %ld em memória", sizeof(pes));
    
    return 0;
}