#include<stdio.h>

typedef struct{
    char nome [20];
    int pontos;
} Restaurante;

int main (){
    int quant;
    scanf("%d",&quant);

    Restaurante rest[quant];

    for(int i = 0; i < quant; i++){
    scanf(" %[^\n]",rest[i].nome);
    scanf("%d",&rest[i].pontos);
    }


    int maior;
    int indice = 0;
    maior = rest[0].pontos;

    for (int i = 0; i < quant; i++){
        if (rest[i].pontos > maior){
            maior = rest[i].pontos;
            indice = i;
        }
    }



    return 0;
}