#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "add.h"

void main()
{
    char name1 [60];
    printf("Enter your name: ");
    gets(name1);
    int string;
    printf("Choose your number: ");
    printf("\n1. Change to lowercase");
    printf("\n2. Change to uppercase");
    printf("\n3. Display length");
    printf("\nEnter number:");
      scanf("%d", &string);
    if(string ==1)
    {
        strlwr(name1); printf("\n%s", name1);
    }
    else if(string == 2)
    {
        strupr(name1); printf("\n%s", name1);
    }
    else if(string==3)
    {
        strlen(name1); printf("\n%d",name1);
    }
}

