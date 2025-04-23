#include<stdio.h>

void imprimirvetor (int tam, int vet[]){

    for (int i = 0; i < tam; i++){
        if (i == tam - 1){
        printf("%d",vet[i]);
        }
        else {
            printf("%d, ",vet[i]);
        }
    } 
}
int main (){
    int tam;
    scanf("%d",&tam);
    int vet[tam];

    for (int i = 0; i < tam; i++){
        scanf("%d",&vet[i]);
    }

    printf("[ ");
    imprimirvetor (tam, vet);
    printf(" ]\n");

    return 0;
}