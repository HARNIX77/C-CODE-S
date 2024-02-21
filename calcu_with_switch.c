#include<stdio.h>
void main()
{
int a,b,ans;
char chr;
printf("enter + for addition \nenter - for subtracktion\nenter * for multiplication\n enter / for division\n===>>>");
scanf("%c",&chr);

switch (chr)
{
case '+':
   printf("enter the 1st digit =>");
    scanf("%d",&a);
    printf("enter the 2nd digit =>");
    scanf("%d",&b);
    ans=a+b;
    printf("the answer as per your given values ===>%d",ans);
    break;

    case '-':
     printf("enter the 1st digit =>");
    scanf("%d",&a);
    printf("enter the 2nd digit =>");
    scanf("%d",&b);
    ans=a-b;
    printf("the answer as per your given values ===>%d",ans);
    break;
    case '*':
    printf("enter the 1st digit =>");
    scanf("%d",&a);
    printf("enter the 2nd digit =>");
    scanf("%d",&b);
    ans=a*b;
    printf("the answer as per your given values ===>%d",ans);
    break;
    case '/':
     printf("enter the 1st digit =>");
    scanf("%d",&a);
    printf("enter the 2nd digit =>");
    scanf("%d",&b);
    ans=a/b;
    printf("the answer as per your given values ===>%d",ans);
    break;


    default:
{
    printf("........................INVALID..........................");
}
    break;
}


}