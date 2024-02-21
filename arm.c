#include<stdio.h>
int main()
{
    int arm,rem,v=0,x;

    printf("enter the number you want to check weather its an armstrong number or no==>");
    scanf("%d",&arm);
    x=arm;
    

    while (arm != 0)
    {
        rem=arm%10;
        v+=rem*rem*rem;
        arm/=10;
       
    }
  
    if (v == x )
    {
       printf("ITS AN ARMSTRONG NUMBER===> %d",x);
    }
    else
    {
        printf("ITS NOT AN ARMSTRONG NUMBER===> %d",x);
    }
    return 0;
    
    
}