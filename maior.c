#include<stdio.h>
//entrada: Dois números inteiros A e B, sendo B maior ou igual a A.

int main (){
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);

//A soma de todos os números pares entre A e B, inclusive A e B. Se A for maior que B, imprima “invalido”.

    while (b > a){
    for (int i = a; i <= b; i++){
        if (i % 2 == 0){
            printf("%d",i);
        }
    }
    if (b < a){
        printf("invalido");
    }
}
    return 0;
}