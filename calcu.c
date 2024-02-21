#include<stdio.h>
int main(void)
{
int a,b,ans;
char chr;
printf("enter + for addition \nenter - for subtraction\nenter * for multiplication\n enter / for division\n===>>>");
scanf("%c",&chr);

if(chr=='+')
{
    printf("enter the 1st digit =>");
    scanf("%d",&a);
    printf("enter the 2nd digit =>");
    scanf("%d",&b);
    ans=a+b;
    printf("the answer as per your given values ===>%d",ans);
}
else if (chr=='-')
{
    printf("enter the 1st digit =>");
    scanf("%d",&a);
    printf("enter the 2nd digit =>");
    scanf("%d",&b);
    ans=a-b;
    printf("the answer as per your given values ===>%d",ans);
}
else if (chr=='*')
{
    printf("enter the 1st digit =>");
    scanf("%d",&a);
    printf("enter the 2nd digit =>");
    scanf("%d",&b);
    ans=a*b;
    printf("the answer as per your given values ===>%d",ans);
}
else if (chr=='/')
{
    printf("enter the 1st digit =>");
    scanf("%d",&a);
    printf("enter the 2nd digit =>");
    scanf("%d",&b);
    ans=a/b;
    printf("the answer as per your given values ===>%d",ans);
}
}