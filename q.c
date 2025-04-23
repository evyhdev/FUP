//Desenvolva um programa que receba três valores correspondentes a cada jogador — João, Carlos e Maria — utilizando ponteiros e alocação dinâmica de memória. Em seguida, determine e exiba quem foi o vencedor ou se houve um empate.

#include<stdio.h>
#include<stdlib.h>
int main (){
    int *jog1 = (int*) malloc(sizeof(int));
    int *jog2 = (int*) malloc(sizeof(int));
    int *jog3 = (int*) malloc(sizeof(int));


    scanf("%d",jog1);
    scanf("%d",jog2);
    scanf("%d",jog3);



    if (*jog1 != *jog2 && *jog1 != *jog3 && *jog2 == *jog3){
        printf("jog1");
    }
    else if (*jog2 != *jog1 && *jog2 != *jog3 && *jog1 == *jog3){
        printf("jog2");
    }
    else if (*jog3 != *jog1 && *jog3 != *jog2 && *jog1 == *jog2){
        printf("jog3");
    }
    else{
        printf("empate");
    }

    free(jog1);
    free(jog2);
    free(jog3);

    return 0;
}