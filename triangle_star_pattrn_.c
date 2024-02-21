#include<stdio.h>
void tri(int v)
{
    int i,x;
    
    for ( i = 0; i < v; i++)
    {
        printf("*\n");
    }
    
}
int main()
{
    int a;
    printf("enter the number of rows you want in your star pattern==>");
    scanf("%d",&a);

tri(a);
return 0;
}