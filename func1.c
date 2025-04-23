//Neste exemplo vamos considerar o 2o caso (passar resultados por referência). Implemente a função ‘converte_tempo’, que recebe o tempo em segundos e retorna em 3 variáveis passadas por referência este tempo convertido em horas, minutos e segundos.

#include<stdio.h>
#include<stdlib.h>

int convert (int *temp, int *h, int *min, int *seg){
    int *h = *temp / 3600   
    int *min = *h *60; 
}