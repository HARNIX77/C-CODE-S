#include<stdio.h>
int main()
{
    int a,b,c,x;
    printf("enter the three values for there average ==>");
    scanf("%d\n%d\n%d",&a,&b,&c);

    x=a+b+c/3;
    printf("the average of the given 3 numbers is ==>%d",x);
    return 0;

}