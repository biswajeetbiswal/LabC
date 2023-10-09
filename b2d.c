#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int z = 0, b = 0;
    printf("Enter the binary number:");
    scanf("%d", &n);
    for (int i = 0; n > 0; i++)
    {
        int x = n % 10;
        n = n / 10;
        z = z + (x * pow(2, i));
    }
    printf("Conversion of binary to decimal:%d\n", z);
    int j = 0;
    int octal = 0;
    while (z != 0)
    {
        int rem = z % 8;
        octal += rem * pow(10, j);
        z = z / 8;
        j++;
    }
    printf("Conversion of binary to octal:%d\n", octal);

    return 0;
}