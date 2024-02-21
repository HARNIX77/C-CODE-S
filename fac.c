#include<stdio.h>

int main()
{
    int fac, v = 1;

    printf("Enter the number you want to calculate factorial for==> ");
    scanf("%d", &fac);

    for (int i = 1; i <= fac; i++)
    {
        v = v * i;
    }

    printf("Factorial of the number you've entered is==> %d\n", v);
    return 0;
}
