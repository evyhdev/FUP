#include<stdio.h>
int main (){
    int c, m;
    int cont = 0;
    scanf("%d",&c);

    while (cont >= 0) {
    scanf("%d",&m);
 
   
    cont += m;
    
    if (cont == 0){
       printf("vazio\n"); 
    }
    else if (cont != 0 && cont < c){
        printf("ainda cabe\n");

    }
    else if (cont >= c && cont < (2 * c)){
        printf("lotado\n");
    }
    else if (cont >= (2 * c)){
        printf("hora de partir\n");
        break;
    }

    }
    return 0;
}