
#include<stdio.h>
#include <stdlib.h>

int main (){
    int n; //dimensão do tab
    int x; //posição inicial hor
    int y; //posição inicial vert
    char c; //direção sa cobra;
    int s; //quanto tempo a cobrinha vai andar;

    scanf("%d",&n);
    scanf("%d",&x);
    scanf("%d",&y);
    scanf(" %c",&c);
    scanf("%d",&s);

    int xf = 0, yf = 0;

    //UP
    if (c == 'U'){
        xf = x;
        yf = y - s;

        if (yf < 0){
            yf = n + yf;
        }

    }

    //LEFT
    if (c == 'L'){
        yf = y;
        xf = x - s;

        if (xf < 0){
            xf = n + xf;
            if (xf < 0);
        }

    }


    //R
    if (c == 'R'){
        yf = y;
        xf = x + s;
    
        while (xf > n){
            xf = xf - n;
        }
        if (xf == n){
            xf = 0;
        }
    }

    //DOWN
    if (c == 'D'){
        xf = x;
        yf = y + s;
        
        
         while (yf > n){
            yf = yf - n;
        }
        

        if (yf == n){
            yf = 0;
        }
    }

    printf("%d %d\n", abs(xf), abs(yf));


    return 0;
}
