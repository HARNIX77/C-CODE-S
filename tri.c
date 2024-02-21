#include <stdio.h>
int main() {
    int x, v = 1;

    printf("Enter the number of rows for triangle==>");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("*");
            v++;
        }
        printf("\n");
    }

    return 0;
}
