#include <stdio.h>

typedef struct {
    char nickname[50]; 
    int pont; 
} jogador;

int main() {
    jogador jog[5];

    for (int i = 0; i < 5; i++) {
        scanf("%s %d", jog[i].nickname, &jog[i].pont);
    } 

    int maior = jog[0].pont, indicemaior = 0;
    int menor = jog[0].pont, indicemenor = 0;

    for (int i = 1; i < 5; i++) { 
        if (jog[i].pont > maior) {
            maior = jog[i].pont;
            indicemaior = i;
        }
        if (jog[i].pont < menor) {
            menor = jog[i].pont;
            indicemenor = i;
        }
    }

    printf("%s %s\n", jog[indicemaior].nickname, jog[indicemenor].nickname);

    return 0;
}
//esse código é um exemplo de um código que recebe o nickname e a pontuação de 5 jogadores e imprime o nickname do jogador com a maior pontuação e do jogador com a menor pontuação.