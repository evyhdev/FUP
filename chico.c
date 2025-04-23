#include<stdio.h>
int main (){
    int chuteb;
    int chutec;
    int quant;
    int soma = 0;
    scanf("%d",&chuteb);
    scanf("%d",&chutec);
    scanf("%d",&quant);

    char vet[quant];

    for (int i = 0; i < quant; i++){
        scanf(" %c",&vet[i]);
    }

    for (int i = 0; i < quant; i++){
    if (vet[i] == 'c' || vet[i] == 'v'){
        soma += 4;
    }
    else {
        soma += 2;
    }
    }
    printf("%d",soma);
    
    int diff1 = soma - chuteb;
    int diff2 = soma - chutec;

    if (diff1 < diff2){
        printf("Cebolinha\n");
    }
    else if (diff2 < diff1){
        printf("Chico Bento\n");
    }
    else if (diff1 == diff2){
        printf("empate\n");
    }

    return 0;
}