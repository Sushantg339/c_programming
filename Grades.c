#include<stdio.h>
int main(){
    int x;
    printf("enter the grade : ");
    scanf("%d",&x);

    if(x>90){
        printf("excellent");
    }
    else if(x>80){
        printf("very good");
    }
    else if(x>70){
        printf("good");
    }
    else if(x>60){
        printf("can do better");
    }
    else if(x>50){
        printf("average");
    }
    else if(x>40){
        printf("below average");
    }
    else{
        printf("fail");
    }
}