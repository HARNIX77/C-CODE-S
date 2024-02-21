#include<stdio.h>

int main() {
    int dec, rem, bin = 0, x = 1;

    printf("Enter a decimal number==>");
    scanf("%d", &dec);

    while (dec > 0) {
        rem = dec % 2;
        bin += rem * x;
        dec /= 2;
        x *= 10;
    }

    printf("Binary representation==>%d\n", bin);

    return 0;
}
