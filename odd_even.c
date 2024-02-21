#include<stdio.h>
int main()
{
    int a;
    printf("enter the number to check weather its even or odd===>>");
    scanf("%d",&a);

    if( a%2 == 0  )
    {
        printf("its an even numeber");
    }
    else if( a%2 != 0)
    {
        printf("its odd");
    }
    else
    {
        printf("its invalid");
    }

    return 0;
}
