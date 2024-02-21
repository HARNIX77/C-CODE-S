#include<stdio.h>
int main()

{
    int a;

    printf("enter your age===>");
    scanf("%d",&a);

    if (a >=18)
    
    {
        printf(" you are not eligible for voter id ");
    }
    else if( a <= 18)
    {
        printf("you are eligible for voter id");
    }
    else
    {
        printf("invalid statement");
    }
    return 0;
}