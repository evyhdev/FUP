#include<stdio.h>
int main (){
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    int b1= b;

    printf("[ ");
    for (int i = a; i <= b; i++){
      printf("%d ",a++);
      printf("%d ",b--);
    // 1 10 2 9 3 8 4 7 5 6
    }


    for (int i = a; i <= b1; i++){
        printf("%d ",a++);
        printf("%d ",b--);
      // 1 10 2 9 3 8 4 7 5 6
      }
      printf("]");

   
    return 0;
}