#include<stdio.h>
int main (){
    int x1 , y1 , x2 , y2 , x3 , y3 ;
    printf("enter the coordinate x1 : ");
    scanf("%d",&x1);
    printf("enter the coordinate y1 : ");
    scanf("%d",&y1);
    printf("enter the coordinate x2 : ");
    scanf("%d",&x2);
    printf("enter the coordinate y2 : ");
    scanf("%d",&y1);
    printf("enter the coordinate x3 : ");
    scanf("%d",&x3);
    printf("enter the coordinate y3 : ");
    scanf("%d",&y3);

    int m1 = (y2-y1)/(x2-x1);
    int m2 = (y3-y2)/(x3-x2);

    if(m1==m2){
        printf("these coordinates lie on a straight line !!!");
    }
    else{
        printf("there coordinates can not lie on a straight line");
    }
}