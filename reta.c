//Crie um programa modularizado (usando funções) para tratar uma reta. Defina o tipo ponto, o tipo reta baseado no ponto a e uma função float calcula_tamanho(Reta r). Finalmente, defina um main que vai ler os dados dos pontos de uma reta, encontrar e exibir seu tamanho.

//dAB² = (xB – xA)² + (yB – yA)².

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

    typedef struct {
        int x;
        int y;
    } Ponto;

    typedef struct {
        Ponto ponto1;
        Ponto ponto2;
    } Reta;

    float dist (Reta reta){
        float distanciax = reta.ponto2.x - reta.ponto1.x;
        float distanciay = reta.ponto2.y - reta.ponto1.y;
        float distancia = pow(distanciax,2) + pow(distanciay,2);
        float result = sqrt(distancia);
        return result;
    }

    int main () {
        Reta reta;
        scanf("%d %d %d %d", &reta.ponto1.x, &reta.ponto1.y, &reta.ponto2.x, &reta.ponto2.y);

        float result;

        result = dist (reta);

        printf("%.2f",result);

        return 0;



    }

