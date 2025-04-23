#include<stdio.h>

    typedef struct{
        char marca[20];
        char modelo[20];
        int diaria;
        int portas;
    } Carro;
int main (){
   Carro carro[3];
    for(int i =0; i < 3; i++){
        scanf("%s %s %d %d", &carro[i].marca, &carro[i].modelo, &carro[i].diaria, &carro[i].portas);
    }
    int menor;
    int indicedomenor;
    menor = carro[0].diaria;
    for(int i = 0; i < 3; i++){
        if(carro[i].diaria < menor){
            menor = carro[i].diaria;
            indicedomenor = i;
        }
    }
    printf(" Seu carro mais barato é %s %s \n", carro[indicedomenor].marca, carro[indicedomenor].modelo);

    return 0;
}

