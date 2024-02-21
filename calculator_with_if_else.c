#include<stdio.h>
int main()
{
    int a,b,ans;
    char cal;
    printf("<<<<<<<<<<enter the operator for your calulations>>>>>>>>>>>>>>\n");
   printf ( "enter + for addtition\n enter - for subtraction \n enter * for multiplication \n enter / for divison \n>>>>>");
   scanf("%c",&cal);


   if(cal == '+')
   {
     printf("enter the 1st digit ");
        scanf("%d",&a);
        printf("enter the 2nd digit ");
        scanf("%d",&b);
        ans=a+b; 
        printf("the answer to your given numbers are===> %d",ans);
   }
   else if(cal == '-')
   {
    printf("enter the 1st digit ");
        scanf("%d",&a);
        printf("enter the 2nd digit ");
        scanf("%d",&b);
        ans=a-b;
        printf("the answer to your given numbers are======>> %d",ans);
   }
   else if(cal == '*')
   {
printf("enter the 1st digit ");
        scanf("%d",&a);
        printf("enter the 2nd digit ");
        scanf("%d",&b);
        ans=a*b;
        printf("the answer to your given numbers are======>> %d",ans);
   }
   else if(cal == '/')
   {
    printf("enter the 1st digit ");
        scanf("%d",&a);
        printf("enter the 2nd digit ");
        scanf("%d",&b);
        ans=a/b;
        printf("the answer to your given numbers are======>> %d",ans);
   }
   else
   {
    printf("invalid input");
   }
   return 0;
}
