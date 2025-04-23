//Escreva um programa que leia um número N, inteiro maior que zero, e calcule o fatorial desse número. 

#include<stdio.h>
#include<stdlib.h>
int main (){
    int *num = (int*) malloc(sizeof(int));
    int *fat = (int*) malloc(sizeof(int));
    *fat = 1;


    scanf("%d",num);

    for (int i = 1; i <= *num; i++){
        *fat *= i;
    }

    printf("%d",*fat);

    free(num);
    free(fat);
}