#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int z = 0, b = 0, octal = 0;
    printf("Enter the binary number:");
    scanf("%d", &n);
    for (int i = 0; n > 0; i++)
    {
        int x = n % 10;
        n = n / 10;
        z = z + (x * pow(2, i));
    }
    printf("Conversion of binary to decimal:%d\n", z);
    for (int j = 0; z != 0; j++)
    {
        int rem = z % 8;
        octal = octal + rem * pow(10, j);
        z = z / 8;
    }
    printf("Conversion of binary to octal:%d", octal);

    return 0;
}