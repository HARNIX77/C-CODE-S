#include<stdio.h>
int main()
{
    char p[100];

    printf("enter the string to check weather it's palindrome or not==>");
    scanf("%s",p);

    int k=0;
    while(p[k]!='\0')
    {
        k++;
    }
    int pal=1;
    for (int i = 0; i < k/2; i++)
    {
        if(p[i]!=p[k-i-1])
        {
            pal=0;
            break;
        }
    }
    if(pal==1)
    {
        printf("the string is palindrome");
    }
    else
    {
        printf("the string is not palindrome");
    }
    return 0;
}