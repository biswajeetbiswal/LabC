#include <stdio.h>
int main()
{
    int n, x = 1, y = 1;
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
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The largest no. is:%d \n", arr[0]);
    printf("The smallest no. is:%d\n", arr[n - 1]);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[0] == arr[i])
        {
            x++;
        }
    }
    printf("\nRepeat of the largest no. is:%d times\n", x);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[n - 2] == arr[i])
        {
            y++;
        }
    }
    printf("Repeat of the smallest no. is:%d times", y);
    return 0;
}