/*H: a posição do helicóptero (0 a 15),
P: a posição do policial (0 a 15),
F: a posição do fugitivo (0 a 15),
D: a direção em que o fugitivo corre (-1 para horário e 1 para anti-horária).
*/

#include<stdio.h>
int main (){
    int h, p, f, d;
    scanf("%d",&h);
    scanf("%d",&p);
    scanf("%d",&f);
    scanf("%d",&d);

    //Imprima “S” se o fugitivo conseguir chegar ao helicóptero, ou “N” caso contrário.
   if (d = -1){
        while (f != h || f != p ){
        f--;
        if (f == -1){
            f = 15;
        }
        if (f == h){
            printf("S\n");
            break;
        }
        else if (f == p){
            printf("N\n");
            break;
        }
    }
}
    
    else {
        while (f != h || f != p ){
            f++;
            if (f == 16){
                f = 0;
            }
            if (f == h){
                printf("S\n");
                break;
            }
            else if (f == p){
                printf("N\n");
                break;
            }
        }
    }

return 0;
}