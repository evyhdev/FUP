#include<stdio.h>

typedef struct {
    char nome[50];
    char tipo[30];
    int ataque;
    int defesa;
} Pokemon;

int main (){
    Pokemon pokemon[2];

    for (int i = 0; i < 2; i++){
    printf("nome do pokemon: \n");
    scanf(" %[^\n]",pokemon[i].nome);
    printf("tipo do pokemon: \n");
    scanf(" %[^\n]",pokemon[i].tipo);
    printf("ataque:\n");
    scanf("%d",&pokemon[i].ataque);
    printf("defesa: \n");
    scanf("%d",&pokemon[i].defesa);

    }

    if (pokemon[0].ataque > pokemon[1].defesa || pokemon[1].ataque <= pokemon[0].defesa){
        printf("%s\n",pokemon[0].nome);
    }
    else {
        printf("%s\n",pokemon[1].nome);

    }

}