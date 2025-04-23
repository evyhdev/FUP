#include<stdio.h>
#include<math.h>
//Escreva uma função que receba o valor das coordenadas de dois pontos (x1, y1, x2, y2) como parâmetro. Calcule e retorne a distância entre estes pontos. Crie também a função main que lê os valores de entrada do teclado, chama a função de cálculo da distância e imprime na tela o valor do resultado.

//pow(x,2) é x elevado a 2
//sqr(dist) é raiz de dist

//d=√((x_2-x_1)²+(y_2-y_1)²)

float distancia (float x1, float y1, float x2, float y2){
    float x = x2 - x1;
    float y = y2 - y1;
    float rx = pow(x,2);
    float ry = pow(y,2);
    float soma = rx + ry;
    float dist = sqrt(soma);
    return dist;
}
int main (){
    float x1, y1,x2, y2;
    float result;
    scanf("%f %f %f %f",&x1, &y1, &x2, &y2);
    result = distancia(x1, y1,x2, y2);
    printf("%f",result);
    return 0;
}