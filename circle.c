#include <stdio.h>
int main()
{
    float rad, ar, per;

    printf("Enter the radius of the circle==> ");
    scanf("%f", &rad);

    ar = 3.14 * rad * rad;
    per = 2 * 3.14 * rad;

    printf("area of the circle==> %f\n", ar);
    printf("Perimeter of the circle==> %f\n", per);

    return 0;
}
