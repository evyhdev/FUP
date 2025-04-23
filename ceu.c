//Uma lista de números inteiros entre 0 e 9, substituindo o número 10 por “céu”, excluindo o número N

#include<stdio.h>
int main (){
    int num;
    scanf("%d",&num);

    printf("[ ");

    for (int i = 0; i < 10; i++){
        if (i < num){
            printf("%d ",i);
            continue;
        }
        if (i > num){
            printf("%d ",i);
        }

    }
    if (num != 10){
    printf("ceu ");
    }
    printf("]\n");

    return 0;
}