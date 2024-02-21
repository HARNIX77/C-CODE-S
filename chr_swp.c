#include <stdio.h>

int main() {
    char x, y, z;

    printf("Enter the 1st character==> ");
    scanf(" %c", &x);

    printf("Enter the 2nd character==> ");
    scanf(" %c", &y);

    printf("Before swapping==>\n");
    printf("1st character==> %c\n", x);
    printf("2nd character==> %c\n", y);

    z = x;
    x = y;
    y = z;

    printf("After swapping==>\n");
    printf("1st character==> %c\n", x);
    printf("2nd character==> %c\n", y);

    return 0;
}
