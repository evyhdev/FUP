#include<stdio.h>
int main (){
    int idade, quant;
    scanf("%d",&idade);
    scanf("%d",&quant);

    printf("%d\n",idade);
    for (int i = 0; i <= quant; i++){
        idade += 2;
        printf("%d\n",idade);
        i++;
    }

    return 0;
}