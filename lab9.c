#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of element:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array element:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("After sorting:");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]:%d\n", i, arr[i]);
    }
    return 0;
}