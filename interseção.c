//Crie uma função que recebe dois vetores e o tamanho de cada um deles e imprime na tela os elementos de interseção entre eles. 

#include<stdio.h>

void interseccao(int vet1[], int vet2[], int tam1, int tam2){
    for (int i = 0; i < tam1; i++){
        for (int j = 0; j < tam2; j++){
            if (vet1[i] == vet2[j]){
                printf("%d",vet1[i]);
            }
        }
        printf("\n");
    }
}


int main (){
    int tam1, tam2;
        scanf("%d",&tam1);
        scanf("%d",&tam2);
        
    int vet1[tam1], vet2[tam2];

        for (int i = 0; i < tam1; i++)  {
            scanf("%d",&vet1[i]);
            }

        for (int i = 0; i < tam2; i++) {
            scanf("%d",&vet2[i]);
        }

               interseccao (vet1, vet2, tam1, tam2);

    return 0;

}