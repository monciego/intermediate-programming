#include <stdio.h>
#include <conio.h>
int Sum(int i, int j);
int main()
{
    int num1, num2;
    printf("Enter first value: "); scanf("%d",&num1);
    printf("Enter second value: "); scanf("%d",&num2);
    printf("Sum is: %d", Sum(num1, num2));
}

int Sum(int i, int j)
{
    int sum;
    sum = i + j;
return sum;
}
