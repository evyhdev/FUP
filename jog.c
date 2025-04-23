
#include<stdio.h>
#include<math.h>

    typedef struct {
        int x;
        int y;
    } Ponto;

    typedef struct {
        Ponto ponto1;
        Ponto ponto2;
    } Reta;

    float distancia (Reta reta){
    //d = √((x2 - x1)² + (y2 - y1)²) 
        float distx = reta.ponto2.x - reta.ponto1.x;
        float disty = reta.ponto2.y - reta.ponto1.y;
        float dist = pow(distx,2) + pow(disty,2);
        float result = sqrt(dist);
        return result;
    }

int main (){
    Reta r;
    scanf("%d %d %d %d", &r.ponto1.x, &r.ponto1.y, &r.ponto2.x, &r.ponto2.y );
    float resul;
    resul = distancia (r);
    printf("%.2f",resul);

    return 0;


}