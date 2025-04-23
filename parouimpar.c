//Escreva uma função que receba um número e retorne 1 se o número for par e 0 se for ímpar. Crie também a função main que lê o valor de entrada do teclado, chama a função par ou impar e imprime na tela o valor do resultado.

#include<stdio.h>

    int imparoupar(int n1){
        int par = 1;
        int impar = 0;

            if (n1 % 2 == 0){
                return par;
            }
            else {
                return impar;
            }
        
    }
    int main (){
        int n1;
        int result;
        scanf("%d",&n1);
        result = imparoupar(n1);
        printf("%d",result);
        return 0;
    }