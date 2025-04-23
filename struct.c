#include<stdio.h>
#include<string.h>

typedef struct{
    char nome[50];
    char end[50];
    int idade;
}Pessoa;


int main (){
    Pessoa pessoa[10];

    int id;
    printf("digite a idade a ser comparada:\n");
    scanf("%d",&id);

    int cont = 0;
    int indice;
     
    for (int i = 0; i < 10; i++){
        scanf(" %[^\n]",pessoa[i].nome);
        scanf("%d",&pessoa[i].idade);
    }

    for (int i = 0; i < 10; i++){
        if (pessoa[i].idade == id){
            cont++;
            indice = i;
            printf("%s",pessoa[indice].nome);

        }
    }

    printf("%d",cont);




    //Crie um novo tipo de dado chamado Pessoa, o qual possui nome, endereço e idade. Crie um vetor de 10 pessoas, popule este vetor. Leia também uma idade a ser identificada. Ao final exiba a quantidade de pessoas lidas que tem a idade igual a idade base e o nome destas pessoas.

    return 0;
}