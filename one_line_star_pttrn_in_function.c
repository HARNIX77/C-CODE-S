#include<stdio.h>

void pttrn(int v)
{
  int star;
  if (v==1)
  {
    printf("*\n");

  }
  else
  {
    printf("*");
  }
  pttrn(n-1);
  
}
int main()
{
    int x;
    printf("Enter a number  of rows==>");
    scanf("%d",&x);
    
     pttrn(x);
    return 0;
}