#include <stdio.h>
struct str
{
    char name[44];
    int age;
};
union un
{
    char name[40];
    int age;
};
int main()
{
    struct str s1;

    union un u1;
    printf("Enter the name for strcture:");
    scanf("%s", &s1.name);
    printf("Enter the age for union");
    scanf("%d", &u1.name);
    printf("Name:%s\nAge:%d\n", s1.name, u1.age);
    printf("Size of the strcture:%d bytes\n", sizeof(s1));
    printf("Size of the union:%d bytes", sizeof(u1));
    return 0;
}