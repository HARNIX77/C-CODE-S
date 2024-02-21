#include <stdio.h>

int main() {
    int x, y, z;

    printf("Enter the 1st number==> ");
    scanf("%d", &x);

    printf("Enter the 2nd number==> ");
    scanf("%d", &y);

    printf("Before swapping==>\n");
    printf("1st number==> %d\n", x);
    printf("2nd number==> %d\n", y);

    z = x;
    x = y;
    y = z;

    printf("After swapping==>\n");
    printf("1st number==> %d\n", x);
    printf("2nd number==> %d\n", y);

    return 0;
}
