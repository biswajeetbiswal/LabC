#include <stdio.h>
int main()
{
    int n, count = 1, count1 = 1;
    printf("Enter number of array element:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:");
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
    /*for (int i = 0; i < n; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }*/
    printf("The smallest element is:%d\n", arr[0]);
    printf("The largest element is:%d\n", arr[n - 1]);

    for (int i = 1; i < n; i++)
    {
        if (arr[0] == arr[i])
        {
            count++;
        }
    }
    printf("The smallest number repeat '%d' times\n", count);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[n - 1] == arr[i])
        {
            count1++;
        }
    }
    printf("The largest number repeat '%d' times", count1);
    return 0;
}