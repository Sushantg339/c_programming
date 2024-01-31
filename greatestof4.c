#include<stdio.h>
int main(){
    int x , y , z , a ;
    printf("enter first number :");
    scanf("%d",&x);
    printf("enter second number :");
    scanf("%d",&y);
    printf("enter third number :");
    scanf("%d",&z);
    printf("enter fourth number :");
    scanf("%d",&a);

    if(x>y && x>z && x>a){
        printf("%d is greatest", x);
    }
    else if(y>z && y>a){
        printf("%d is greatest", y);
    }
    else if(z>a){
        printf("%d is greatest", z);
    }
    else{
        printf("%d is greatest", a);
    }
    
}