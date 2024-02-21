#include<stdio.h>

int main()
{
    float num,ans_sq,ans_cu;
    
    printf("enter the number===>");
    scanf("%f",&num);
    ans_sq=num*num;

    printf("the square root of the entered value is==>%f\n",ans_sq);

    printf("enter the number===>");
    scanf("%f",&num);
    ans_cu=num*num*num;

    printf("the cube of the entered value  is ==>%f",ans_cu);

    return 0;
}