//Um grupo de amigos se reuniu para estudar para a prova de Fundamentos de Programação (FUP). Após a sessão de estudos, planejaram jogar juntos. Para deixar tudo ainda mais interessante, decidiram unir o útil ao agradável: criar um ranking atualizado dos melhores jogadores com base nos resultados da última partida.

//Crie uma estrutura Jogador com os seguintes atributos:
//● nickname (string) – Nome do jogador no jogo.
//● pontuacao (int) – Pontuação do jogador na última partida.
//O programa deve permitir que o usuário cadastre cinco jogadores e, ao final, exibir o maior e o menor pontuador.

#include<stdio.h>
    typedef struct {
        char nickname[50];
        int pont;   
    }Jogador;

    int main (){
        Jogador jog[5];
        for (int i = 0; i < 5; i++){
            printf("nome do jogador: \n");
            scanf(" %[^\n]",jog[i].nickname);
            printf("pontos: \n");
            scanf("%d",&jog[i].pont);
        }
        
        int indicemaior = 0, indicemenor = 0;

        for (int i = 0; i < 5; i++){
            if (jog[i].pont > jog[indicemaior].pont) {
                indicemaior = i;
            }
            if (jog[i].pont < jog[indicemenor].pont) {
                indicemenor = i;
            }
        }

        printf("o jogador com mais pontos:\n");
        printf("%s\n", jog[indicemaior].nickname);
        printf("%d\n", jog[indicemaior].pont);

    
        printf("o jogador com menos pontos:\n");
        printf("%s\n", jog[indicemenor].nickname);
        printf("%d\n", jog[indicemenor].pont);


        return 0;
    }

