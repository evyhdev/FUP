

#include<stdio.h>
int main (){
    int n;
    int d;
    int a;
    scanf("%d",&n); //posições no jogo
    scanf("%d",&d); // posição disco
    scanf("%d",&a); //posição avião

    int pfinal;

    if (a == d){
        pfinal = 0;
    }
    else if (a > d){
        pfinal = n - a + d;
    }
    else if (a < d){
        pfinal = d - a;
    }
    printf("%d\n",pfinal);

    return 0;
}