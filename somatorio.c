//Some todos os números inteiros pares que são divisíveis por 3 que estão entre A e B, inclusive A e B.

#include<stdio.h>
#include<stdlib.h>

int main (){
    int *A = (int*) malloc(sizeof(int));
    int *B = (int*) malloc(sizeof(int));
    int *soma = (int*) malloc(sizeof(int));
    *soma = 0;


    scanf("%d",A);
    scanf("%d",B);

    for (int i = *A; i <= *B; i++){
        if (i % 3 == 0 && i % 2 == 0){
            *soma += i;
        }
    }
    printf("%d",*soma);

    free(A);
    free(B);
    free(soma);

}