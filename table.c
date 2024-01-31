#include<stdio.h>
int main(){
    int x ;
    int a;
    printf("enter the number : ");
    scanf("%d",&x);

    for (a = 1 ; a <= 10 ; a++){
        int multiplication = x * a;
        printf("\n %d * %d = %d" , x , a , multiplication);
    }

    // int a = 1 ;
    // while(a<=10){ 
    //   int multiplication = x * a;
    //   printf("\n %d * %d = %d" , x , a , multiplication);

    //   a++ ;

    //}

}