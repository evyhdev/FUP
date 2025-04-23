#include<stdio.h>
//Crie uma função que receba dois valores A e B como parâmetro e imprima todos os números inteiros pares que estão entre A e B, inclusive A e B.

void imprimirPares(int A, int B) {
    for (int i = A; i <= B; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);  // Imprime o número par seguido de um espaço
        }
    }
    printf("\n");  // Nova linha no final
}

int main() {
    int A, B;
    
    scanf("%d %d", &A, &B);

    imprimirPares(A, B);

    return 0;
}
