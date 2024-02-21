#include <stdio.h>
int main()
{
    int a[4];
    int i, n;

    // Get number of elements
    printf("Enter the number of elements in array : ");
    scanf("%d", &n);

    // Get array elements
    for (i = 0; i < n; i++)
    {
        printf("enter the array elements=>");
        scanf("%d", &a[i]);
    }

    // Print reverse of array
    printf("reverse of an array\n");
    for (i = n - 1; i >= 0; i--)
    {
        if (i == 0)
        {
            printf("%d\n", a[i]);
        }
        else
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}