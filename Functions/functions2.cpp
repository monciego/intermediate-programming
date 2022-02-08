#include <stdio.h>
#include <conio.h>
void Sum(int i, int j);
int main()
{
    int num1, num2;
    printf("Enter first value: "); scanf("%d",&num1);
    printf("Enter second value: "); scanf("%d",&num2);
    Sum(num1,num2);
}

void Sum(int i, int j)
{
    int sum;
    sum = i + j;
    printf("Sum is: %d", sum);
}
