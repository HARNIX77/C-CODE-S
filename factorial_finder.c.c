#include<stdio.h>

void main()
{
    int arm, v = 1;

    printf("Enter the number you want to calculate factorial for==> ");
    scanf("%d", &arm);

    for (int i = 1; i <= arm; i++)
    {
        v = v * i;
    }

    printf("Factorial of the number you've entered is==> %d\n", v);
}
