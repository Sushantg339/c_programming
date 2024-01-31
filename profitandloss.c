#include<stdio.h>
int main (){
    int x , y ;
    printf("enter the cost price : ");
    scanf("%d",&x);
    printf("enter the selling price : ");
    scanf("%d",&y);
    if(x>y){
        printf("the seller has made a LOSS of %d", x-y);
    }
    else{
        printf("the seller has made a PROFIT of %d", y-x);
    }
    return 0;
}