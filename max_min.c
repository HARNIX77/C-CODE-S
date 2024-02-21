#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the first number==> ");
    scanf("%d", &x);

    printf("Enter the second number==> ");
    scanf("%d", &y);

    if (x > y) {
        printf("Maximum number is==> %d\n", x);
        printf("Minimum number is==> %d\n", y);
    }
     else if (y > x) {
        printf("Maximum number is==> %d\n", y);
        printf("Minimum number is==> %d\n", x);
    } 
    else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
