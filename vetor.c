//Crie um novo tipo de dado chamado Pessoa, o qual possui nome, endereço e idade. Crie um vetor de 10 pessoas, popule este vetor. Leia também uma idade a ser identificada. Ao final exiba a quantidade de pessoas lidas que tem a idade igual a idade base e o nome destas pessoas.

#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char nome [50];
    char endereco;
    int idade;
}Pessoa;

int main (){
    Pessoa pessoa[10];

    for (int i = 0; i < 10; i++){
        printf("digite a idade: \n");
        scanf("%d",&pessoa[i].idade);
    }

    int id;
    int cont = 0;
    scanf("%d",&id);

    for (int i = 0; i < 10; i++){
       if (pessoa[i].idade == id){
        cont++;
       }
    }

    printf("%d",cont);
}
