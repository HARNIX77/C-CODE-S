#include<stdio.h>
int main()
{
   int n,a,c=1,s=0;
   float avg;

   printf("how many numbers==>");
   scanf("%d",&n);

   while (c<=n)
   {
    printf("enter the number==>\n");
    scanf("%d",&a);
    s+=a;
    c++;
   }
   avg =(s/n);
  printf("Sum = %d\n", s);
  printf("average of %lf",avg);
   
    
    return 0;
}