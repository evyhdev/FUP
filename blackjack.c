//A entrada começa informando a quantidade de elementos do vetor e é seguida por um vetor de inteiros.
//A saída deve ser um inteiro informando o valor da mão do blackjack.
//No vetor de inteiros mao, , os valores 1, 11, 12 e 13 são respectivamente Ás, J, Q e K.
//K, Q e J valem 10 pontos. ÁS vale 11 pontos

#include<stdio.h>

int blackjack (int vet[], int tam){
    int soma = 0;
    int as = 0;
    for (int i = 0; i < tam; i++){
        if (vet[i] == 1){
            soma += 11;
        }
        else if (vet[i] == 11 || vet[i] == 12 || vet[i] == 13){
            soma += 10;
        }
        else {
            soma += vet[i];
        }
    }

//Se a soma de pontos for maior que 21, o Ás passa a valer 1 ponto, diminuindo a soma total, tentando fazer o valor baixar para menos de 21.
    while (soma > 21 && as > 0){
        soma -= 10; // Reduzimos 11 para 1 (diminuindo a soma em 10)
        as--;       // Um Ás foi ajustado
        
    }
    return soma;
}
int main (){
    int tam;
    int result = 0;
        scanf("%d",&tam);

    int vet[tam];
    
        for (int i = 0; i < tam; i++){
            scanf("%d",&vet[i]);
            }

    result = blackjack (vet, tam);
    printf("%d",result);
}