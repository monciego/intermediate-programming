#include <stdio.h>

int main()
{
    char name[25];

    printf("What is your name?\n");
    gets(name);
    printf("Hello, %s Welcome to C Programming!!!", name);

    return 0;

}
