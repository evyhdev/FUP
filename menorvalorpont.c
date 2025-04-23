//Faça um programa que receba cinco valores inteiros e encontre o menor deles.
#include<stdio.h>
#include<stdlib.h>
int main (){
    int *num = (int*) malloc(sizeof(int));
    int *menor = (int*) malloc(sizeof(int));

    scanf("%d",num);

    *menor = *num;

    for (int i = 1; i < 5; i++){
        scanf("%d",num);
        if (*num < *menor){
            *menor = *num;
        }
    }
    printf("%d",*menor);

    free(num);
    free(menor);
    return 0;

}