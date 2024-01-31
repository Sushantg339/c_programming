#include <stdio.h>
int main()
{
    int x, y, z;
    printf("enter the first number :");
    scanf("%d", &x);
    printf("enter the second number :");
    scanf("%d", &y);
    printf("enter the third number :");
    scanf("%d", &z);

    if (x > y && x > z)
    {
        printf("%d is greatest ", x);
    }
    else if (y > z)
    {
        printf("%d is greatest ", y);
    }
    else
    {
        printf("%d is greatest ", z);
    }
}
