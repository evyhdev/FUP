//Desenvolva um programa que receba as quantidades de alimentos doadas por três escolas, assim como os pesos de cada alimento arrecadado, utilizando ponteiros e alocação dinâmica de memória. O programa deve calcular e exibir o total de pontos arrecadados.
#include<stdio.h>
#include<stdlib.h>

int main (){

    int *q1 = (int*) malloc(sizeof(int));
    int *q2 = (int*) malloc(sizeof(int));
    int *q3 = (int*) malloc(sizeof(int));
    int *p1 = (int*) malloc(sizeof(int));
    int *p2 = (int*) malloc(sizeof(int));
    int *p3 = (int*) malloc(sizeof(int));
    int *total = (int*) malloc(sizeof(int));

    *total = 0;

        scanf("%d",q1);
        scanf("%d",q2);
        scanf("%d",q3);
        scanf("%d",p1);
        scanf("%d",p2);
        scanf("%d",p3);

            *total = (*q1 * *p1 + *q2 * *p2 + *q3 * *p3);
                printf("%d",*total);

    free(p1);
    free(p2);
    free(p3);
    free(q1);
    free(q2);
    free(q3);
    free(total); 

    



    return 0;
}