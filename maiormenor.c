//Crie uma função em C que encontre o menor e o maior valor dentro de um vetor de tamanho 5 e devolva estes valores para a função que o chamou. Dica: Além do vetor, receba como parâmetro nesta função duas variáveis chamadas maior e menor como referência.
#include<stdio.h>

void menormaior(int vet[], int *maior, int *menor){ //declarar os valores com * quando com referência
    *maior = vet[0];
    *menor = vet[0];
    for (int i = 1; i < 5; i ++){ //começar do 1 pq o zero já foi usado
        if (vet[i] > *maior){
            *maior = vet[i];
        }
        if (vet[i] < *menor){
            *menor = vet[i];
        }

    }
}
int main (){
    int vet[5];
    int maior, menor;
    for (int i = 0; i < 5; i++){
        scanf("%d",&vet[i]);
    }
    menormaior(vet,&maior, &menor); //ler os valores por refência com &
    printf("%d %d",maior, menor);
    return 0;
}

