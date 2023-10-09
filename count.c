#include <stdio.h>
int main()
{
    int n, x, count = 0;
    printf("Enter the number:");
    scanf("%d", &n);
    while (n > 0)
    {
        x = n % 10;
        count++;
        n = n / 10;
    }
    printf("The number of digit is:%d", count);
    return 0;
}