//Crie um tipo de dado data composto por int dia, int mês e int ano. Em seguida crie uma data e leia dados do teclado para ela verificando que os dados são compatíveis com uma data válida
#include<stdlib.h>
#include<stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

    int main (){
    Data data;

    scanf("%d %d %d", &data.dia, &data.mes, &data.ano);

    if ( data.dia > 31 || data.mes > 12){
        printf("invalido");
    }
    else{
        printf("valida");
    }

    return 0;
}
