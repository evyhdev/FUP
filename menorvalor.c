#include<stdio.h>
//Escreva uma função que receba dois números inteiros retorne o menor número. Se os dois forem iguais, a função retorna o valor deles.

int menorvalor(int n1, int n2){
    if (n1 < n2){
        return n1;
    }
    else if (n2 < n1){
        return n2;
    }
    else {
        return n1, n2;
    }
}
int main (){
    int n1, n2;
    int result;
        scanf("%d",&n1);
        scanf("%d",&n2);
    
        result = menorvalor(n1, n2);
            printf("%d",result);
        
    return 0;
}