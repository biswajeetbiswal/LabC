#include <stdio.h>
int recursion(int n);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    int x = recursion(n);
    printf("%d", x);
    return 0;
}
int recursion(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return recursion(n - 1) * n;
    }
}