#include <stdio.h>

int main() {
    int x, y,z;

    printf("Enter the first number==> ");
    scanf("%d", &x);

    printf("Enter the second number==> ");
    scanf("%d", &y);
    
    printf("Enter the third number==> ");
    scanf("%d", &z);


   if (x > y && x > z)
    {
        printf("Maximum number is==> %d\n", x);
        if (y > z)
        {
            printf("Minimum number is==> %d\n", z);
        }
        else
        {
            printf("Minimum number is==> %d\n", y);
        }
    }
     else if (y > x && y > z) {
        printf("Maximum number is==> %d\n", y);
        if (x > z)
        {

            printf("Minimum number is==> %d\n", z);
        }
        else
        {
            printf("Minimum number is==> %d\n", x);
        }
    } 
    else if (z > x && z > y) 
    {
        printf("Maximum number is==> %d\n", z);
        if (x > y)
        {
            printf("Minimum number is==> %d\n", y);
        }
        else
        {
            printf("Minimum number is==> %d\n", x);
        }
    }
     else 
    {
        printf("All numbers are equal.\n");
    }

    return 0;
}
