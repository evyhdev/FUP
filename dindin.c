#include<stdio.h>
int main (){
    int a;
    scanf("%d", &a);
    char sabor[a];
    char turno[a];

    for (int i = 0; i < a; i++){
        scanf(" %c", &sabor[i]);
        scanf(" %c", &turno[i]);
    }

    int choc = 0, lim = 0;
    int man = 0, tarde = 0;

    for (int i = 0; i < a; i++){
        if (sabor[i] == 'c'){
            choc++;
        }
        else if (sabor[i] == 'l'){
            lim++;
        }
        if (turno[i] == 'm'){
            man++;
        }
        else if (turno[i] == 't'){
            tarde++;
        }
    }

    if (choc > lim){
        printf("c\n");
    }
    else if (choc < lim){
        printf("l\n");
    }
    else {
        printf("empate\n");
    }

    if (man > tarde){
        printf("t\n");
    } 
    else if (man < tarde){
        printf("m\n");
    }
    else {
        printf("empate\n");
    }

    return 0;
}
