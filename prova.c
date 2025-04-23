//função
#include<stdio.h>
#include<stdlib.h>

//Desenvolva um programa que receba três valores correspondentes a cada jogador — João, Carlos e Maria — utilizando ponteiros e alocação dinâmica de memória. Em seguida, determine e exiba quem foi o vencedor ou se houve um empate.

void zerimouum (int *n1, int *n2, int *n3){

    if (*n1 == *n2 && *n2 == *n3){
        printf("empate");
    }
    if (*n1 != *n2 && n1 != n3 && n2 == n3){
        printf("jog1");
    }
    else if (*n2 != *n1 && n2 != n3 && n1 == n3){
        printf("jog2");
    }
    else if (*n3 != *n2 && *n3 != *n1 && *n1 == *n3) {
        printf("jog3");
    }
}

int main (){
    int *n1 = (int*) malloc (sizeof(int));
    int *n2 = (int*) malloc (sizeof(int));
    int *n3 = (int*) malloc (sizeof(int));

    scanf("%d %d %d", n1, n2, n3);

    zerimouum (n1, n2, n3);

    free(n1);
    free(n2);
    free(n3);

    return 0;
}
