#include <stdio.h>
int main()
{
    float a[4];
    int i, n;
    float sum, avg;

    // Get number of elements
    printf("Enter the number of elements in array : ");
    scanf("%d", &n);

    // Get array elements
    for (i = 0; i < n; i++)
    {
        printf("Enter the array elements=>");
        scanf("%f", &a[i]);
    }

    // Calculate sum and average
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
        avg = sum / i;
    }

    // Print average of numbers
    printf("Average of numbers are ==>%f", avg);

    return 0;
}