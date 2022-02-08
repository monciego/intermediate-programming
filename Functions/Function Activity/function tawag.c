#include <stdio.h>
#include <conio.h>
int Sum(int i, int j);
void diff (int a, int b);
int product(int c, int d);
void quo(float e, float f);
int mod (int g, int h);
int power (int i, int j);


int main()
{
    int num1, num2;
    printf("Enter the First Value: ");scanf("%d",&num1);
    printf("Enter the Second Value: "); scanf("%d",&num2);
    printf("Sum is: %d\n", Sum(num1, num2));
    diff (num1, num2);
    printf("Product is: %d\n", product (num1,num2));
    quo (num1, num2);
    printf("Modulo: %d\n", mod (num1,num2));
    printf("Power: %d\n", power (num1, num2));
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
void quo(float e, float f)
{
    int quo;
    quo = e / f;
    if (quo>=0)
       printf("Quotient is: %d\n", quo);
 else
        printf("Quotient: Cannot divide by zero\n");
}
    int mod (int g, int h)
    {
        int mod;
        if (g %2==0)
        mod = g / h;
    }
int power (int i, int j)
{
int power;
    power = i*i,j;
}
