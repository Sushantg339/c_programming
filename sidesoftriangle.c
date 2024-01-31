#include<stdio.h>
int main(){
    int x , y , z ;
    printf("enter the first side : ");
    scanf("%d", &x);
    printf("enter the second side : ");
    scanf("%d", &y);
    printf("enter the third side : ");
    scanf("%d", &z);
    if( (x + y) > z && (y + z) > x && (z + x) > y){
        printf("they can be sides of triangle");
    }
    else{
        printf("they can not be sides of triangle");
    }
}