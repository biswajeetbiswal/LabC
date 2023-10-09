#include <stdio.h>
int main()
{
    int arr[2];
    printf("Enter array element:");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    printf("Address of p varible is:%u\n", ptr);
    printf("Before increment:%d\n", *ptr);
    ptr++;
    printf("After increament,Address of p:%u\n", ptr);
    printf("After increament:%d", *ptr);

    return 0;
}