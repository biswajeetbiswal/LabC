#include <stdio.h>
int main()
{
    int x, y, lcm, gcd = 1;

    printf("Enter two numbers:");
    scanf("%d %d", &x, &y);
    int a = x, b = y;
    for (int i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            gcd = gcd * i;
            x = x / i;
            y = y / i;
        }
    }
    printf("GCD is:%d\n", gcd);
    lcm = (a * b) / gcd;
    printf("LCM is:%d", lcm);
    return 0;
}