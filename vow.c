#include<stdio.h>
int main()
{
 char v;
  printf("enter the character to check weather its a vowel or consonen==>");
  scanf("%c/n",&v);

  (v=='a'||v=='A' ||v=='e'||v=='E'||v=='i'||v=='I'||v=='o'||v=='O'||v=='u'||v=='U')?printf("%c is a vowel",v):printf("%c is a consonent",v);
   return 0;

}