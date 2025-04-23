#include<stdio.h>
int main (){
    int num;
    int quant;
    scanf("%d",&num);
    scanf("%d",&quant);
    int vet[quant];
    int cont = 0;

    for (int i = 0; i < quant; i++){
        scanf("%d",&vet[i]);
    }

    for (int i = 0; i < quant; i++){
        if (vet[i] == num){
            cont++;
        }
    }
    printf("%d\n",cont);

    return 0;
}