#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("st.txt", "w");
    char ch[50];
    printf("Enter your name:");
    scanf("%s", ch);
    fprintf(fptr, ch);
    fclose(fptr);
    fptr = fopen("st.txt", "r");
    char name[50];
    fscanf(fptr, "%s", &name);
    printf("The data in the file is:%s", name);
    fclose(fptr);
    return 0;
}
