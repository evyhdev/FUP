#include<stdio.h>
#include<stdlib.h>
int main (){
    int *h = (int*) malloc(sizeof(int)); //posição do helicóptero
    int *p = (int*) malloc(sizeof(int)); //posição da policia
    int *f = (int*) malloc(sizeof(int)); //posição do fugitivo
    int *d = (int*) malloc(sizeof(int)); //direção em que o fugitivo corre -1 horario || 1 anti

    scanf("%d %d %d %d", h, p, f, d);

    if (*d == -1){
        while (*f != *h || *f != *p){
            (*f)--;
            if (*f == -1){
                *f = 15;
            }
            else if (*f == *h){
                printf("S\n");
                break;
            }
            else if (*f == *p){
                printf("N\n");
                break;
            }
            
        }
    }
    else {
        while (*f != *h || *f != *p){
            (*f)++;
            if (*f == 16 ){
                *f = 0;
            }
            else if (*f == *h){
                printf("S\n");
                break;
            }
            else if (*f == *p){
                printf("N\n");
                break;
            }
        }
    }

    free(h);
    free(p);
    free(f);
    free(d);


    return 0;

}