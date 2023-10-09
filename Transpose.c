#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter number of rows:");
    scanf("%d", &m);
    printf("Enter number of columns:");
    scanf("%d", &n);
    int arr[m][n];
    int tra[n][m];
    printf("Enter array elements:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Array element before transpose\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            tra[i][j] = arr[j][i];
        }
    }
    printf("Array element after transpose\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", tra[i][j]);
        }
        printf("\n");
    }
    return 0;
}
