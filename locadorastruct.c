// Escreva um programa que crie um pequeno cadastro de carros para aluguel em uma locadora. Cada carro deve ter Marca, modelo, valor da diária e número de portas.  A empresa possui três carros. Inicialize os valores de três carros por meio da leitura de dados do teclado e imprima o carro com valor da diária mais barata. 

#include<stdio.h>

typedef struct {
    char marca [50];
    char modelo[50];
    float valordiaria;
    int portas;
}Carro;

int main (){
    Carro carro[3];
    
    for (int i = 0; i < 3; i++){
        printf("marca: \n");
        scanf(" %[^\n]", carro[i].marca);
        printf("modelo: \n");
        scanf(" %[^\n]", carro[i].modelo);
        printf("valor: \n");
        scanf("%f", &carro[i].valordiaria);
        printf("portas: \n");
        scanf("%d", &carro[i].portas);
    }

   
    int indicemenor;
   carro[indicemenor].valordiaria;
    for (int i = 1; i < 3; i++){
        if (carro[i].valordiaria < carro[indicemenor].valordiaria){
            indicemenor = i;
        }
    }

    printf("%s %s %.2f",carro[indicemenor].marca, carro[indicemenor].modelo, carro[indicemenor].valordiaria);
}