//Crie uma estrutura para representar conta corrente. A conta corrente deve ser composta por número da conta, nome do titular e saldo. Crie uma conta e um menu de opções para sacar, depositar e verificar saldo.

#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int numero;
    char titular [50];
    float saldo;
} Conta;

int main (){
    Conta conta;
    char op;
    float valor;
    
    printf ("Nome: \n");
        scanf("%[^\n]",conta.titular);
    printf("Numero da conta: \n");
        scanf("%d",&conta.numero);
    printf("Saldo: \n");
        scanf("%f",&conta.saldo);

        while (op != '0'){
    printf("Menu: \n 1 - sacar \n 2 - depositar \n 3 - verificar saldo \n 0 - sair \n");
            scanf(" %c",&op);


        if (op == '1'){
            scanf("%f",&valor);
            if (conta.saldo < valor){
                printf("valor de saque maior que valor do saldo\n");
            }
            else {
            conta.saldo = conta.saldo - valor;
            printf("saldo atualizado: %.2f \n",conta.saldo);
            }
        }
        else if (op == '2'){
            scanf("%f",&valor);
            conta.saldo = conta.saldo + valor;
            printf("saldo atualizado: %.2f \n",conta.saldo);
        }
        else if (op == '3'){
            printf("saldo atual: %.2f \n",conta.saldo);
        }
    }

    return 0;
}
