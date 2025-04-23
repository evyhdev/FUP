#include<stdio.h>
//Crie uma função chamada calculadora que realiza operações entre dois valores de ponto flutuante.Entrada: 2 números e a operação (+, -, * ou /). 

    float calculadora(float n1, float n2, char op){
        float soma = n1+ n2;   
        float sub = n1 - n2;
        float mult = n1 * n2;
        float div = n1 / n2;

        switch (op){
            case '+':
            return soma;
            break;
            case '-':
            return sub;
            break;
            case '*':
            return mult;
            break;
            case '/':
            return div;
            break; 
        }
    }

    int main (){
        float n1, n2, result = 0;
        char op;
            scanf("%f",&n1);
            scanf("%f",&n2);
            scanf(" %c",&op);
        result = calculadora(n1, n2, op);
        printf("%.2f",result);
        return 0;
    }

