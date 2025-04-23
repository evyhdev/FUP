#include<stdio.h>
int main (){
    int a;
    scanf("%d",&a);
    int vet[a];
    int imp = 0;
    int par = 0;

    for (int i = 0; i < a; i++){
        scanf("%d",&vet[i]);
    }

    for (int i = 0; i < a; i++){
        if (vet[i] % 2 != 0) {
            imp += vet[i];
        }
        else{
            par += vet[i];
        }
    }

    if (imp > par){
        printf("soldados\n");
    }
    else if (imp < par){
        printf("rebeldes\n");
    }
    else {
        printf("empate\n");
    }
    return 0;
}