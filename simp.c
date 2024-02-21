#include<stdio.h>
int main()
{
     float pia, rat, tim, si;
    printf("Enter the principal amount==>");
    scanf("%f", &pia);
    printf("Enter the rate of interest==>");
    scanf("%f", &rat);
    printf("Enter the time period in years==>");
    scanf("%f", &tim);
    si=(pia*tim*rat)/100;
    printf("simple interest==>%f\n",si);
    return 0;
}