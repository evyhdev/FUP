//A sequência dos números ímpares de 1 até N, seguidos pelos números pares de N até 0, cada número em uma nova linha

#include<stdio.h>
int main (){
    int num;
    scanf("%d",&num);

    for (int i = 0; i < num; i++){
        if (i % 2 != 0){
            printf("%d\n",i);
        }
    }
    for (int i = num; i >= 0; i--){
        if (i % 2 == 0){
            printf("%d\n",i);
        }
    }
    return 0;
}