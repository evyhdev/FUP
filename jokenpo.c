#include<stdio.h>
// R (pedra), P (papel), e S (tesoura)
//O primeiro caractere representa a escolha do Jogador 1.
//O segundo caractere representa a escolha do Jogador 2.

int main (){
    char jog1, jog2;
    scanf(" %c",&jog1);
    scanf(" %c",&jog2);

    if (jog1 == jog2){
        printf("empate");
    }
    if (jog1 == 'R' && jog2 == 'S' || jog1 == 'P' && jog2 == 'R' || jog1 == 'S' && jog2 == 'P'){
        printf("jog1");
    }
    else {
        printf("jog2");
    }

    return 0;
}