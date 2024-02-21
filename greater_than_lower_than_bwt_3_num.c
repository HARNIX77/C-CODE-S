#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter the number for a==>");
    scanf("%d",&a);
    printf("enter the number for b==>");
    scanf("%d",&b);
    printf("enter the number for c==>");
    scanf("%d",&c);

if(a>b && a>c && a>d)
{
    printf("the value entered in a is Greater");
}
else if(b>a && b>c && b>d)
{
     printf("the value entered in b is Greater");
}
else if(c>a && c>b && c>d)
{
     printf("the value entered in c is Greater");
}
else
{
    printf("d is greater than everyone else");
}
}