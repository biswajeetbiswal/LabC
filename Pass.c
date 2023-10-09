#include <stdio.h>
int main()
{
    int n;
    float pass = 0, fail = 0;
    printf("Enter the number of student:");
    scanf("%d", &n);
    int arr[n];
    printf("The highest mark is:600\n");
    printf("Enter marks:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 198)
        {
            pass++;
        }
        else
        {
            fail++;
        }
    }
    printf("Number of pass:%f\n", pass);
    printf("Number of fail:%f\n", fail);

    int x = (pass / n) * 100;
    int y = (fail / n) * 100;
    printf("Percentage of pass:%d \n", x);
    printf("Percentage of fail:%d", y);
    return 0;
}