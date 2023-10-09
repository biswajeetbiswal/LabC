#include <stdio.h>
int main()
{
    int n, x;
    printf("Enter number of array element:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    /* for (int i = 1; i <= n; i++)
     {
         printf("arr[%d]=%d\n", i, arr[i]);
     }*/

    printf("Enter value of 'k':");
    scanf("%d", &x);
    printf("The 'k'th smallest number is:%d", arr[x]);
    return 0;
}