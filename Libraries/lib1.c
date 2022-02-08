#include <stdio.h>
#include <conio.h>
#include "add.h"

void main()
{
    int num1, num2, ans;
    printf("Number 1: "); scanf("%d",&num1);
    printf("Number 2: "); scanf("%d",&num2);
    printf("Sum is %d", Addition(num1,num2));
    getche();
}
