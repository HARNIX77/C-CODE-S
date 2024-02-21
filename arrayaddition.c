#include<stdio.h>
void main()
{
    int a[10];
    int sum=0;

    for ( int i = 0; i < 10; i++)
    {
        printf("enter the number ==>");
        scanf("%d",&a[i]);

      sum=sum+a[i];

    }
    printf("%d",sum);
    
    
}