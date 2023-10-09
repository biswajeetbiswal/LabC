#include <stdio.h>
int main()
{
    int m, n, o;
    printf("Enter number of rows in first matrix:");
    scanf("%d", &m);
    printf("Enter number of columns in first matrix:");
    scanf("%d", &n);
    printf("Enter number of columns in second matrix:");
    scanf("%d", &o);
    int arr[m][n];
    int tra[n][o], mul[m][o], sec[o][m];
    printf("Enter first array elements:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter second array elements:");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < o; j++)
        {
            scanf("%d", &tra[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < o; j++)
        {
            mul[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < o; j++)
        {
            for (int k = 0; k < n; k++)
            {
                mul[i][j] += arr[i][k] * tra[k][j];
            }
        }
    }
    printf("After multiplication:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < o; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sec[i][j] = mul[j][i];
        }
    }
    printf("Array element after transpose\n");
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", sec[i][j]);
        }
        printf("\n");
    }
    return 0;
}