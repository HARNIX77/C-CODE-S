#include<stdio.h>

int main() {
    int a, x, v;

    printf("Enter a number for 'a': ");
    scanf("%d", &a);

    printf("Enter a number for 'x': ");
    scanf("%d", &x);

    v = a + x; // Perform addition and store the result in 'v'

    printf("The sum of 'a' and 'x' is: %d\n", v);

    return 0;
}
