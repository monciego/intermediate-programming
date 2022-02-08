#include <stdio.h>
#include <conio.h>
int Sum(int i, int j);
void diff (int a, int b);
int product(int c, int d);
void quo(int e, int f);
int mod (int g, int h);


int main()
{
    int num1, num2;
    printf("Enter first value: ");scanf("%d",&num1);
    printf("Enter second value: "); scanf("%d",&num2);
    printf("Sum is: %d\n", Sum(num1, num2));
    diff (num1, num2);
    printf("Product is: %d\n", product (num1,num2));
    quo (num1, num2);
    printf("Modulo: %d\n", mod (num1,num2));
}

int Sum(int i, int j)
{
    int sum;
    sum = i + j;
return sum;
}
void diff (int a, int b)
{
    int diff;
    diff = a - b;
    printf("Different is: %d\n", diff);
}
int product(int c, int d)
{
    int product;
    product = c * d;
    return product;
}
void quo(int e, int f)
{
    int quo;
    quo = e / f;
    if (quo>=0)
       printf("Quotient is: %d\n", quo);
 else
        printf("Cannot divide by zero");
}
    int mod (int g, int h)
    {
        int mod;
        if (g %2==0)
        mod = g / h;
    }
