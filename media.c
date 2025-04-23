#include<stdio.h>
#include<stdlib.h>
int main (){

    //3 notas: nota1, nota2 e nota_final, uma por linha saida: aprovado, reprovado, aprovado na final ou reprovado na finalObs: descarte a nota da final se ela não for necessária
    float *nota1 = (float*) malloc(sizeof(float));
    float *nota2 = (float*) malloc(sizeof(float));
    float *notafinal = (float*) malloc(sizeof(float));
    float *media = (float*) malloc(sizeof(float));
    float *mediafinal = (float*) malloc(sizeof(float));

    scanf("%f",nota1);
    scanf("%f",nota2);
    scanf("%f",notafinal);

    *media = (*nota1+ *nota2)/2;

    if (*media >= 7){
        printf("aprovado");
    }
    else if (*media < 4) {
        printf("reprovado");

    }
    else if (*media < 7 && *media >= 4){
        *mediafinal = (*media + *notafinal) / 2;
        if (*mediafinal >= 5){
            printf("aprovado na final");
        }
        else {
            printf("reprovado na final");    
        }
    }
    free (nota1);
    free(nota2);
    free(notafinal);
    free(media);
    free(mediafinal);


}