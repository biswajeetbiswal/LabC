#include <stdio.h>
int main()
{
    int n;
    float x, sum = 0;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + (1.0 / arr[i]);
    }
    x = n / sum;
    printf("Harmonic mean is:%f", x);
    return 0;
}