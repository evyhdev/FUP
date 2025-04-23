//P, S, E inteiros, um por linha, representando a profundidade do poço, a altura do salto e a queda durante o descanso, respectivamente. O valor de S sempre será maior que E.

#include<stdio.h>
int main (){
    int p; //produndidade do poço
    int s; //altura do salto
    int e; //queda durante o descanso;

    scanf("%d",&p);
    scanf("%d",&s);
    scanf("%d",&e);

//O sapo começa no fundo de um poço de profundidade P centímetros. A cada salto, ele sobe S centímetros e, enquanto descansa, escorrega E centímetros. O programa deve mostrar as posições de aterrissagem dos saltos do sapinho até que ele saia do poço.
    int alt;
    int posi = 0;
    while (posi < p){
        printf("%d ",posi);
        posi += s;
        printf("%d\n",posi);
        posi -= e;



    }

    printf("saiu");


    return 0;
}