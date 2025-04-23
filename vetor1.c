#include <stdio.h>

int main() {
    int tam;
    
    // Lendo o tamanho do vetor
    scanf("%d", &tam);
    int vet[tam];

    // Lendo os elementos do vetor
    for (int i = 0; i < tam; i++) {
        scanf("%d", &vet[i]);
    }

    // Imprimindo os elementos na ordem de entrada
    for (int i = 0; i < tam; i++) {
        printf("%d\n", vet[i]);
    }

    return 0;
}
