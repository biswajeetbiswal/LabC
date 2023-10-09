#include <stdio.h>
int main()
{
    int temp, a, b, c;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("Enter the value of c:");
    scanf("%d", &c);
    temp = b;
    b = a;
    a = c;
    c = temp;
    printf("After Exchange:a=%d\nb=%d\nc=%d", a, b, c);
    return 0;
}