#include<stdio.h>
int main (){
    int l , b ;
    printf("enter length : ");
    scanf("%d", &l);
    printf("enter breadth : ");
    scanf("%d", &b);

    int area = l * b ;
    int per = 2*(l+b);

    if(area>per){
        printf("area is greater than the primeter");

    }
    else{
        printf("perimeter is greater than the area");
    }
}